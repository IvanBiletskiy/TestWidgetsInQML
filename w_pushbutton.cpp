#include "w_pushbutton.h"

W_PushButton::W_PushButton(QGraphicsItem *parent) : QGraphicsProxyWidget(parent)
{
    widget = new QPushButton("My button");
    widget->setAttribute(Qt::WA_NoSystemBackground);
    setWidget(widget);
    QObject::connect(widget, SIGNAL(clicked(bool)), this, SIGNAL(clicked(bool)));
}

QString W_PushButton::text() const
{
    return widget->text();
}

void W_PushButton::setText(const QString &text)
{
    if (text != widget->text()) {
        widget->setText(text);
        emit textChanged();
    }
}
