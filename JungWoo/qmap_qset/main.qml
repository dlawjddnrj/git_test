import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.5

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    signal qmlSignal(var a)

    Rectangle {
        id : rect_main
        width: 100
        height: 50
        color: "yellowgreen"
        anchors.fill: parent
        anchors.horizontalCenter: parent
    }

    Item {
        width: 100; height: 100

        Rectangle {
            id : rect_sub
            width: 200
            height: 200
            color: "pink"
            anchors.rightMargin: 5
            anchors.bottomMargin: 5
            anchors.right: parent
            anchors.bottom: parent
            MouseArea {
                anchors.fill: parent
                onClicked: {
                    objectName : "Click"
                    console.log("Clicked pink Rectangle!")
                }
            }
        }
    }
}
