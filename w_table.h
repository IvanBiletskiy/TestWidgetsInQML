#ifndef W_TABLE_H
#define W_TABLE_H

#include <QTableWidget>
#include <QtGui/QGraphicsProxyWidget>

class W_Table : public QGraphicsProxyWidget
{
    Q_OBJECT
public:
    W_Table(QGraphicsItem *parent = 0);

signals:

public slots:

private:
    QTableWidget *widget;
};

#endif // W_TABLE_H
