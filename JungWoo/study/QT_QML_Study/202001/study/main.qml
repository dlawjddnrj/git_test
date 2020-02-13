import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Rectangle {
        id: rectId
        color: "yellow"
        width: 200
        height: 200
        anchors.centerIn: parent
    }
}
