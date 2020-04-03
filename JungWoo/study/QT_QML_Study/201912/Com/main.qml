import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    id: idWindow
    visible: true
    width: 320
    height: 240
    title: qsTr("Hello Makersweb")

    property bool flag: false

    Button {
        id: newButton
        anchors.verticalCenterOffset: -70
        anchors.horizontalCenterOffset: -60

        function buttonClickProcess() {
            var state = flag

            flag = !flag

            if (flag !== state) {
                return true
            } else {
                return false
            }
        }

        onButtonClicked: {
            if (buttonClickProcess()) {
                isOn = flag
            } else {
                return
            }
        }
    }

    Rectangle {
        id: rectId
        Button {
            buttonClicked: {
                text: "Button Ok"
            }
            buttonReleased: {
                text : "Button Down"
            }
        }
    }
}
