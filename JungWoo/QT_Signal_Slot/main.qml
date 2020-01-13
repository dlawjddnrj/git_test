import QtQuick 2.2
import QtQuick.Window 2.12
import QtQuick.Controls 2.5
import QtQuick.Dialogs 1.3

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    signal qmlSignal(var a)

    Item {
        id: itemId
        property string choice: user_textedit.text
    }

    Image {
        x: 0
        y: 0
        anchors.fill: parent
        source: "file:///Git_Group_Server/JungWoo/QT_Signal_Slot/image/background.jpg"
    }

    Rectangle {
        id : mainRectId
        width: 300
        height: 300
        color: "black"

        TextEdit {
            id: user_textedit
            x: 0
            y: 0
            width: 300
            height: 300
            color: "#ffffff"
            text: qsTr("Text Input !")
            font.bold: true
            horizontalAlignment: Text.AlignHCenter
            font.pixelSize: 21

            focus: true
            Keys.onPressed: {
                console.log("Key Pressed : " + event.key)
                switch(event.key) {
                case 16777220:
                    qmlSignal(itemId.choice)
                case 16777221:
                    qmlSignal(itemId.choice)
                }
            }
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
            id : buttonId
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
            verticalAlignment: Text.AlignTop
            font.pixelSize: 20
        }

        Text {
            id: ver_text
            text: qsTr("1. 버전 확인")
            font.pixelSize: 20
        }

        Text {
            id: cal_text
            text: qsTr("2. 계산기 실행")
            font.pixelSize: 20
        }

        Text {
            id: exit_text
            text: qsTr("3. 프로그램 종료")
            font.pixelSize: 20
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
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
            font.pixelSize: 24
        }
    }

    /*      if문 써서 userInput: 에 3이라면 아래 메시지박스를 띄워야 함.
    MessageDialog {
        title:  "Exit Program ?"
        icon:  StandardIcon.Question
        text:  "프로그램을 종료하시겠습니까 ?"
        standardButtons:  StandardButton.Yes | StandardButton.No
        Component.onCompleted: visible = true
        onYes: Qt.quit()
        onNo: console.log("continue !")
    } */
}
