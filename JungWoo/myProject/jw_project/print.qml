import QtQuick 2.0
import QtQuick.Controls 2.5
import QtQuick.Layouts 1.3

Rectangle {

    color: "gray"

    RowLayout {
        id: id_rowButton
        anchors.horizontalCenter: parent.horizontalCenter
        z: id_root.z + 1

        Button {
            text: "Clear"

            onClicked: {
                id_root.clear()
            }
        }

        Button {
            text: "Exit"

            onClicked: {
                Qt.quit()
            }
        }

        Button {
            text: "go to Previous"
            onClicked: {
                id_stackView.pop()
            }
        }
    }

    ColumnLayout {
        id: id_columnColor
        anchors.verticalCenter: parent.verticalCenter
        z: id_root.z + 1

        Rectangle {
            id: id_colorRed
            width: 100
            height: 100
            color: "red"

            MouseArea {
                anchors.fill: parent
                onClicked: {
                    id_root.pro_strokeStyle = "red"
                }
            }
        }

        Rectangle {
            id: id_colorBlue
            width: 100
            height: 100
            color: "blue"

            MouseArea {
                anchors.fill: parent
                onClicked: {
                    id_root.pro_strokeStyle = "blue"
                }
            }
        }

        Rectangle {
            id: id_colorGreen
            width: 100
            height: 100
            color: "green"

            MouseArea {
                anchors.fill: parent
                onClicked: {
                    id_root.pro_strokeStyle = "green"
                }
            }
        }

        Rectangle {
            id: id_colorYellow
            width: 100
            height: 100
            color: "yellow"

            MouseArea {
                anchors.fill: parent
                onClicked: {
                    id_root.pro_strokeStyle = "yellow"
                }
            }
        }
    }

    Canvas {
        id: id_root
        anchors.fill: parent
        anchors.centerIn: parent

        property int pro_X: 0
        property int pro_Y: 0
        property string pro_strokeStyle: "black"

        function clear() {
            var ctx = getContext("2d")
            ctx.reset()
            id_root.requestPaint()
        }

        MouseArea {
            id: id_mouseArea
            anchors.fill: parent

            onPressed: {
                id_root.pro_X = mouseX
                id_root.pro_Y = mouseY
            }

            onPositionChanged: {
                id_root.requestPaint()
            }
        }

        onPaint: {
            var ctx = getContext("2d")
            ctx.lineWidth = 5
            ctx.beginPath()
            ctx.moveTo(pro_X, pro_Y)
            pro_X = id_mouseArea.mouseX
            pro_Y = id_mouseArea.mouseY
            ctx.lineTo(pro_X, pro_Y)
            ctx.stroke()
            ctx.strokeStyle = pro_strokeStyle
        }
    }
}
