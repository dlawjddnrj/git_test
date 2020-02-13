import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Posionners Demo")

    Rectangle {
        id : containerRectId
        width : 300
        height: width
        border.color: "black"
        //anchors.centerIn: parent
//        anchors.horizontalCenter: parent.horizontalCenter
//        anchors.verticalCenter: parent.verticalCenter

        Grid {
            columns: 3
            //spacing: 10           // 사각형들끼리 가로, 세로 간격 띄움
            //rowSpacing: 10        // 사각형들끼리 가로만 간격 띄움
            //columnSpacing: 10       // 사각형들끼리 세로만 간격 띄움

            horizontalItemAlignment: Grid.AlignRight        // 오른쪽 정렬
            verticalItemAlignment: Grid.AlignVCenter        // 가운데 정렬

            LayoutMirroring.enabled: true                   // 맨 오른쪽으로 자리이동 .. ?
            LayoutMirroring.childrenInherit: true

            Rectangle {
                id : topLeftRectId
                width: 60
                height: width
                color: "magenta"

//                Image {
//                    anchors.centerIn: parent
//                    width: 50
//                    height: 50
//                    source: "images/Bear.png"
//                }
            }

            Rectangle {
                id : topCenterRectId
                width: 100
                height: width
                color: "yellowgreen"
            }

            Rectangle {
                id : topRightRectId
                width: 100
                height: width
                color: "dodgerblue"
            }

            Rectangle {
                id : centerLeftRectId
                width: 100
                height: width
                color: "beige"
            }

            Rectangle {
                id : centerCenterRectId
                width: 100
                height: width
                color: "green"
            }

            Rectangle {
                id : centerRightRectId
                width: 100
                height: width
                color: "blue"
            }

            Rectangle {
                id : bottomLeftRectId
                width: 100
                height: width
                color: "royalblue"
            }

            Rectangle {
                id : bottomCenterRectId
                width: 100
                height: width
                color: "yellow"
            }

            Rectangle {
                id : bottomRightRectId
                width: 100
                height: width
                color: "pink"
            }
        }
    }
}
