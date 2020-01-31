import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.5

Window {
    visible: true
    width: 1024
    height: 768
    title: qsTr("Main Menu")

    signal mainQML()

    Rectangle {
        id: backgroundRect
        anchors.centerIn: parent
        width: parent.width; height: parent.height
        color: "#e67091"

        Rectangle {
            id: mainRect
            x: 191
            y: 290
            width: 643
            height: 188
            color: "#705d5d"
            border.color: "white"
            border.width: 2

            Button {
                id: mainButtonOne
                x: 88
                y: 53
                width: 125
                height: 80
                text: "Car Game"
                font.bold: true
                font.pointSize: 14

                onClicked: {
                    id_Loader.source = "Car.qml"
                }
            }

            Button {
                id: mainButtonTwo
                x: 432
                y: 53
                width: 125
                height: 80

                onClicked: {

                }
            }
        }
    }

    Loader {
        id: id_Loader
        x: 0; y: 0;
    }
}
