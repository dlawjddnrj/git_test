import QtQuick 2.0
import QtQuick.Controls 2.5

Item {
    width: 1024; height: 768

    Rectangle {
        anchors.fill: parent
        color: "gray"
    }
    Text {
        id: page1TitleText
        anchors.horizontalCenter: parent.horizontalCenter
        text: qsTr("page1Title")
        font.pixelSize: 50
        font.bold: true
    }

    Text {
        id: page1MainText
        text: qsTr("이곳은 page1 입니다.")
        font.pixelSize: 30
        anchors.centerIn: parent
    }

    Button {
        anchors.top: page1MainText.bottom
        anchors.horizontalCenter: parent.horizontalCenter
        text: qsTr("다음 페이지")
        onClicked: {
//            StackView.push("qrc:/page2.qml")
        }
    }

    Button {
        anchors.top: page1MainText.bottom
        anchors.horizontalCenter: page1MainText.horizontalAlignment
        text: qsTr("이전 페이지")
        onClicked: {
            StackView.pop()
        }
    }
}
