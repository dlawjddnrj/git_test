import QtQuick 2.0

Rectangle {
    width: 200
    height: 100
    color: pro_Color
    border.width: 2
    border.color: "white"

    property bool pro_Power: false
    property string pro_Color: "black"

    Text {
        id: id_Title
        anchors.fill: parent
        text: parent.pro_Power ? qsTr("On") : qsTr("Off");
        font.pixelSize: 20
        font.bold: true
        color: parent.pro_Power ? "red" : "yellow"
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
    }

    MouseArea {
        anchors.fill: parent
        onPressed: parent.pro_Power = true
        onReleased: parent.pro_Power = false
        onClicked: console.log("Clicked")
        onPressedChanged: console.log("state : " + parent.pro_Power)
    }
}
