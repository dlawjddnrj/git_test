import QtQuick 2.12

Item {
    id : rootId
    property alias buttonText: buttonTextId.text
    width: containerRectId.width
    height: containerRectId.height
    signal buttonClicked

    Rectangle {
        id : containerRectId
        width: buttonTextId.implicitWidth + 20
        height: buttonTextId.implicitHeight + 20
        color: "red"
        border { color: "blue"; width : 3 }

        Text {
            id : buttonTextId
            text: "Button"
            anchors.centerIn: parent
        }

        MouseArea {
            anchors.fill: parent
            onClicked: {
                //console.log("Cliked ON : " + buttonTextId.text)
                rootId.buttonClicked()
            }
        }
    }
}
