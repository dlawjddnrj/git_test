import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.5

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    signal qmlSignal(var a)

    property string userInput : user_textinput.text

    Item {
        id: itemId
        property string choice: user_textinput.text
    }

    Rectangle {
        id : mainRectId
        width: 300
        height: 300
        color: "black"

        TextInput {
            id: user_textinput
            x: 85
            y: 103
            width: 131
            height: 94
            color: "#ffffff"
            text: qsTr("Text Input")
            font.bold: true
            horizontalAlignment: Text.AlignHCenter
            font.pixelSize: 21
        }
    }

    Rectangle {
        id : rightRectId
        x: 440
        y: 0
        width: 200
        height: 200
        color: "red"

        Button {
            x: 50
            y: 80
            onClicked: {
                qmlSignal(itemId.choice)
            }

            Text {
                id: button_text
                x: 14
                y: 13
                text: qsTr("Click Button!")
                verticalAlignment: Text.AlignVCenter
                font.pixelSize: 12
            }
        }
    }

    Column {
        id: column
        x: 440
        y: 200
        width: 200
        height: 280

        Text {
            id: menu_text
            text: qsTr("----- Menu -----")
            font.pixelSize: 15
        }

        Text {
            id: ver_text
            text: qsTr("1. 버전 확인")
            font.pixelSize: 15
        }

        Text {
            id: cal_text
            text: qsTr("2. 계산기 실행")
            font.pixelSize: 15
        }

        Text {
            id: exit_text
            text: qsTr("3. 프로그램 종료")
            font.pixelSize: 15
        }
    }

    Rectangle {
        id: resultRect
        x: 0
        y: 300
        width: 434
        height: 180
        color: "#17be99"

        Text {
            id: resultText
            objectName: "resultText"
            x: 113
            y: 8
            font.pixelSize: 24
        }
    }
}
