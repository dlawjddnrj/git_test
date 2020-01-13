import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    objectName: "topwindow"
    property int firstvalue: 0
    Rectangle{
        id:baekrect
        objectName: "baekrect"
        anchors.fill: parent
        color:"green"

        signal clicked()

        MouseArea{
            anchors.fill: parent
            onClicked: {
                baekrect.clicked()
                console.log("touch event!!!")
            }
        }
    }
    Text {
        id: recttext
        objectName: "recttext"
        anchors.fill: baekrect
    }
}
