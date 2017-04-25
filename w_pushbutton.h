#ifndef CUSTOMWIDGET_H
#define CUSTOMWIDGET_H

#include <QtGui/QGraphicsProxyWidget>
#include <QtGui/QPushButton>

class W_PushButton : public QGraphicsProxyWidget
{
    Q_OBJECT
    Q_PROPERTY(QString text READ text WRITE setText NOTIFY textChanged)

public:
    explicit W_PushButton(QGraphicsItem *parent = 0);
    QString text() const;
    void setText(const QString& text);

Q_SIGNALS:
    void clicked(bool);
    void textChanged();

public slots:
private:
    QPushButton *widget;

};

#endif // CUSTOMWIDGET_H
