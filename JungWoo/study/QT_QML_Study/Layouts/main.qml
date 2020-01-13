import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Layouts 1.3

//Window {
//    visible: true
//    width: mGridLayoutId.implicitWidth
//    height: mGridLayoutId.implicitHeight
//    title: qsTr("Layouts Demo")

//    GridLayout {
//        id: mGridLayoutId
//        anchors.fill: parent
//        columns: 3
//        layoutDirection: Qt.RightToLeft

//        Rectangle {
//            id : topLeftRectId
//            width: 70
//            height: width
//            color: "green"

////            Layout.fillWidth: true
////            Layout.fillHeight: true
//            Layout.alignment: Qt.AlignCenter
//        }

//        Rectangle {
//            id : topCenterRectId
//            width: 100
//            height: width
//            color: "red"
//            Layout.fillWidth: true
//            Layout.fillHeight: true
//            Layout.columnSpan: 2
//        }

//        /*
//        Rectangle {
//            id : topRightRectId
//            width: 100
//            height: width
//            color: "blue"
//            Layout.fillWidth: true
//            Layout.fillHeight: true
//        }
//        */

//        Rectangle {
//            id : centerLeftRectId
//            width: 100
//            height: width
//            color: "yellow"
//            Layout.fillWidth: true
//            Layout.fillHeight: true
//            Layout.rowSpan: 2
//        }

//        Rectangle {
//            id : centerCenterRectId
//            width: 100
//            height: width
//            color: "pink"
//            Layout.fillWidth: true
//            Layout.fillHeight: true
//        }

//        Rectangle {
//            id : centerRightRectId
//            width: 100
//            height: width
//            color: "beige"
//            Layout.fillWidth: true
//            Layout.fillHeight: true
//            Layout.maximumWidth: 200
//            Layout.maximumHeight: 150
//        }

//        /*
//        Rectangle {
//            id : bottomLeftRectId
//            width: 100
//            height: width
//            color: "magenta"
//            Layout.fillWidth: true
//            Layout.fillHeight: true
//        }
//        */

//        Rectangle {
//            id : bottomCenterRectId
//            width: 100
//            height: width
//            color: "yellowgreen"
//            Layout.fillWidth: true
//            Layout.fillHeight: true
//        }

//        Rectangle {
//            id : bottomRightRectId
//            width: 100
//            height: width
//            color: "dodgerblue"
//            Layout.fillWidth: true
//            Layout.fillHeight: true
//        }
//    }
//}


Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Flow Demo")

    Flow {
        id : containerFlowId
        width: parent.width
        height: parent.height

        flow : Flow.TopToBottom
        layoutDirection: Qt.RightToLeft

        spacing: 20

        Rectangle {
            id: topLeftRectId
            width: 70
            height: 70
            color: "green"

            Text {
                anchors.centerIn: parent
                color: "black"
                font.pointSize: 30
                text : "1"
            }
        }

        Rectangle {
            id: topCenterRectId
            width: 100
            height: 100
            color: "beige"

            Text {
                anchors.centerIn: parent
                color: "black"
                font.pointSize: 30
                text : "2"
            }
        }

        Rectangle {
            id: topRightRectId
            width: 100
            height: 100
            color: "dodgerblue"

            Text {
                anchors.centerIn: parent
                color: "black"
                font.pointSize: 30
                text : "3"
            }
        }

        Rectangle {
            id: leftCenterRectId
            width: 100
            height: 100
            color: "magenta"

            Text {
                anchors.centerIn: parent
                color: "black"
                font.pointSize: 30
                text : "4"
            }
        }

        Rectangle {
            id: centerRectId
            width: 100
            height: 100
            color: "red"

            Text {
                anchors.centerIn: parent
                color: "black"
                font.pointSize: 30
                text : "5"
            }
        }

        Rectangle {
            id: rightCenterRectId
            width: 100
            height: 100
            color: "yellow"

            Text {
                anchors.centerIn: parent
                color: "black"
                font.pointSize: 30
                text : "6"
            }
        }

        Rectangle {
            id: bottomLeftRectId
            width: 100
            height: 100
            color: "royalblue"

            Text {
                anchors.centerIn: parent
                color: "black"
                font.pointSize: 30
                text : "7"
            }
        }

        Rectangle {
            id: bottomCenterRectId
            width: 100
            height: 100
            color: "greenyellow"

            Text {
                anchors.centerIn: parent
                color: "black"
                font.pointSize: 30
                text : "8"
            }
        }

        Rectangle {
            id: bottomRightRectId
            width: 100
            height: 100
            color: "blue"

            Text {
                anchors.centerIn: parent
                color: "black"
                font.pointSize: 30
                text : "9"
            }
        }
    }
}
