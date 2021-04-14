import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Rectangle {
        id: main
        width: 600
        height: 300

        Text {
            id: foo
            font.pointSize: 12
            function set() {
                foo.text = Date()
            }
        }

        Timer {
            id: textTimer
            interval: 1000
            repeat: true
            running: true
            triggeredOnStart: true
            onTriggered: foo.set()
        }
    }
}
