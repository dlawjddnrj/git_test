import QtQuick 2.6
import QtQuick.Window 2.2
import QtQuick.Controls 2.2

Window {
    visible: true
    width: 1024
    height: 768
    title: qsTr("Main Window")

    signal mainQmlSignal()

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

        Button {
            id: centerRectButton
            anchors.centerIn: centerRect
            text: qsTr("엑셀 프로그램 실행 !")
            onClicked: {
                mainQmlSignal()
                pageLoader.source = "Excel.qml"
            }
        }
    }

    Rectangle {
        id: rightRect
        width: 300; height: 300
        color: "yellow"
        anchors.left: centerRect.right
        Button {
            id: rightRectButton
            anchors.centerIn: rightRect
            text: qsTr("Click To Button ~")
            onClicked: uiLoader.source = "mainwindow.ui"
        }
    }

    Rectangle {
        id: leftRect
        width: 300; height: 300
        color: "green"
        anchors.right: centerRect.left
        Button {
            anchors.centerIn: leftRect
            id: leftRectButton
            text: qsTr("Click To Button ~")
        }
    }
    Loader { id: pageLoader }
    Loader { id: uiLoader }
}
