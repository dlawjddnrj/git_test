import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: 1024
    height: 768
    title: qsTr("Hello World")

    Rectangle {
        id: root
        color: "black"
        anchors.fill: parent

        property int padding: 40
        property int duration: 4000
        property bool running: false
        property double opa: 1

        Rectangle {
            id: box
            x: root.padding;
            y: (root.height-height)/2
            height: 100
            width: 100
            color: "red"
            opacity: opa

            NumberAnimation on x {
                to: root.width - box.width - root.padding
                duration: root.duration
                running: root.running
            }
            RotationAnimation on rotation {
                to: 360
                duration: root.duration
                running: root.running
            }

            ColorAnimation {
                from: "white"
                to: "black"
                duration: 200
                running: root.running
            }
        }

        MouseArea {
            anchors.fill: parent
            onClicked: root.running = true
        }

    }

}
