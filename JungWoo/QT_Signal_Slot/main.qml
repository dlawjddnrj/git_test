import QtQuick 2.9
import QtQuick.Window 2.12
import QtQuick.Controls 2.5
import QtQuick.Dialogs 1.3

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    signal qmlSignal(var a)
    signal qmlSignal2(var data)
    signal calculator()

    function qmlSlotTestData() {
        qmlSignal(itemId.choice)
        qmlSignal2(itemId.choice)
    }

    function buttonClicked() {
        calculator()
    }

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
                    qmlSlotTestData()
                case 16777221:
                    qmlSlotTestData()
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
                qmlSlotTestData()
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
        width: 300
        height: 180
        color: "#17be99"

        Text {
            id: resultText
            objectName: "resultText"
            x: 3
            y: 14
            topPadding: 70
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
            font.pixelSize: 24
        }
    }

    Rectangle {
        id: rectangle
        x: 0
        y: 280
        width: 641
        height: 200
        color: "#4309a0"
        objectName: "rectangle"
        visible: false

        Button {
            id: button_num0
            objectName: "button_objnum0"
            x: 365
            y: 160
            width: 57
            height: 40
            text: qsTr("0")
            background: Rectangle {
                color: "#FFC748"
            }
            onClicked: {
                buttonClicked()
            }
        }

        Button {
            id: button_num1
            objectName: "button_objnum1"
            x: 290
            y: 110
            width: 57
            height: 40
            text: qsTr("01")
            background: Rectangle {
                color: "#FFC748"
            }
        }

        Button {
            id: button_num2
            objectName: "button_objnum2"
            x: 365
            y: 110
            width: 57
            height: 40
            text: qsTr("02")
            background: Rectangle {
                color: "#FFC748"
            }
        }

        Button {
            id: button_num3
            objectName: "button_objnum3"
            x: 440
            y: 110
            width: 57
            height: 40
            text: qsTr("03")
            background: Rectangle {
                color: "#FFC748"
            }
        }

        Button {
            id: button_num4
            objectName: "button_objnum4"
            x: 290
            y: 60
            width: 57
            height: 40
            text: qsTr("04")
            background: Rectangle {
                color: "#FFC748"
            }
        }

        Button {
            id: button_num5
            objectName: "button_objnum5"
            x: 365
            y: 60
            width: 57
            height: 40
            text: qsTr("05")
            background: Rectangle {
                color: "#FFC748"
            }
        }

        Button {
            id: button_num6
            objectName: "button_objnum6"
            x: 440
            y: 60
            width: 57
            height: 40
            text: qsTr("06")
            background: Rectangle {
                color: "#FFC748"
            }
        }

        Button {
            id: button_num7
            objectName: "button_objnum7"
            x: 290
            y: 10
            width: 57
            height: 40
            text: qsTr("07")
            background: Rectangle {
                color: "#FFC748"
            }
        }

        Button {
            id: button_num8
            objectName: "button_objnum8"
            x: 365
            y: 10
            width: 57
            height: 40
            text: qsTr("08")
            background: Rectangle {
                color: "#FFC748"
            }
        }

        Button {
            id: button_num9
            objectName: "button_objnum9"
            x: 440
            y: 10
            width: 57
            height: 40
            text: qsTr("09")
            background: Rectangle {
                color: "#FFC748"
            }
        }

        Button {
            id: button_plus
            x: 523
            y: 10
            width: 96
            height: 42
            text: qsTr("+")
            font.bold: true
            font.pointSize: 18
            background: Rectangle {
                color: "#9FE833"
            }
        }

        Button {
            id: button_miuns
            x: 523
            y: 60
            width: 96
            height: 42
            text: qsTr("-")
            font.pointSize: 18
            font.bold: true
            background: Rectangle {
                color: "#9FE833"
            }
        }

        Button {
            id: button_mul
            x: 523
            y: 110
            width: 96
            height: 42
            text: qsTr("X")
            font.pointSize: 18
            font.bold: true
            background: Rectangle {
                color: "#9FE833"
            }
        }

        Button {
            id: button_div
            x: 523
            y: 160
            width: 96
            height: 42
            text: qsTr("/")
            font.pointSize: 18
            font.bold: true
            background: Rectangle {
                color: "#9FE833"
            }
        }

        Button {
            id: button_clear
            x: 440
            y: 160
            width: 56
            height: 40
            text: qsTr("AC")
            background: Rectangle {
                color: "#ffc748"
            }
        }

        Text {
            id: calculatorTextFrist
            x: 10
            y: 25
            width: 50
            height: 27
            objectName: "fristtext"
            color: "#ffffff"
            text: qsTr("")
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
            font.bold: true
            font.pixelSize: 18
            Rectangle {
                width: calculatorTextFrist.width
                height: calculatorTextFrist.height
                border.color: "white"
                border.width: 3
                color: "transparent"
            }
        }

        Text {
            id: signText
            x: 70
            y: 25
            width: 26
            height: 27
            color: "#ffffff"
            text: qsTr("+")
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
            font.bold: true
            font.pixelSize: 20
            Rectangle {
                width: signText.width
                height: signText.height
                border.color: "white"
                border.width: 3
                color: "transparent"
            }
        }
        Text {
            id: calculatorTextSecond
            x: 108
            y: 25
            width: 50
            height: 27
            color: "#ffffff"
            text: qsTr("0")
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
            font.bold: true
            font.pixelSize: 18
            Rectangle {
                width: calculatorTextSecond.width
                height: calculatorTextSecond.height
                border.color: "white"
                border.width: 3
                color: "transparent"
            }
        }

        Text {
            id: calcultaorSignText
            x: 169
            y: 25
            width: 26
            height: 27
            color: "#ffffff"
            text: qsTr("=")
            font.pixelSize: 20
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
            Rectangle {
                width: calcultaorSignText.width
                height: calcultaorSignText.height
                color: "#00000000"
                border.width: 3
                border.color: "#ffffff"
            }
            font.bold: true
        }

        Text {
            id: calcultaorResultText
            x: 201
            y: 25
            width: 83
            height: 27
            color: "#ffffff"
            text: qsTr("123456")
            font.pixelSize: 20
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
            Rectangle {
                width: calcultaorResultText.width
                height: calcultaorResultText.height
                color: "#00000000"
                border.width: 3
                border.color: "#ffffff"
            }
            font.bold: true
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



/*##^## Designer {
    D{i:46;invisible:true}
}
 ##^##*/
