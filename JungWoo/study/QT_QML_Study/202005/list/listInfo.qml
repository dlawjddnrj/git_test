import QtQuick 2.0
import QtQuick.Controls 2.0
import ConnectEvent 1.0

Item {
    width: 800
    height: 600

    ConnectEvent {
        id: id_connectEvent
    }

    Component.onCompleted: {
        id_testText.text = connectEvent.getListInfomation(mListClickIndex)
    }
    Component.onDestruction: {

    }

    Rectangle {     // 배경
        anchors.fill: parent
        color: "yellowgreen"
    }

    Text {
        id: id_testText
        anchors.centerIn: parent
        text: "screen 1"
        font.pixelSize: 50
        font.bold: true
    }

    Button {
        id: id_previousButton
        anchors.top: id_testText.bottom
        anchors.horizontalCenter: parent.horizontalCenter
        text: "go previous screen"
        onClicked: {
            console.log("pop screen 1")
            id_stackView.pop();
        }
    }
}
