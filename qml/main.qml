import QtQuick 1.1
import MyQWidgetComponents 1.0

Item {
    id: window
    width: 320; height: button.height+calendar.height
    PushButton{
        id: button
        onClicked: {
            text="clicked!";
        }
        width:parent.width
    }
    Calendar{
        id: calendar
        x: 0
        y: button.y+button.height
        onClicked: {
            button.text = clickedDate.toString().slice(4,15);
        }
        width: parent.width
    }

}
