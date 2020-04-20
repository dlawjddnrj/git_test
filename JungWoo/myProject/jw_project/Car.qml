import QtQuick 2.0
import QtQuick.Window 2.3
import QtQuick.Controls 2.5
import MyEnum 1.0

Rectangle {
    id: backGroundRect
    color: "#bad76c"

    signal carUpSignal()
    signal carDownSignal()
    signal carLeftSignal()
    signal carRightSignal()
    property int pro_value: 1
    property int pro_X: 270
    property int pro_Y: 140

    Button {
        text: "go to Previous"
        anchors.horizontalCenter: parent.horizontalCenter
        onClicked: {
            id_stackView.pop()
        }
    }

    Connections {
        target: backGroundRect
        onCarUpSignal: {
            pro_X + pro_value
            console.log("pro_X : " + pro_X)
            id_car.visible = true
        }
        onCarDownSignal: {
            pro_X - pro_value
            console.log("pro_X : " + pro_X)
            id_car.visible = false
        }
        onCarLeftSignal: {
            pro_Y - pro_value
            console.log("pro_Y : " + pro_Y)
        }
        onCarRightSignal: {
            pro_Y + pro_value
            console.log("pro_Y : " + pro_Y)
        }
    }

    Rectangle {
        id: leftLine
        x: 240
        width: 5
        height: 768
        color: "white"
    }

    Rectangle {
        id: rightLine
        x: 760
        width: 5
        height: 768
        color: "white"
    }

    Rectangle {
        id: id_car
        x: pro_X
        y: pro_Y
        width: 100
        height: 200
        color: "#357fdc"
        radius: 10
        border.width: 3
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter

        Rectangle {
            id: rightFrontWheel
            anchors.left: id_car.right
            anchors.top: id_car.top
            width: 24
            height: 28
            color: "white"
            radius: 12
            border.width: 3
        }

        Rectangle {
            id: rightRearWheel
            anchors.left: id_car.right
            anchors.bottom: id_car.bottom
            width: 24
            height: 28
            color: "white"
            radius: 12
            border.width: 3
        }

        Rectangle {
            id: leftRearWheel
            anchors.right: id_car.left
            anchors.bottom: id_car.bottom
            width: 24
            height: 28
            color: "white"
            radius: 12
            border.width: 3
        }

        Rectangle {
            id: leftFrontWheel
            anchors.right: id_car.left
            anchors.top: id_car.top
            width: 24
            height: 28
            color: "white"
            radius: 12
            border.width: 3
        }
    }

    focus: true
    Keys.onPressed: {
        console.log("Key Pressed : " + event.key)
        switch(event.key) {
        case MYEnum.LEFT :     // 왼
            carLeftSignal()
        case MYEnum.UP :     // 위
            carUpSignal()
        case MYEnum.RIGHT :     // 오
            carRightSignal()
        case MYEnum.DOWN :     // 아
            carDownSignal()
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
