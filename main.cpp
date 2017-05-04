#include "qtquick1applicationviewer.h"
#include <QtDeclarative>
#include <QApplication>
#include "w_pushbutton.h"
#include "w_calendar.h"
#include "w_table.h"
#include <QDebug>
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    qmlRegisterType<W_PushButton>("MyQWidgetComponents", 1, 0, "PushButton");
    qmlRegisterType<W_Calendar>("MyQWidgetComponents", 1, 0, "Calendar");
    qmlRegisterType<W_Table>("MyQWidgetComponents", 1, 0, "Table");
    QtQuick1ApplicationViewer viewer;
    viewer.setOrientation(QtQuick1ApplicationViewer::ScreenOrientationAuto);
    viewer.setMainQmlFile(QLatin1String("qrc:/qml/main.qml"));
    viewer.showExpanded();

    return app.exec();
}
