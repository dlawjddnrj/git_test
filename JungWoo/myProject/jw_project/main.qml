import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.5

Window {
    visible: true
    width: 1024
    height: 768
    title: qsTr("jw_project Program")

    property int mListClickindex: 0
    property int pro_heightDelegate: 768

    Component.onCompleted://view가 처음 실행될때 제일 처음으로 불려지는곳
    {
        id_listView.model.append({"list_text": "테스트 용 텍스트",
                                     "list_button_text": "테스트 용 버튼"}) //listview에 선언한 임의의 모델 안에 데이터를 넣어준다.
        id_listView.model.append({"list_text": "Car",
                                     "list_button_text": "go to Car"})
        id_listView.model.append({"list_text": "PDK",
                                     "list_button_text": "go to PDK"})
    }

    Component {
        id: id_contactDelegate
        Item {
            width: 1024
            height: pro_heightDelegate / id_listView.count + 1
            Text {
                id: id_listViewText
                anchors.left: parent.left
                anchors.leftMargin: 50
                anchors.verticalCenter: parent.verticalCenter
                text: list_text
            }

            Button {
                id: id_listViewButton
                width: 150
                height: 40
                anchors.rightMargin: 30
                anchors.verticalCenter: parent.verticalCenter
                anchors.right: parent.right
                text: list_button_text
            }

            Rectangle {
                id: id_Line1
                width: parent.width
                anchors.bottom: parent.bottom
                height: 1
                color: "black"
            }

            MouseArea {
                id: id_listMouseArea
                anchors.fill: id_listViewButton
                onClicked: {
                    mListClickindex = index
                    console.log("현재 index : " + index)

                    switch(index)
                    {
                    case 0:
                        break;
                    case 1:
                        id_stackView.push(Qt.resolvedUrl("qrc:/Car.qml"))
                        break;
                    case 2:
                        id_stackView.push(Qt.resolvedUrl("qrc:/print.qml"))
                        break;
                    }
                }
            }
        }
    }
    StackView {
        id: id_stackView
        anchors.fill: parent

        initialItem: Item {

            ListView {
                id: id_listView
                anchors.fill: parent
                model: ListModel{ }
                delegate: id_contactDelegate
                highlight: Rectangle { color: "lightsteelblue"; radius: 5 }
                focus: true

                ScrollBar.vertical: ScrollBar {
                    width: 20
                    policy: ScrollBar.AlwaysOn
                }
            }
        }
    }
}
