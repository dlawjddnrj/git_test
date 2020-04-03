import QtQuick 2.11
import QtQuick.Window 2.11

Window {
    id: idWindow
    visible: true
    width: 1024
    height: 768
    title: qsTr("Hello World")



    Item {
        id: basicItem
        width: parent.width; height: parent.height;
        //        x: 0; y: 0; z: 0
        //        visible: true
        //        opacity: 1
        //        scale: 1

        Rectangle {
            id: backgroundRect
            anchors.fill: parent
            color: "gray"

            Row {
                id: row

                Rectangle {
                    id: rowAnchorsRect
                    color: "gray"
                    width: 700
                    height: 130
                    visible: true
                }

                Rectangle {
                    id: rowRect1
                    width: 100
                    height: 50
                    color: "red"
                    anchors.right: rowAnchorsRect.right
                    anchors.rightMargin: -100
                }

                Rectangle {
                    id: rowRect2
                    width: 100
                    height: 50
                    color: "yellow"
                    anchors.right: rowRect1.left
                    anchors.rightMargin: 140
                }

                Rectangle {
                    id: rowRect3
                    width: 100
                    height: 50
                    color: "orange"
                    anchors.right: rowRect2.left
                    anchors.rightMargin: 140
                }
            }

            Rectangle {
                id: jwButtonBottomRightRect
                width: 2
                height: 2

                Item {
                    id: basicItem2
                    width: parent.width; height: parent.height

                    Rectangle {
                        id: item2Rect
                        x: 612
                        y: 534
                        width: 412
                        height: 234
//                        anchors.left: jwButtonBottomRightRect.right
//                        anchors.top: jwButtonBottomRightRect.bottom
                        color: "gray"

                        Column {
                            Rectangle {
                                id: columnRect1
                                width: 100; height: 50
                                color: "yellowgreen"
                            }

                            Rectangle {
                                id: columnRect2
                                width: 100; height: 50
                                color: "blue"
                            }

                            Rectangle {
                                id: columnRect3
                                width: 100; height: 50
                                color: "skyblue"
                            }
                        }
                    }
                }
            }

            JWButton {
                id: button
                anchors.centerIn: parent
            }

        }
    }

    Item {
        id: basicItem3
        width: parent.width; height: parent.height
        anchors.fill: parent

        Rectangle {
            id: item3Rect
            x: 0
            y: 434
            width: 412; height: 334
            color: "gray"

            Column {
                id: item3Column
                anchors.horizontalCenter: parent.horizontalCenter
                anchors.verticalCenter: parent.verticalCenter

                spacing: 10

                Repeater {
                    model: 5

                    Rectangle {
                        anchors.horizontalCenter: parent.horizontalCenter
                        width: 40; height: 40; radius: 20; border.width: 1; color: "yellow"

                        Text {
                            id: item3ColumnRepeaterRectangleText
                            anchors.centerIn: parent
                            text: index
                        }
                    }
                }
            }
        }
    }

    Item {
        id: basicItem4
        width: parent.width; height: parent.height
        anchors.fill: parent

        Rectangle {
            id: item4Rect
            x: 612
            y: 90
            width: 412
            height: 244
            color: "gray"

            Row {
                id: item4RectRow
                anchors.horizontalCenter: parent.horizontalCenter
                anchors.verticalCenter: parent.verticalCenter
                spacing: 10

                Component {
                    id: blue
                    Rectangle {
                        width: 100; height: 70
                        color: "blue"

                        Text {
                            anchors.centerIn: parent
                            text: qsTr("Blue")
                            color: "white"
                        }
                    }
                }

                Component {
                    id: red
                    Rectangle {
                        width: 100; height: 70
                        color: "red"

                        Text {
                            anchors.centerIn: parent
                            text: qsTr("Red")
                            color: "white"
                        }
                    }
                }

                Component {
                    id: green
                    Rectangle {
                        width: 100; height: 70
                        color: "green"

                        Text {
                            anchors.centerIn: parent
                            text: qsTr("Green")
                            color: "white"
                        }
                    }
                }

                Repeater {
                    model: [red, green, blue]

                    Loader {
//                        sourceComponent: modelData
                        sourceComponent: red; x: 10
                    }
                }
            }
        }
    }

    Item {
        id: basicItem5
        width: parent.width; height: parent.height
        anchors.fill: parent

        Rectangle {
            id: item5Rect
        }
    }
}
