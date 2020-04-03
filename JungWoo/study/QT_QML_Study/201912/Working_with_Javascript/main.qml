import QtQuick 2.12
import QtQuick.Window 2.12
import "utillties1.js" as Utillties1
/*
Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("JS Usage Demo")

    Rectangle {
        id : containerRectId
        width: getHeight()                      // JS in Function
        height: 100
        color: x > 300 ? "red" : "green"        // property binding

        // JS in signal handler
        onXChanged: {
            console.log("Current value of x : " + x)
        }

        //anchors.centerIn: parent

        // Custom function
        function getHeight() {
            return height * 2
        }

    }

    MouseArea {
        anchors.fill: parent
        drag.target: containerRectId
        drag.axis: Drag.XAxis
        drag.minimumX: 0
        drag.maximumX: parent.width - containerRectId.width
    }

} */


/*
Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Functions and Scope Demo")

    function min (a , b) {
        return Math.min(a, b)
    }

    Rectangle {
        id : mRectId
        width: min (500, 400)
        height: 100
        anchors.centerIn: parent
        color: "blue"
    }

    MouseArea {
        id : mMouseAreaId
        anchors.fill: parent

        function sayMessage() {
            console.log("Hello there")
        }

        onClicked: {
            sayMessage()
        }
    }

    Component.onCompleted: {
        //console.log("The width of the rect is : " + min(500, 400))
        mMouseAreaId.sayMessage()
    }
} */



Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Javascript Import Demo")

    Rectangle {
        width: 300
        height: 100
        color: "yellowgreen"
        anchors.centerIn: parent

        Text {
            text : "Click Me"
            anchors.centerIn: parent
        }

        MouseArea {
            anchors.fill: parent
            onClicked: {
                //console.log("Hello there")
                //Utillties1.greeting()

                //console.log("Our ages combined yield : " + Utillties1.add(33, 17))
                console.log("The difference of 50 and 33 is : " + Utillties1.substract(50, 33))
            }
        }
    }
}
