import QtQuick 2.9
import QtQuick.Controls 2.0
import QtQuick.Window 2.2
import ConnectEvent 1.0//등록한 클래스 타입을 import해준다.

Window {
    id:mainWindow
    property bool mbImageClicked : true
    property int mCount : 0
    property int mListClickIndex : 0//클릭한 리스트의 index를 담는 전역 변수

    signal qmlSignalListUpdate();//리스트가 업데이트되었다는 것을 알려주기 위한 시그널 등록

    visible: true
    width: 800
    height: 600
    title: qsTr("Hello World")
    ConnectEvent//클래스를 qml 타입으로 지정
    {
        id:connectEvent
    }

    Component.onCompleted://view가 처음 실행될때 제일 처음으로 불려지는곳
    {

        for(var i = 0; i < connectEvent.getListSize(); i++){//리스트의 개수만큼 for문을 돌린다.
            listView.model.append({"list_text": connectEvent.getListTitle(i),//모델에 리스트의 데이터값을 넣어준다.
                      "list_button_text": connectEvent.getListButtonText(i)})//listview에 선언한 임의의 모델 안에 데이터를 넣어준다.
        }

    }
    onQmlSignalListUpdate:{//시그널이 호출되면 실행하는 함수
        console.log("onQmlSignalListUpdate called")
        listView.model.clear();//리스트 초기화
        for(var i = 0; i < connectEvent.getListSize(); i++){//리스트 초기화 후 다시 넣어줌
            listView.model.append({"list_text": connectEvent.getListTitle(i),
                                      "list_button_text": connectEvent.getListButtonText(i)})
        }
    }

    Component {//리스트 뷰의 틀을 만든다.
        id: contactDelegate
        Item {
            width: 800
            height: 100

            Rectangle {
                id: id_highlight
                width: 800
                height: 100
                color: "lightblue"
            }
            Text//리스트에 텍스트를 넣어주기 위해 텍스트 객체를 만들어준다.
            {
                id:listView_Text
                anchors.left: parent.left
                anchors.leftMargin: 50
                anchors.verticalCenter:  parent.verticalCenter
                text:list_text//모델에 매칭이될 변수 listview에 원하는 값을 넣기위해서 설정하는 값
            }

            Rectangle//리스트의 구분선
            {
                id:line
                width:parent.width
                anchors.bottom:parent.bottom//현재 객체의 아래 기준점을 부모객체의 아래로 잡아주어서 위치가 아래로가게 설정
                height:1
                color:"black"
            }
            MouseArea
            {
                id:listMouseArea
                anchors.fill: parent
                onClicked:
                {
                    mListClickIndex = index;//여기에서 사용하는 index는 클릭했을때의 index를 리턴해준다
                    //그래서 현재 선택한 리스트를 전역변수에 담고 다음 화면에서 그에 해당하는 정보를 보여준다.
                    stackView.push(Qt.resolvedUrl("qrc:/deleteList.qml"))
                }
            }
            //버튼 객체를 mouseArea아래로 옮겼다 이유는 mouseArea가 부모의 영역을 포함하고 있는데
            //버튼 영역도 부모의 영역 안에 있기 때문에 버튼클릭시 버튼클릭이 아닌 리스트의 클릭이 되어 버린다.
            Button//리스트에 버튼을 넣어주기 위해 버튼 객체를 만들어준다.
            {
                id:listView_Button
                width:120
                height:40
                anchors.rightMargin: 30
                anchors.verticalCenter: parent.verticalCenter
                anchors.right: parent.right
                text: list_button_text//모델에 매칭이될 변수 listview에 원하는 값을 넣기위해서 설정하는 값
                onClicked:
                {
                    connectEvent.deleteListItem(index);//c++ 리스트의 데이터를 삭제
                    listView.model.remove(index);//리스트의 모델에 삭제하는 함수(실시간 삭제)

                }
            }

        }
    }
    StackView{
        id:stackView
        anchors.fill: parent


        initialItem: Item  //제일 첫화면을 설정하는 것으로 설정을 안하면 되돌아오기가 안된다.
        {
            ListView {
                id:listView
                anchors.fill: parent
                model: ListModel{}//임으로 만들 모델을 넣어준다.
                delegate: contactDelegate//delegate란 리스트 한개의 틀(틀을 하나 만들어서 그것들을 여러개 붙여놓은것이 리스트 뷰이다.)
                highlight: id_highlight
                focus: true
                onCurrentIndexChanged: {
                    console.log("asd~")
                }
            }
        }
    }

}
