#include "w_calendar.h"

W_Calendar::W_Calendar(QGraphicsItem *parent) : QGraphicsProxyWidget(parent)
{
    widget = new QCalendarWidget();
    widget->setAttribute(Qt::WA_NoSystemBackground);
    setWidget(widget);
    QObject::connect(widget, SIGNAL(clicked(QDate)), this, SIGNAL(clicked(QDate)));
}
