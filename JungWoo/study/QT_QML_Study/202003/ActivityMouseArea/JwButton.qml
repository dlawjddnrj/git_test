import QtQuick 2.0

Rectangle {
    id: powerRect
    width: 200
    height: 200
    color: "gray"
    visible: power ? true : false

    property bool power: false

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
                console.log("Pressed !")
            }

            onReleased: {
                powerRect.power = false
                console.log("Released ~")
            }

            onPressAndHold: console.log("And Hold!!!")
        }
    }

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
