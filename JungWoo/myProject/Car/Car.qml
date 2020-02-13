import QtQuick 2.0
import QtQuick.Window 2.3
import QtQuick.Controls 2.5

Window {
    id:car_window
    visible: true
    width: 640
    height: 480
    title: qsTr("Car")

    signal qmlsignal(var a)
    property int keyType: 1

    Rectangle {
        id: backGroundRect
        x: 0
        y: 0
        width: 640
        height: 480
        color: "#bad76c"

        Rectangle {
            id: leftLine
            x: 132
            y: 0
            width: 5
            height: 480
            color: "#ffffff"
        }

        Rectangle {
            id: rightLine
            x: 517
            y: 0
            width: 5
            height: 480
            color: "#ffffff"
        }

        Rectangle {
            id: car
            objectName: "car"
            x: 274
            y: 140
            width: 92
            height: 200
            color: "#357fdc"
            radius: 10
            border.width: 3

            Rectangle {
                id: rightFrontWheel
                objectName: "rightFrontWheel"
                x: 89
                y: 0
                width: 24
                height: 28
                color: "#ffffff"
                radius: 12
                border.width: 3
            }

            Rectangle {
                id: rightRearWheel
                objectName: "rightRearWheel"
                x: 89
                y: 172
                width: 24
                height: 28
                color: "#ffffff"
                radius: 12
                border.width: 3
            }

            Rectangle {
                id: leftRearWheel
                objectName: "leftRearWheel"
                x: -23
                y: 172
                width: 24
                height: 28
                color: "#ffffff"
                radius: 12
                border.width: 3
            }

            Rectangle {
                id: leftFrontWheel
                objectName: "leftFrontWheel"
                x: -22
                y: 0
                width: 24
                height: 28
                color: "#ffffff"
                radius: 12
                border.width: 3
            }
        }

        focus: true
        Keys.onPressed: {
            console.log("Key Pressed : " + event.key)
            switch(event.key) {
            case 16777234 :
                    qmlsignal(keyType.valueOf())
            case 16777235 :
                    qmlsignal(2)
            case 16777236 :
                    qmlsignal(3)
            case 16777237 :
                    qmlsignal(4)
            }
        }

        // 방향키 누르면 DelayButton 활성화 되게 코드 짜기
//        DelayButton {
//            id: delayButton
//            x: 234
//            y: 69
//            text: qsTr("Delay Button")
//        }
    }

}
