import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.5
import "."

Window {
    property bool mbImageClicked : true
    property int mCount : 0

    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    function qmlSlotTestData(data){//slot으로 등록한 함수
        console.log("qmlSlotTestData data:" + data);
    }

    StackView
    {
        id:stackView
        anchors.fill: parent


        initialItem: Item  //제일 첫화면을 설정하는 것으로 설정을 안하면 되돌아오기가 안된다.
        {
            objectName: "mainscreen"//이전화면에 대한 정보를 얻기위해 설정하는 값
            Rectangle//배경 색을 지정하는 부분
            {
                anchors.fill: parent
                color:"red"
            }
            Text
            {
                id:testData
                anchors.horizontalCenter: parent.horizontalCenter
                text:"main screen testData"
                font.pixelSize: 30
                font.bold: true
            }

            Text
            {
                id:testText
                anchors.centerIn: parent
                text:"main screen"
                font.pixelSize: 50
                font.bold: true
            }
            Button
            {
                id:nextButton
                anchors.top:testText.bottom
                anchors.horizontalCenter: parent.horizontalCenter
                text:"go screen1"
                onClicked:
                {
                     console.log("push screen1")
                     stackView.push(Qt.resolvedUrl("qrc:/screen1.qml"))//다음 화면을 출력하기 위해 stack에 화면을 쌓는 코드
                }
            }
            Button
            {
                anchors.top:testText.bottom
                anchors.left:nextButton.right
                anchors.leftMargin: 30
                text:"go screen2"
                onClicked:
                {
                     console.log("push screen2")
                     stackView.push(Qt.resolvedUrl("qrc:/screen2.qml"))//다음 화면을 출력하기 위해 stack에 화면을 쌓는 코드
                }
            }
        }
    }
}
