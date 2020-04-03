import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.0
import "."

Window {
    id: id_mainWindow
    property int pro_jw: 1

    visible: true
    width: 800
    height: 600
    title: qsTr("Hello World")

    ListModel {
        id: myModel
    }

    Text {
        id: id_count
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.top: parent.top
        text: qsTr("count : " + myModel.count)
        font.pixelSize: 25
    }

    Row {
        id: id_Row
        anchors.horizontalCenter: parent.horizontalCenter
        height: parent.height

        spacing: 20

        Button {
            anchors.verticalCenter: parent.verticalCenter
            text: "append"
            onClicked: {
                myModel.append({'number' : pro_jw++})
            }
        }

        ListView {
            id: id_listView
            width: 350
            height: 400
            anchors.verticalCenter: parent.verticalCenter
            spacing: 10
            clip: true

            model: myModel

            delegate:
                Rectangle {
                width: parent.width
                height: 50
                color: "white"
                border.width: 1

                Text {
                    anchors.centerIn: parent
                    text: qsTr("number : " + number)
                    font.pixelSize: 20
                }

                Button {
                    anchors.right: parent.right
                    anchors.rightMargin: 15
                    anchors.verticalCenter: parent.verticalCenter

                    text: "remove"

                    onClicked: {
                        myModel.remove(index)
                        pro_jw--
                    }
                }
            }
        }
    }
    Button {
        x: 700
        y: 560

        text: "Quit"

        onClicked: {
            Qt.quit()
        }
    }
}
