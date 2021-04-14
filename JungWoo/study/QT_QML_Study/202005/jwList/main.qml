import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.0
import ListCpp 1.0

Window {
    visible: true
    width: 800
    height: 600
    title: qsTr("Jw ListView")

    Component.onCompleted: {
        for(var i = 0; i < myCpp.getListSize(); i++)
        {
            id_ListView.model.append({"listText" : myCpp.getListTitle(i),
                               "listButton" : myCpp.getListInfomation(i),
                                      "checkValue" : false})
        }
    }

    ListCpp {
        id: myCpp
    }

    Component {
        id: id_Delegate
        Item {
            width: 800
            height: 150

            MouseArea {
                anchors.fill: parent
                onPressAndHold: {
                    console.log("Press")
                }

                onClicked: {
//                    id_checkbox.enabled = !true
                    id_checkbox.checked = true
                }

                onReleased: {
                    id_checkbox.checked = false
                }
            }

            CheckBox
            {
                id: id_checkbox
                anchors.left: parent.left
                anchors.leftMargin: 30
                anchors.verticalCenter: parent.verticalCenter
                checked: checkValue
            }

            Text {
                id: id_text
                text: listText
                anchors.verticalCenter: parent.verticalCenter
                anchors.left: id_checkbox.left
                anchors.leftMargin: 50
            }

            Rectangle {
                id: id_line
                width: parent.width
                height: 1
                color: "black"
                anchors.bottom: parent.bottom
            }

            Button {
                id: id_button
                width: 120
                height: 40
                text: listButton
                anchors.right: parent.right
                anchors.rightMargin: 30
                anchors.verticalCenter: parent.verticalCenter
                onClicked: {
                    console.log(index)
//                    myCpp.deleteListModel(index)
//                    id_ListView.model.remove(index)
                    myCpp.swapModel(index, 0)
                    id_ListView.model.clear()
                    for(var i = 0; i < myCpp.getListSize(); i++)
                    {
                        if(id_checkbox.checkValue === true)
                        {

                        }

                    id_ListView.model.append({"listText" : myCpp.getListTitle(i),
                                       "listButton" : myCpp.getListInfomation(i),
                                              "checkValue" : false})
                    }
                }
            }
        }
    }

    Button {
        id: id_swapButton
        text: "Swap"
        anchors.bottom: parent.bottom
    }

    ListView {
        id: id_ListView
        anchors.fill: parent
        model: ListModel{}
        delegate: id_Delegate
        focus: true
    }
}
