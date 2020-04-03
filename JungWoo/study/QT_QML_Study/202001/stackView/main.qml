import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.5

Window {
    visible: true
    width: 1024
    height: 768
    title: qsTr("Hello World")

    StackView {
        id: stack
        anchors.fill: parent
        initialItem: Item {

            Rectangle {
                anchors.fill: parent
                color: "greenyellow"
            }

            Text {
                id: mainScreenTitle
                anchors.horizontalCenter: parent.horizontalCenter
                text: qsTr("mainScreenTitle")
                font.pixelSize: 50
                font.bold: true
            }

            Text {
                id: mainCenterText
                text: qsTr("이것은 첫번째 메인 화면입니다.")
                font.pixelSize: 30
                anchors.centerIn: parent
            }

            Button {
                anchors.top: mainCenterText.bottom
                anchors.horizontalCenter: parent.horizontalCenter
                text: qsTr("다음 페이지")
                onClicked: {
                    stack.push(Qt.resolvedUrl("qrc:/page1.qml"))
                }
            }
        }
    }
}
