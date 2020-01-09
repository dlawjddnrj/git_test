import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.5

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    signal qmlSignal(var a)

    property string a

    Item {
        id: itemId
        property string name: "Hello~"
    }

    Rectangle {
        id : mainRectId
        width: 300
        height: 300
        color: "black"

        TextArea {
            id: textAreaId
            width: 200
            height: 200
            color: "white"
            text: a
        }
    }

    Rectangle {
        id : rightRectId
        x: 440
        y: 0
        width: 200
        height: 200
        color: "red"

        Button {
            x: 50
            y: 80
            onClicked: {
                qmlSignal(itemId.name)
            }
        }
    }
}
