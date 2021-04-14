import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3
import ToDo 1.0

ColumnLayout {

    Frame {
        Layout.fillHeight: true

        ListView {
            implicitHeight: 250
            implicitWidth: 250
            clip: true
            anchors.fill: parent

            model: ToDoModel {
                list: toDoList
            }

            delegate: RowLayout {
                width: parent.width

                CheckBox {
                    checked: model.done
                    onClicked: model.done = checked
                }
                Text {
                    id: id_text
                    text: model.description
//                    onEditingFinished: model.description = text
                    Layout.fillWidth: true
                    MouseArea {
                        anchors.fill: parent

                        onPressAndHold: {
                            console.log("long~~")
                        }
                    }
                }
                Rectangle {
                    id: id_line
                    width: 10
                    height: parent.height
                    color: "black"
                }
            }
        }
    }

    RowLayout {
        Button {
            text: qsTr("Add new Item")
            Layout.fillHeight: true
            onClicked: toDoList.appendItem()
        }

        Button {
            text: qsTr("Remove completed")
            Layout.fillHeight: true
            onClicked: toDoList.removeItem()
        }
    }
}
