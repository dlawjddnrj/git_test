import QtQuick 2.0
import QtQuick.Controls 2.5

Item {
    width: 1024
    height: 768
    objectName: "screen1"

    Component.onCompleted: {
        console.log("screen1 Component.onCompleted")
        testData.text = "screen1 Data"
    }

    Component.onDestruction: {
        console.log("screen1 Component.onDestruction")
    }

    Rectangle//배경 색을 지정하는 부분
        {
            anchors.fill: parent
            color:"gray"
        }
        Text
        {
            id:testData
            anchors.horizontalCenter: parent.horizontalCenter
            text:"screen1 testData"
            font.pixelSize: 30
            font.bold: true
        }
        Text
        {
            id:testText
            anchors.centerIn: parent
            text:"screen1!!"
            font.pixelSize: 50
            font.bold: true
        }
        Button
        {
            id:nextButton
            anchors.top:testText.bottom
            anchors.horizontalCenter: parent.horizontalCenter
            text:"go next screen"
            onClicked: {
                 stackView.push(Qt.resolvedUrl("qrc:/screen2.qml"))//다음 화면을 출력하기 위해 stack에 화면을 쌓는 코드
                 //stack에 메인화면 두번째화면 세번째 화면이 쌓이게 된다.
            }
        }
        Button
        {
            id:previousButton
            anchors.top:testText.bottom
            anchors.right: nextButton.left
            anchors.rightMargin: 30
            text:"go previous screen"
            onClicked: {
                stackView.pop();//이전화면을 호출하기위해 stack의 제일 위에 화면을 밖으로 빼주어 첫화면을 보여준다.
            }
        }
}
