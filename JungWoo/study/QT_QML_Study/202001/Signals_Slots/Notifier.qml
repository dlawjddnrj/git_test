import QtQuick 2.11

Item {

    property alias rectColor: nofifierRectId.color
    width: nofifierRectId.width
    height: nofifierRectId.height
    property int count: 0
    signal notify(string count)     // Declare signal
    property Receiver target: null

    onTargetChanged: {
        notify.connect(target.receiveInfo)
    }

    Rectangle {
        id : nofifierRectId
        width: 200
        height: 200
        color: "red"

        Text {
            id : displayTextId
            anchors.centerIn: parent
            font.pointSize: 20
            text : count
        }

        MouseArea {
            anchors.fill: parent
            onClicked: {
                count++
                notify(count)
            }
        }
    }
}
