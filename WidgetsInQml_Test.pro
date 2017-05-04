# Add more folders to ship with the application, here


# Additional import path used to resolve QML modules in Creator's code model
QML_IMPORT_PATH =

QT += widgets

# The .cpp file which was generated for your project. Feel free to hack it.
SOURCES += main.cpp \
    w_pushbutton.cpp \
    w_calendar.cpp \
    w_table.cpp

include(qtquick1applicationviewer/qtquick1applicationviewer.pri)

RESOURCES += qml.qrc

HEADERS += \
    w_pushbutton.h \
    w_calendar.h \
    w_table.h
