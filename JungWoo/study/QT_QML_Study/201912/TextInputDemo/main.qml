import QtQuick 2.12
import QtQuick.Window 2.12
/*
Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("TextInput Element Demo")

    Row {
        x : 10; y : 10
        spacing: 10

        Rectangle {
            id : firstNameRectId
            width: firstNameLabeId.implicitWidth + 20
            height: firstNameLabeId.implicitHeight + 20
            color: "beige"

            Text {
                id : firstNameLabeId
                anchors.centerIn: parent
                text: "FirstName : "
//                onEditingFinished: {
//                    console.log("The first name changed to : " + text)
//                }
            }
        }

        Rectangle {
            id : firstNameTextRectId
            color: "beige"
            width: firstNameTextId.implicitWidth + 20
            height: firstNameTextId.implicitHeight + 20

            TextInput {
                id : firstNameTextId
                anchors.centerIn: parent
                focus: true
                text: "Type in your first name"
            }
        }
    }

    Row {
        x : 10; y : 60
        spacing: 10

        Rectangle {
            id : lastNameRectId
            width: lastNameLabeId.implicitWidth + 20
            height: lastNameLabeId.implicitHeight + 20
            color: "beige"

            Text {
                id : lastNameLabeId
                anchors.centerIn: parent
                text: "lastName : "
            }
        }

        Rectangle {
            id : lastNameTextRectId
            color: "beige"
            width: lastNameTextId.implicitWidth + 20
            height: lastNameTextId.implicitHeight + 20

            TextInput {
                id : lastNameTextId
                anchors.centerIn: parent
                focus: true
                text: "Type in your last name"
            }
        }
    }
} */

/*
Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("TextEdit Demo")

    Flickable {
        id : mFlickableId

        width: textInputId.width
        contentHeight: textInputId.implicitHeight
        height: 300
        clip: true
        anchors.centerIn: parent

        TextEdit {
            id : textInputId
            anchors.centerIn: parent
            width: 240
            text: "<b>Hello<b> <i>World!<i>"
            wrapMode: TextEdit.Wrap             // 자동 줄바꿈
            textFormat: TextEdit.RichText

            font.family: "Helvetica"
            font.pointSize: 20
            color: "blue"
            focus: true

            onEditingFinished: {
                console.log("The current text is : " + text)
            }
        }
    }

    Rectangle {
        id : mRectId
        width: 200
        height: 100
        color: "red"
        anchors.top: mFlickableId.bottom
        MouseArea {
            anchors.fill: parent
            onClicked: {
                console.log("The new text is : " + textInputId.text)
            }

        }
    }
} */


/*
Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("MouseArea Demo")
    Rectangle {
        id: containerRectId
        width: parent.width
        height: 200
        color: "beige"

        Rectangle {
            id : movingRectId
            width: 50
            height: width
            color: "blue"
        }

        MouseArea {
            anchors.fill: parent
            onClicked:  {
                console.log(mouse.x)
                movingRectId.x = mouse.x
            }

            onWheel: {
                console.log(" X : " + wheel.x + " y : " + wheel.y + " angleData : " + wheel.angleDelta)
            }

            hoverEnabled: true
            onHoveredChanged: {
                if(containsMouse === true) {
                    containerRectId.color = "red"
                } else {
                    containerRectId.color = "green"
                }
            }
        }
    }
    Rectangle {
        id: dragContaierId
        width: parent.width
        height: 200
        color: "beige"
        y : 250

        Rectangle {
            id : draggableRect
            width: 50
            height: width
            color: "blue"

            onXChanged: {
                console.log("X Coordinate is : " + x)
            }
        }

        MouseArea {
            anchors.fill: parent
            drag.target: draggableRect
            drag.axis: Drag.XAxis
            drag.minimumX: 0
            drag.maximumX: dragContaierId.width - draggableRect.width
        }
    }
} */


/*
Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Keys Attached Property")

    Rectangle {
        id : containedRect
        anchors.centerIn: parent
        width: 300
        height: 50
        color: "dodgerblue"
        focus: true

        Keys.onDigit1Pressed: {
            console.log("Specific Signal : Pressed on Key 1")
            event.accepted = false
        }

//        Keys.onDigit5Pressed: {
//            if(event.modifiers === Qt.ControlModifier) {
//                console.log("Pressed Control + 5")
//            } else {
//                console.log("Pressed regular 5")
//            }
//        }

        Keys.onPressed: {
            if (event.key === Qt.Key_1) {
                console.log("General Signal : Pressed on Key 1")
            }

            if ((event.key === Qt.Key_5) && (event.modifiers & Qt.ControlModifier)) {
                console.log("Pressed Control + 5")
            }
        }
    }
} */
