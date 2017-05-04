#include "w_table.h"

W_Table::W_Table(QGraphicsItem *parent)
{
    widget = new QTableWidget(6, 3);
    widget->setAttribute(Qt::WA_NoSystemBackground);
    setWidget(widget);
//    QObject::connect(widget, SIGNAL(clicked(QDate)), this, SIGNAL(clicked(QDate)));
}
