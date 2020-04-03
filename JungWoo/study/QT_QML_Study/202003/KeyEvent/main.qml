import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Dialogs 1.3
import QtQuick.Controls 2.4

Window {
    visible: true
    width: 1024
    height: 768
    title: qsTr("Hello World")

    Item {
        id: id_Item
        width: 300
        height: 300

        Rectangle {
            color: "white"
            border.color: "black"
            anchors.fill: parent

            Text {
                id: id_Text
                text: qsTr("text")
                anchors.centerIn: parent
                font.pixelSize: 15
            }

            Item {
                focus: true
                Keys.onPressed: {
                    switch(event.key) {
                    case Qt.Key_A :
                        id_Text.text = "input A Key !"
                        break;
                    case Qt.Key_0 :
                        id_Text.text = "input num 0 Key !"
                        break;
                    }
                }
            }
        }
    }

//    Button {
//        id: id_Button
//        anchors.centerIn: parent

//        onPro_PowerChanged: {
//            if(pro_Power) {
//                console.log("pro_Power is true")
//            }
//            else {
//                console.log("pro_Power is false")
//            }
//        }
//    }

//    Button {
//        id: id_ButtonTwo
//        anchors.left: id_Button.right
//        anchors.bottom: id_Button.bottom
//        pro_Color: "green"
//    }

    Rectangle {
        x: 924
        anchors.right: parent
        color: "red"
        width: 100
        height: 100
    }

    Dialog {
            id: inputDialog
            title: qsTr("이름을 입력하세요.")
            anchors.centerIn: parent
            height: 200
            width: 300
            modal: Qt.ApplicationModal
            contentItem: TextField{
                width: 100
                height: 50
                font.pixelSize: 25
                horizontalAlignment: TextInput.AlignHCenter
            }
            standardButtons: Dialog.Ok | Dialog.Cancel

            onAccepted: {
                if(contentItem.text.length){
                    phonebook.setName(contentItem.text)
                }
            }
        }

    Connections{
            target: phonebook
            onNameChanged:{
                name.text = phonebook.name()
            }
        }

        Row{
            height: 50
            anchors.centerIn: parent

            Text {
                id: name
                width: 150
                font.pixelSize: 20
                font.bold: true
                anchors.verticalCenter: parent.verticalCenter
                elide: Text.ElideRight
            }
        }
}
