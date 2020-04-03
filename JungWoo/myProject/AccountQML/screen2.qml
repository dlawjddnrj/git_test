import QtQuick 2.0
import QtQuick.Controls 2.5

Item {
    width: 1024
    height: 768
    objectName: "screen2"

    Component.onCompleted: {
        var previousItem = stackView.get(StackView.index - 1)

        console.log("previousItem : " + previousItem)

        if(previousItem.objectName === "mainScreen") {
            console.log("previousItem === mainScreen")

            testData.text = "previous screen is mainScreen"
        } else if(previousItem.objectName === "screen1") {
            console.log("previousItem === screen1")

            testData.text = "previous screen is screen1"
        } else {
            console.log("else ~")
        }
    }

    Rectangle
        {
            anchors.fill: parent
            color:"gray"
        }
        Text
        {
            id:testData
            anchors.horizontalCenter: parent.horizontalCenter
            text:"screen2 testData"
            font.pixelSize: 30
            font.bold: true
        }
        Text
        {
            id:testText
            anchors.centerIn: parent
            text:"screen2!!"
            font.pixelSize: 50
            font.bold: true
        }
        Button
        {
            id:previousButton
            anchors.top:testText.bottom
            anchors.horizontalCenter: parent.horizontalCenter
            text:"go previous screen"
            onClicked: {
                stackView.pop();//이전화면을 호출하기위해 stack의 제일 위에 화면을 밖으로 빼주어 두번째 화면을 보여준다.
            }
        }
}
