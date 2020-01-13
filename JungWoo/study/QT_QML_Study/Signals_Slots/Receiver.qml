import QtQuick 2.11

Item {

    property alias rectColor: receiverRectId.color
    width: receiverRectId.width
    height: receiverRectId.height

    function receiveInfo(count) {
        receiverDisplayLayTextId.text = count
        console.log("Receiver received number : " + count)
    }

    Rectangle {
        id : receiverRectId
        width: 200
        height: 200
        color: "red"

        Text {
            id : receiverDisplayLayTextId
            anchors.centerIn: parent
            font.pointSize: 20
            text : "0"
        }
    }
}
