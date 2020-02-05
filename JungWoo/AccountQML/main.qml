import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.5

Window {
    visible: true
    width: 1024
    height: 768
    title: qsTr("Account QML Program")

    signal sss(var temp)

    StackView
        {
            id:stackView
            anchors.fill: parent
/*
            replaceEnter: Transition { PropertyAnimation {//뷰를 replace 한 화면이 그려질때 출력하는 애니메이션
                            property: "opacity"
                            from: 1
                            to:1
                            duration: 0
                    }}
                    replaceExit: Transition { PropertyAnimation {//뷰를 replace 한 화면이 그려질때 이전화면이 없어지는 애니메이션
                            property: "opacity"
                            from: 1
                            to:1
                            duration: 0
                    }}
                    pushEnter: Transition { PropertyAnimation {//뷰를 push 한 화면이 그려지는 애니메이션
                            property: "opacity"//투명도가 설정 되게 설정 x,나 y등 다른 속성값으로 설정할수 있음
                            from: 1//투명도를 1에서 1로 바꿔줌 즉 투명도가 변하지 않아서 애니메이션이 없는 것처럼 된다.
                            to:1
                            duration: 0
                    }}
                    pushExit: Transition { PropertyAnimation {//뷰를 push 한 화면이 그려질때 이전화면이 없어지는 애니메이션
                            property: "opacity"//투명도가 설정 되게 설정 x,나 y등 다른 속성값으로 설정할수 있음
                            from: 1
                            to:1//투명도를 1에서 1로 바꿔줌 즉 투명도가 변하지 않아서 애니메이션이 없는 것처럼 된다.
                            duration: 0
                    }}
                    popEnter: Transition { PropertyAnimation {////뷰를 pop해서 이전화면으로 갈때 이전화면이 출력되는 애니메이션
                            property: "opacity"//투명도가 설정 되게 설정 x,나 y등 다른 속성값으로 설정할수 있음
                            from: 1//투명도를 1에서 1로 바꿔줌 즉 투명도가 변하지 않아서 애니메이션이 없는 것처럼 된다.
                            to:1
                            duration: 0
                    }}
                    popExit: Transition { PropertyAnimation {//뷰를 pop 했을때 pop한 화면이 없어지는 애니메이션
                            property: "opacity"//투명도가 설정 되게 설정 x,나 y등 다른 속성값으로 설정할수 있음
                            from: 1
                            to:1//투명도를 1에서 1로 바꿔줌 즉 투명도가 변하지 않아서 애니메이션이 없는 것처럼 된다.
                            duration:0
                    }}      애니메이션 없애려면 이 코드 추가.
*/

/* @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
            replaceEnter: Transition { PropertyAnimation {//뷰를 replace 한 화면이 그려지는 했을때 애니메이션
                            property: "y"
                            from: -480
                            to:0
                            duration: 500//애니메이션 완료시간을 0.5로 설정함
                    }}
                    replaceExit: Transition { PropertyAnimation {//뷰를 replace 한 화면이 그려질때 이전화면이 없어지는 애니메이션
                            property: "y"
                            from: 0
                            to:480
                            duration: 500//애니메이션 완료시간을 0.5로 설정함
                    }}
                    pushEnter: Transition { PropertyAnimation {//뷰를 push 한 화면이 그려지는 했을때 애니메이션
                            property: "y"//y값을 변경하기 위해서 property를 y로 설정해줌
                            from: -480//새로 출력해야하는 화면의 y값을 화면의 높이만큼의 전에서 0까지 내려오게 해서 아래로 내려오는 것과 같은 애니메이션을 줌
                            to:0
                            duration: 500//애니메이션 완료시간을 0.5로 설정함
                    }}
                    pushExit: Transition { PropertyAnimation {//뷰를 push 한 화면이 그려질때 이전화면이 없어지는 애니메이션
                            property: "y"//y값을 변경하기 위해서 property를 y로 설정해줌
                            from: 0
                            to:480//없어져야하는 화면의 값을 화면 높이만큼 내려가게 해서 화면이 밑으로 없어지는 것과 같은 효과를 줌
                            duration: 500//애니메이션 완료시간을 0.5로 설정함
                    }}
                    popEnter: Transition { PropertyAnimation {////뷰를 pop해서 이전화면으로 갈때 이전화면이 출력되는 애니메이션
                            property: "y"//y값을 변경하기 위해서 property를 y로 설정해줌
                            from: -480//새로 출력해야하는 화면의 y값을 화면의 높이만큼의 전에서 0까지 내려오게 해서 아래로 내려오는 것과 같은 애니메이션을 줌
                            to:0
                            duration: 500//애니메이션 완료시간을 0.5로 설정함
                    }}
                    popExit: Transition { PropertyAnimation {//뷰를 pop 했을때 pop한 화면이 없어지는 애니메이션
                            property: "y"//y값을 변경하기 위해서 property를 y로 설정해줌
                            from: 0
                            to:480//없어져야하는 화면의 값을 화면 높이만큼 내려가게 해서 화면이 밑으로 없어지는 것과 같은 효과를 줌
                            duration:500 //애니메이션 완료시간을 0.5로 설정함
                    }}          위에서 아래로 애니메이션 변경
*/

            initialItem: Item  //제일 첫화면을 설정하는 것으로 설정을 안하면 되돌아오기가 안된다.
            {
                objectName: "mainScreen"
                Rectangle//배경 색을 지정하는 부분
                {
                    anchors.fill: parent
                    color:"gray"
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
                    id: screen1Button
                    anchors.top:testText.bottom
                    anchors.horizontalCenter: parent.horizontalCenter
                    text: "go screen1"
                    onClicked:
                    {
                         stackView.push(Qt.resolvedUrl("qrc:/screen1.qml"))//다음 화면을 출력하기 위해 stack에 화면을 쌓는 코드
                    }
                }

                Button
                {
                    id: screen2Button
                    anchors.top: testText.bottom
                    anchors.left: screen1Button.right
                    anchors.leftMargin: 30
                    text:  "go screen2"

                    onClicked:
                    {
                        sss(true)
                        stackView.push(Qt.resolvedUrl("qrc:/screen2.qml"))
                    }
                }
            }
        }
}
