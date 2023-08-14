#include "cgrabthread.h"
#include <QDebug>

CGrabThread::CGrabThread(QObject *parent)
    : QThread{parent},
      pauseFlag(false),
      stopFlag(false)
{

}

CGrabThread::~CGrabThread()
{
    stop();
}

void CGrabThread::run()
{
    forever
    {
        if (!stopFlag)
        {
            if (pauseFlag)
            {
                mutex.lock();
                condition.wait(&mutex);
                mutex.unlock();
            }
            else{
                 emit getImage();
            }
        }
    }
}

void CGrabThread::start(Priority pri)
{
    QThread::start(pri);
}

void CGrabThread::stop()
{
    if (QThread::isRunning())
      {
          stopFlag = true;
          condition.wakeAll();
          QThread::quit();
          QThread::wait();
      }
}


void CGrabThread::pause()
{
    if (QThread::isRunning())
     {
         pauseFlag = true;
     }
}


void CGrabThread::resume()
{
    if (QThread::isRunning())
     {
         pauseFlag = false;
         condition.wakeAll();
     }
}

CGrabThread::State CGrabThread::state() const
{
    State s = Stoped;
    if (!QThread::isRunning())
    {
        s = Stoped;
    }
    else if (QThread::isRunning() && pauseFlag)
    {
        s = Paused;
    }
    else if (QThread::isRunning() && (!pauseFlag))
    {
        s = Running;
    }
    return s;
}
