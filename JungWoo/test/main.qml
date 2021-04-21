import QtQuick 2.12

Item {
    width: 1024
    height: 768

    Rectangle {
        x: 100
        width: 50
        height: 50
        color: "red"
        objectName: "rect1"
    }

    Rectangle {
        x: 400
        width: 50
        height: 50
        color: "yellow"
        objectName: "rect2"
    }

    Rectangle {
        x: 700
        width: 50
        height: 50
        color: "blue"
        objectName: "rect3"
    }
}
