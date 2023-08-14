QT      += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

UI_DIR=./

QT += multimedia  multimediawidgets

msvc:QMAKE_CXXFLAGS += -execution-charset:utf-8
msvc:QMAKE_CXXFLAGS += -source-charset:utf-8
QMAKE_CXXFLAGS_WARN_ON += -wd4819

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    CameraCpp/ccamera.cpp \
    CameraCpp/cmindvision.cpp \
    CameraCpp/cqcamera.cpp \
    CustomControlCpp/CMyLineEdit.cpp \
    CustomControlCpp/CMybutton.cpp \
    CustomControlCpp/CmyComBox.cpp \
    ccodecreat.cpp \
    cconnect.cpp \
    cdetect.cpp \
    cfactory.cpp \
    cgrabthread.cpp \
    clogdialog.cpp \
    cparam.cpp \
    cqcameradll.cpp \
    cresource.cpp \
    cviewmap.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    CameraHead/ccamera.h \
    CameraHead/cmindvision.h \
    CameraHead/cqcamera.h \
    Common.h \
    CustomControlHead/CMyButton.h \
    CustomControlHead/CMyComBox.h \
    CustomControlHead/CMyLineEdit.h \
    ccodecreat.h \
    cconnect.h \
    cdetect.h \
    cfactory.h \
    cgrabthread.h \
    clogdialog.h \
    cparam.h \
    cqcameradll.h \
    cresource.h \
    cviewmap.h \
    mainwindow.h

FORMS += \
    ccodecreat.ui \
    cconnect.ui \
    cdetect.ui \
    clogdialog.ui \
    cparam.ui \
    cresource.ui \
    cviewmap.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resource.qrc

