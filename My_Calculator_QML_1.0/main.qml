import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.5

Window {
    visible: true
    width: 1024
    height: 768
    title: qsTr("Hello World")
    color: "#a3d35e"
//    objectName: "topwindow"
    Rectangle {
        id: rectangle
        x: 156
        y: 148
        width: 713
        height: 472
        color: "#a69ace"
        border.width: 6
//        objectName: "zerorect1"
        Rectangle {
            id: num_0
            x: 155
            y: 385
            width: 90
            height: 40
            color: "silver"
//            objectName: "zerorect2"


            MouseArea {
//                objectName: text_num_0_area
                anchors.fill: parent
                onClicked: {
                    console.log("Clicked number 0 !!")
                }
            }

            Text {
                id: text_num_0
                objectName: text_num_0
                anchors.centerIn: parent
                text: qsTr("0")
            }

        }

        Rectangle {
            id: num_1
            x: 42
            y: 334
            width: 90
            height: 40
            color: "silver"

            Text {
                id: text_num_1
                anchors.centerIn: parent
                text: qsTr("1")
            }

            MouseArea {
                anchors.fill: parent
                onClicked: {
                    console.log("Clicked number 1 !!")
                }
            }
        }

        Rectangle {
            id: num_2
            x: 155
            y: 334
            width: 90
            height: 40
            color: "silver"

            Text {
                id: text_num_2
                anchors.centerIn: parent
                text: qsTr("2")
            }

            MouseArea {
                anchors.fill: parent
                onClicked: {
                    console.log("Clicked number 2 !!")
                }
            }
        }

        Rectangle {
            id: num_3
            x: 268
            y: 334
            width: 90
            height: 40
            color: "silver"

            Text {
                id: text_num_3
                anchors.centerIn: parent
                text: qsTr("3")
            }

            MouseArea {
                anchors.fill: parent
                onClicked: {
                    console.log("Clicked number 3 !!")
                }
            }
        }

        Rectangle {
            id: num_4
            x: 42
            y: 281
            width: 90
            height: 40
            color: "silver"

            Text {
                id: text_num_4
                anchors.centerIn: parent
                text: qsTr("4")
            }

            MouseArea {
                anchors.fill: parent
                onClicked: {
                    console.log("Clicked number 4 !!")
                }
            }
        }

        Rectangle {
            id: num_5
            x: 155
            y: 281
            width: 90
            height: 40
            color: "silver"

            Text {
                id: text_num_5
                anchors.centerIn: parent
                text: qsTr("5")
            }

            MouseArea {
                anchors.fill: parent
                onClicked: {
                    console.log("Clicked number 5 !!")
                }
            }
        }

        Rectangle {
            id: num_6
            x: 268
            y: 281
            width: 90
            height: 40
            color: "silver"

            Text {
                id: text_num_6
                anchors.centerIn: parent
                text: qsTr("6")
            }

            MouseArea {
                anchors.fill: parent
                onClicked: {
                    console.log("Clicked number 6 !!")
                }
            }
        }

        Rectangle {
            id: num_7
            x: 42
            y: 227
            width: 90
            height: 40
            color: "silver"

            Text {
                id: text_num_7
                anchors.centerIn: parent
                text: qsTr("7")
            }

            MouseArea {
                anchors.fill: parent
                onClicked: {
                    console.log("Clicked number 7 !!")
                }
            }
        }

        Rectangle {
            id: num_8
            x: 155
            y: 227
            width: 90
            height: 40
            color: "silver"

            Text {
                id: text_num_8
                anchors.centerIn: parent
                text: qsTr("8")
            }

            MouseArea {
                anchors.fill: parent
                onClicked: {
                    console.log("Clicked number 8 !!")
                }
            }
        }

        Rectangle {
            id: num_9
            x: 268
            y: 227
            width: 90
            height: 40
            color: "silver"

            Text {
                id: text_num_9
                anchors.centerIn: parent
                text: qsTr("9")
            }

            MouseArea {
                anchors.fill: parent
                onClicked: {
                    console.log("Clicked number 9 !!")
                }
            }
        }

        Rectangle {
            id: rect_clear
            x: 268
            y: 385
            width: 90
            height: 40
            color: "silver"

            Text {
                id: text_clear
                anchors.centerIn: parent
                text: qsTr("C")
            }

            MouseArea {
                anchors.fill: parent
                onClicked: {
                    console.log("Clicked Clear !!")
                }
            }
        }

        Rectangle {
            id: rect_plus
            x: 377
            y: 227
            width: 54
            height: 40
            color: "silver"

            Text {
                id: text_plus
                anchors.centerIn: parent
                text: qsTr("+")
            }

            MouseArea {
                anchors.fill: parent
                onClicked: {
                    console.log("Clicked plus !!")
                }
            }
        }

        Rectangle {
            id: rect_miuns
            x: 377
            y: 281
            width: 54
            height: 40
            color: "silver"

            Text {
                id: text_miuns
                anchors.centerIn: parent
                text: qsTr("-")
            }

            MouseArea {
                anchors.fill: parent
                onClicked: {
                    console.log("Clicked minus !!")
                }
            }
        }

        Rectangle {
            id: rect_mul
            x: 377
            y: 334
            width: 54
            height: 40
            color: "silver"

            Text {
                id: text_mul
                anchors.centerIn: parent
                text: qsTr("*")
            }

            MouseArea {
                anchors.fill: parent
                onClicked: {
                    console.log("Clicked multiply !!")
                }
            }
        }

        Rectangle {
            id: rect_div
            x: 377
            y: 385
            width: 54
            height: 40
            color: "silver"

            Text {
                id: text_div
                anchors.centerIn: parent
                text: qsTr("/")
            }

            MouseArea {
                anchors.fill: parent
                onClicked: {
                    console.log("Clicked division !!")
                }
            }
        }

        Rectangle {
            id: first_rect
            x: 42
            y: 52
            width: 173
            height: 74
            color: "#ffaaff"

            Label {
                id: first_label
                x: 45
                y: 21
                width: 84
                height: 32
                Text {
                    id : first_label_text
                    text: ""
                }
                font.pointSize: 20
                lineHeight: 0.9
            }
        }

        Rectangle {
            id: seconed_rect
            x: 258
            y: 52
            width: 173
            height: 74
            color: "#ffaaff"

            Label {
                id: seconed_label
                x: 45
                y: 21
                width: first_label.width
                height: first_label.height
                Text {
                    id : seconed_label_text
                    text: ""
                }
                font.pointSize: 20
            }
        }

        Rectangle {
            id: third_rect
            x: 480
            y: 52
            width: 200
            height: 74
            color: "#ffaa7f"

            Label {
                id: third_label
                x: 58
                y: 21
                width: first_label.width
                height: first_label.height
                Text {
                    id : third_label_text
                    text: ""
                }
            }
        }

        MouseArea {
            Image {
                id: image
                x: 480
                y: 227
                width: 200
                height: 198
                fillMode: Image.PreserveAspectFit
                source: "images/Quit.png"
            }
        }
    }
}
