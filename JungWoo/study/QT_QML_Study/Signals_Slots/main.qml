import QtQuick 2.12
import QtQuick.Window 2.12
/*
Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Signals and Slots Demo")

    property int increment: 50

    Rectangle {
        id : rectangleId
        width: 200 + increment
        height: 300
        color: "red"

        signal greet(string message)    // Declare Signal

        onGreet: {
            console.log("onGreet : greet signal emited")
        }
        onWidthChanged: {

        }

        function myGreeting(mMessage) {
            console.log("my Greeting slot called. The parameter is : " + mMessage)
            increment += 50     // increment = increment + 50
        }

        MouseArea {
            anchors.fill: parent
            onClicked: {
                rectangleId.greet("Hello there")    // Fire the signal
            }
        }

        Component.onCompleted: {
            rectangleId.greet.connect(rectangleId.myGreeting)
        }
    }
} */


Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("External Components with signals and slots")

    Notifier {
        id : notifierId
        rectColor: "yellowgreen"
        target: receiverId
    }

    Receiver {
        id : receiverId
        rectColor: "dodgerblue"
        anchors.right: parent.right
    }

    Component.onCompleted: {
        notifierId.notify.connect(receiverId.receiveInfo)      // Connect signal to slot
    }
}
