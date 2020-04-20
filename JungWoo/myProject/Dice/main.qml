import QtQuick 2.12
import QtQuick.Window 2.14
import QtQuick3D 1.14

Window {
    width: 800
    height: 600
    visible: true
    color: "white"

    property int pro_duration: 5000

    Rectangle {
        id: id_qtLogo
        width: 230
        height: 230
        anchors.top: parent.top
        anchors.left: parent.left
        anchors.margins: 10
        color: "transparent"

        layer.enabled: true

        Rectangle {
            anchors.fill: parent
            color: "black"

            Image {
                anchors.fill: parent
                source: "qrc:/diceOne.png"
            }

            Text {
                id: id_text
                anchors.bottom: parent.bottom
                anchors.left: parent.left
                color: "white"
                font.pixelSize: 17
                text: qsTr("The Future is Written with Qt")
            }

            transform: Rotation {
                id: id_rotation
                origin.x: id_qtLogo.width / 2
                origin.y: id_qtLogo.height / 2
                axis: { x: 1; y : 0; z: 0 }
            }

            PropertyAnimation {
                id: id_flip1
                target: id_rotation
                property: "angle"
                duration: 600
                to: 180
                from: 0
            }

            PropertyAnimation {
                id: id_flip2
                target: id_rotation
                property: "angle"
                duration: 600
                to: 360
                from: 180
            }
        }
    }

    View3D {
        id: id_view
        anchors.fill: parent
        camera: camera
        renderMode: View3D.Overlay

        PerspectiveCamera {
            id: id_camera
            position: Qt.vector3d(0, 200, -300)
            rotation: Qt.vector3d(30, 0, 0)
        }

        DirectionalLight {
            rotation: Qt.vector3d(30, 0, 0)
        }

        Model {
            id: id_cube
            x: 4.8
            y: 0
            visible: true
            position: Qt.vector3d(0, 0, 0)
            z: 0
            source: "#Cube"
            materials:  DefaultMaterial {
                    diffuseMap: Texture {
                        id: id_texture
                        sourceItem: id_qtLogo
                        flipV: true
                    }
            }
            rotation: Qt.vector3d(0, 0, 0)

            SequentialAnimation on rotation {
                id: id_animation
                loops: Animation.Infinite
                PropertyAnimation {
                    duration: pro_duration
                    to: Qt.vector3d(360, 0, 360)
                    from: Qt.vector3d(0, 0, 0)
                }
            }
        }
    }

    MouseArea {
        id: id_mouseArea
        anchors.fill: id_qtLogo

        Text {
            id: id_clickMe
            anchors.top: id_mouseArea.top
            anchors.horizontalCenter: id_mouseArea.horizontalCenter
            font.pixelSize: 17
            text: "Click me!"
            color: "white"

            SequentialAnimation on color {
                loops: Animation.Infinite
                ColorAnimation { duration: 400; from: "white"; to: "black" }
                ColorAnimation { duration: 400; from: "black"; to: "white" }
            }

            states: [
                State {
                    name: "flipped"
                    AnchorChanges {
                        target: id_clickMe
                        anchors.top: undefined
                        anchors.bottom: id_mouseArea.bottom
                    }
                }
            ]
        }

        onClicked: {
            if(id_clickMe.state == "flipped")
            {
                id_clickMe.state = "";
                id_flip2.start();
            } else {
                id_clickMe.state = "flipped";
                id_flip1.start();
            }
            pro_duration = 300
        }
    }

}

