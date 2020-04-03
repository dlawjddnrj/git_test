import QtQuick 2.12
import QtQuick.Window 2.12
import "."

Window {
    visible: true
    width: 500
    height: 500
    title: qsTr("Activity MouseArea Test Program")

    property bool power: false
    signal powerSignal(bool power_)
    function buttonClickProcess() {
        var state = power

        power = !power

        if(power !== state)
            return true
        else
            return false
    }

    Rectangle {
        id: powerRect
        anchors.fill: parent
        width: 200
        height: 200
        color: "gray"
        visible: power ? true : false

        Rectangle {
            id: subRect
            anchors.right: mainRect.left
            anchors.bottom: mainRect.bottom
            width: 100
            height: 100
            color: "orange"

            Text {
                id: subRectText
                text: qsTr("서브 Rect입니다.")
                anchors.fill: subRect
            }
        }
    }

    Rectangle {
        id: mainRect
        anchors.centerIn: parent
        width: 100
        height: 100
        color: "red"
        Text {
            id: mainRectText
            text: qsTr("MouseArea가 적용되어 있는 영역입니다.")
            anchors.fill: mainRect
        }

        MouseArea {
            id: mainRectMouseArea
            anchors.fill: mainRect
            onPressed: {
                powerRect.power = true
                powerSignal(pressed)
                console.log("Pressed !")
            }

            onReleased: {
                powerRect.power = false
                console.log("Released ~")
            }

            onPressAndHold: console.log("And Hold!!!")
        }
    }
}
