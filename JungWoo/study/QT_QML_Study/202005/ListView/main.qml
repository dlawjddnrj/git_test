import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.0
import "."

Window {
    visible: true
    width: 800
    height: 600

    ToDoList {
        anchors.centerIn: parent
    }
}

//Item {
//    visible: true
//    width: 800
//    height: 600

//    Component.onCompleted: {
//        id_listView.model.append({"list_text": "title",
//                                  "list_button_text": "버튼을 누르면 title 변경"})//listview에 선언한 임의의 모델 안에 데이터를 넣어준다.
//        id_listView.model.append({"list_text": LDS.str,
//                                  "list_button_text": "test button"})
//        id_listView.model.append({"list_text": LDS.str,
//                                  "list_button_text": "test button"})
//        id_listView.model.append({"list_text": LDS.str,
//                                  "list_button_text": "test button"})
//    }

//    Component {
//        id: id_contactDelegate
//        Item {
//            width: 800
//            height: 100

//            Text {
//                id: id_listView_Text
//                text: list_text
//                anchors.left: parent.left
//                anchors.leftMargin: 50
//                anchors.verticalCenter: parent.verticalCenter
//            }

//            Button {
//                id: id_listView_Button
//                width: 120
//                height: 40
//                anchors.rightMargin: 30
//                anchors.verticalCenter: parent.verticalCenter
//                anchors.right: parent.right
//                text: list_button_text

//                onClicked: {
//                    LDS.num += 1
//                    LDS.str = "asd"
//                }
//            }

//            Rectangle {
//                id: id_countRect
//                anchors.verticalCenter: parent.verticalCenter
//                anchors.horizontalCenter: parent.horizontalCenter
//                width: 50
//                height: 50
//                color: "red"
//                Text {
//                    color: "blue"
//                    text: LDS.num
//                    anchors.centerIn: parent
//                }
//            }

//            Rectangle {
//                id: id_line
//                width: parent.width
//                anchors.bottom: parent.bottom
//                height: 1
//                color: "black"
//            }
//        }
//    }

//    ListView {
//        id: id_listView
//        anchors.fill: parent
//        model: ListModel{}
//        delegate: id_contactDelegate
//        highlight: Rectangle { color: "lightsteelblue"; radius: 5 }
//        focus: true
//    }
//}
