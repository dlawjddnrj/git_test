import QtQuick 2.6
import QtQuick.Window 2.2
import QtQuick.Controls 2.2

Window {
    width: 640; height: 480
    visible: true
    title: qsTr("Excel Program")

    signal qmlSignal()

    Rectangle {
        id: mainRect
        width: 200; height: 200
        anchors.centerIn: parent
        color: "yellow"

        Button {
            id: mainRectButton
            anchors.fill: parent
            text: qsTr("cpp에 신호를 보내는 Button")
            onClicked: {
                qmlSignal()
            }
        }
        StackView {
            id: stack
            anchors.fill: parent
            initialItem: Page {
                Button {
                    id: mainButton
                    text: "main QML ~"
                    anchors.centerIn: parent
                    onClicked: stack.push(Qt.resolvedUrl("main.qml"))
                }
                Button {
                    text: "의미 없는 버튼 ~"
                    anchors.right: mainButton.right
                    onClicked: stack.push(Qt.resolvedUrl("MainForm.ui.qml"))
                }
            }
        }
    }
}
