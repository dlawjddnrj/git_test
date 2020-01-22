import QtQuick 2.6
import QtQuick.Window 2.2
import QtQuick.Controls 2.2

Window {
    visible: true
    width: 1024
    height: 768
    title: qsTr("Hello World")

    MainForm {
        anchors.fill: parent
        mouseArea.onClicked: {
            console.log(qsTr('Clicked on background. Text: "' + textEdit.text + '"'))
        }
    }

    Rectangle {
        id: centerRect
        width: 300; height: 300
        color: "red"
        anchors.centerIn: parent

        Loader { id: pageLoader }

        Button {
            id: centerRectButton
            anchors.centerIn: centerRect
            text: qsTr("Click To Button ~")
            onClicked: pageLoader.source = "Test.qml"
        }
    }

    Rectangle {
        id: rightRect
        width: 300; height: 300
        color: "yellow"
        anchors.right: centerRect.left
        Button {
            id: rightRectButton
            text: qsTr("Click To Button ~")
        }
    }

    Rectangle {
        id: leftRect
        width: 300; height: 300
        color: "green"
        anchors.left: centerRect.right
        Button {
            id: leftRectButton
            text: qsTr("Click To Button ~")
        }
    }
}
