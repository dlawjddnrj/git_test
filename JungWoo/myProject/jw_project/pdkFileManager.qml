import QtQuick 2.0
import QtQuick.Controls 2.5
import QtQuick.Controls.Styles 1.4
import QtQuick.Layouts 1.3

Rectangle {
    id: id_background
    color: "pink"

    function testSlotqml() {
        console.log("cpp에서 qml의 function을 불렀다. \n testSlot connect !")
    }

    signal fileWrite();
    signal fileRead();

    Button {
        text: "go to Previous"
        anchors.horizontalCenter: parent.horizontalCenter
        onClicked: {
            id_stackView.pop()
        }
    }

    Rectangle {
        id: id_textEditRect
        width: 600       // id_textEdit의 text가 늘어나거나 줄어날때마다
        height: 30                      // Rect의 width 길이 동적으로 변경 필요
        border.width: 1
        border.color: "white"
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter

        TextEdit {
            id: id_textEdit
            width: 600                  // Rect의 width와 동일하게 해야함
            text: "이 곳에 File명을 입력 후 Add 버튼을 누르세요."
            font.family: "Helvetica"
            font.pointSize: 15
            color: "blue"
        }
    }

    ColumnLayout {
        id: id_fileButton
        anchors.top: id_textEditRect.top
        anchors.topMargin: -25
        anchors.left: id_textEditRect.right
        anchors.leftMargin: 20

        Button {
            text: "Add"

            onClicked: {
                fileWrite()
            }
        }

        Button {
            text: "Read"

            onClicked: {
                fileRead()
            }
        }
    }
}
