import QtQuick 2.0

Item {
    MouseArea {
        id: id_mouseArea
        anchors.fill: parent
        objectName: "obj_mouseArea"

        property bool pro_Pressed: false

        onPressed: {
            console.log("onPressed")
            pro_Pressed = ture
        }

        onReleased: {
            console.log("onReleased")
        }

        onExited: {
            console.log("onExited")
        }

        onClicked: {
            console.log("onClicked")
        }

        onCanceled: {
            console.log("onCanceled")
        }
    }
}
