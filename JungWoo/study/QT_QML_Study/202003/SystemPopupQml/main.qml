import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.0

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

//    Item {
//        width:  pro_sizeType

//        height: 720

//        property var jsonModel;
//        property bool pro_bgVisible: true

//        property int pro_sizeType : 2560

//        property int pro_fontSizeType : parseInt(fontSize)
//        property bool pro_reverse: true

//        property alias pro_fontSizeEnum : id_fontSize

//        onPro_sizeTypeChanged:
//        {
//            console.log("SystemPopup s_status: " + s_status + ", pro_popupSizeType: " + jsonModel.pro_popupSizeType + ", pro_sizeType: " + pro_sizeType)
//        }

//        LayoutMirroring.enabled: pro_reverse
//        LayoutMirroring.childrenInherit: pro_reverse

//        QtObject
//        {
//            id : id_fontSize
//            readonly property int fontNormal    : 0;
//            readonly property int fontLarge     : 1;
//            readonly property int fontLargest   : 2;
//        }

//        Rectangle
//        {
//            anchors.fill: parent
//            color : "black"
//            opacity: 0.5
//            visible: pro_bgVisible
//        }

//        MouseArea
//        {
//            anchors.fill: parent
//            onClicked:
//            {
//                console.log("AbstractPopup onClicked")
//                HLayeredUI.onClosed(jsonModel.handler)
//            }
//        }

        Rectangle {
            id: id_leftRect
            color: "black"
            width: 300
            height: 480
        }

        ListModel {
            id : id_model

            ListElement {
                name : "Tab"
            }

            ListElement {
                name : "최근 목적지"
            }
        }

        Component {
            id : contactDelegate
            Rectangle {
                id: id_ComponentRect
                width: 200
                height: 100
                color: ListView.isCurrentItem ? "black" : "red"
                Text {
                    text: name
                    color: id_ComponentRect.ListView.isCurrentItem ? "red" : "black"
                    anchors.centerIn: parent
                }
                MouseArea {
                    anchors.fill: parent
                    onClicked: console.log("current is : " + id_listView.currentIndex)
                }
            }
        }

        ListView {
            id: id_listView
            anchors.fill: id_leftRect
            model: id_model
            delegate: contactDelegate
            highlight: Rectangle {
                color: "lightsteelblue"
                radius: 5
            }

            focus: true
        }
    }

//}
