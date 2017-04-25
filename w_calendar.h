#ifndef W_CALENDAR_H
#define W_CALENDAR_H
#include <QtGui/QGraphicsProxyWidget>
#include <QtGui/QCalendarWidget>

class W_Calendar : public QGraphicsProxyWidget
{
    Q_OBJECT

public:
    W_Calendar(QGraphicsItem *parent = 0);

Q_SIGNALS:
    void clicked(QDate clickedDate);

private:
    QCalendarWidget *widget;
};

#endif // W_CALENDAR_H
