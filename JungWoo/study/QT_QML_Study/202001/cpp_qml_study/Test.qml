import QtQuick 2.0
import QtQuick.Window 2.2
import QtQuick.Controls 2.2

Window {
    visible: true
    width: 1024; height: 768
    title: qsTr("Test.qml Window")

    Item {
        Rectangle {
            id: testRect
            color: "blue"
            width: 150; height: 150
            anchors.centerIn: parent
        }
    }
}
