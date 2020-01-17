import QtQuick 2.11

Item {

    property bool powerOn: false

    Rectangle {
        id: centerRect
        width: 200; height: 100
        anchors.centerIn: parent
        color: "black"
        border.width: 3
        border.color: "red"

        Text {
            id: centerRectText
            anchors.fill: parent
            text: qsTr("컴포넌트 예제 Text")
            font.pixelSize: 20
            font.bold: true
            font.family: "나눔고딕"
            color: "yellow"
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
        }
    }

    Rectangle {
        id:rightRect
        width: 200; height: 100
        anchors.left: centerRect.right
        anchors.bottom: centerRect.bottom
        color: powerOn ? "yellow" : "blue"
        border.width: 2
        border.color: powerOn ? "blue" : "yellow"

        Text {
            id: rightRectText
            text: powerOn ? qsTr("On") : qsTr("Off")
            anchors.fill: parent
            font.pixelSize: 18
            font.bold: true
            font.family: "나눔고딕"
            color: powerOn ? "blue" : "yellow"
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter

            MouseArea {
                width: rightRect.width; height: rightRect.height
                anchors.fill: parent
                onPressed: powerOn = true
                onReleased: powerOn = false
                onClicked: console.log("clicked right Button !")
                onPressedChanged: console.log("state: " + powerOn)
            }
        }
    }

    Rectangle {
        id:leftRect
        width: 200; height: 100
        anchors.right: centerRect.left
        anchors.bottom: centerRect.bottom
        color: powerOn ? "pink" : "red"
        border.width: 2
        border.color: powerOn ? "red" : "pink"

        Text {
            id: leftRectText
            text: powerOn ? qsTr("On") : qsTr("Off")
            anchors.fill: parent
            font.pixelSize: 18
            font.bold: true
            font.family: "나눔고딕"
            color: powerOn ? "purple" : "mint"
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter

            MouseArea {
                width: leftRect.width; height: leftRect.height
                anchors.fill: parent
                onPressed: powerOn = true
                onReleased: powerOn = false
                onClicked: console.log("clicked left Button !")
            }
        }
    }

    Rectangle {
        id:topRect
        width: 200; height: 100
        anchors.right: centerRect.right
        anchors.bottom: centerRect.top
        color: powerOn ? "white" : "black"
        border.width: 2
        border.color: powerOn ? "black" : "white"

        Text {
            id: topRectText
            text: powerOn ? qsTr("On") : qsTr("Off")
            anchors.fill: parent
            font.pixelSize: 18
            font.bold: true
            font.family: "나눔고딕"
            color: powerOn ? "black" : "white"
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter

            MouseArea {
                width: topRect.width; height: topRect.height
                anchors.fill: parent
                onPressed: powerOn = true
                onReleased: powerOn = false
                onClicked: console.log("click top Button !")
            }
        }
    }

    Rectangle {
        id:bottomRect
        width: 200; height: 100
        anchors.left: centerRect.left
        anchors.top: centerRect.bottom
        color: powerOn ? "yellowgreen" : "orange"
        border.width: 2
        border.color: powerOn ? "orange" : "yellowgreen"

        Text {
            id: bottomRectText
            text: powerOn ? qsTr("On") : qsTr("Off")
            anchors.fill: parent
            font.pixelSize: 18
            font.bold: true
            font.family: "나눔고딕"
            color: powerOn ? "black" : "red"
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter

            MouseArea {
                width: bottomRect.width; height: bottomRect.height
                anchors.fill: parent
                onPressed: powerOn = true
                onReleased: powerOn = false
                onClicked: console.log("Click bottom Button !")
            }
        }
    }
}
