/***
 * time:2023/5/9
 * function:线程模块
 * **/
#ifndef CGRABTHREAD_H
#define CGRABTHREAD_H

#include <QThread>
#include <atomic>
#include <QMutex>
#include <QWaitCondition>


class CGrabThread : public QThread
{
    Q_OBJECT
public:
    explicit CGrabThread(QObject *parent = nullptr);

    ~CGrabThread();

    enum State
    {
        Stoped,     ///<停止状态，包括从未启动过和启动后被停止
        Running,    ///<运行状态
        Paused      ///<暂停状态
    };

    void run();
    void start(Priority pri = InheritPriority);
    void stop();
    void pause();
    void resume();

     State state() const;

private:
    std::atomic_bool pauseFlag;
    std::atomic_bool stopFlag;
    QMutex mutex;
    QWaitCondition condition;

signals:
    void getImage();
};

#endif // CGRABTHREAD_H
