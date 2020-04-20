import QtQuick 2.0
import QtQuick.Controls 2.5

Rectangle {
    id: id_container

    property string text: "Drag me!"
    property bool animated: true

    Button {
        text: "go to Previous"
        anchors.horizontalCenter: parent.horizontalCenter
        onClicked: {
            id_stackView.pop()
        }
    }

    color: "green"
    focus: true

    Keys.onPressed: {
        if(event.key === Qt.Key_Delete || event.key === Qt.Key_Backspace)
            id_container.remove()

        else if(event.text !== "") {
            id_container.append(event.text)
        }
    }

    function append(text)
    {
        id_container.animated = false
        var lastLetter = id_container.children[id_container.children.length - 1]
        var newLetter = letterComponent.createObject(id_container)
    }

    function remove()
    {
        if(id_container.children.length)
            id_container.children[id_container.children.length - 1].destroy()
    }

    function doLayout()
    {
        var follow = null
        for(var i = 0; i < id_container.text.length; ++i)
        {
            var newLetter = letterComponent.createObject(id_container)
            newLetter.text = id_container.text[i]
            newLetter.follow = follow
            follow = newLetter
        }
    }

    Component {
        id: letterComponent

        Text {
            id: letter

            property variant follow

            x: follow ? follow.x + follow.width : id_container.width / 6
            y: follow ? follow.y : id_container.height / 2

            font.pixelSize: 40
            font.bold: true
            color: "#999999"
            styleColor: "#222222"
            style: Text.Raised

            MouseArea {
                anchors.fill: parent
                drag.target: letter; drag.axis: Drag.XAndYAxis
                onPressed: letter.color = "#dddddd"
                onReleased: letter.color = "#999999"
            }

            Behavior on x {
                enabled: id_container.animated
                SpringAnimation {
                    spring: 3
                    damping: 0.3;
                    mass: 1.0
                }
            }

            Behavior on y {
                enabled: id_container.animated
                SpringAnimation {
                    spring: 3
                    damping: 0.3;
                    mass: 1.0
                }
            }
        }
    }

    Component.onCompleted: doLayout()
}
