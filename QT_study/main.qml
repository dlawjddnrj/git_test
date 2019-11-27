import QtQuick 2.11
import QtQuick.Window 2.11
/*              // 그냥 Hello World 띄우는 코드
Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Text {
        anchors.centerIn: parent
        text : "Hello World";
        color: "red"
        font.pointSize: 20
    }
} */


/*              // 빨간, 초록, 파랑색, 버튼 등 만드는 코드
Window {
    id : rootId
    visible: true
    width: 640
    height: 480
    title: qsTr("QML Syntax Demo")
    property string textToShow: "hello"

    Row {
        id : row1
        anchors.centerIn: parent
        spacing: 20

        Rectangle {
            id : redRectId
            width: 150; height: 150
            color: "red"
            radius: 20
            MouseArea {
                anchors.fill: parent
                onClicked: {
                    console.log("Clicked on the red rectangle")
                    textToShow = "red"
                }
            }
        }

        Rectangle {
            id : grrenRectId
            width: 150; height: 150
            color: "green"
            radius: 20
            MouseArea {
                anchors.fill: parent
                onClicked: {
                    console.log("Clicked on the green rectangle")
                    textToShow = "green"
                }
            }
        }

        Rectangle {
            id : blueRectId
            width: 150; height: 150
            color: "blue"
            radius: 20
            MouseArea {
                anchors.fill: parent
                onClicked: {
                    console.log("Clicked on the blue rectangle")
                    textToShow = "blue"
                }
            }
        }

        Rectangle {
            id : textRectId
            width: 150; height: 150
            color: "dodgerblue"
            radius: 100
            Text {
                id : textId
                anchors.centerIn: parent
                text : textToShow
            }

            MouseArea {
                anchors.fill: parent
                onClicked: {
                    console.log("Clicked on the Button rectangle")
                    textId.text = "Button"
                }
            }
        }
    }
} */


/*
Window {
    visible: true
    width : 640
    height : 480
    title: qsTr("QML Datatypes Demo")

    //property string mString: "http://www.naver.com"
    property int mInt: 45
    property bool isFemale: false
    property double mDouble: 77.5
    property url mUrl: "http://www.naver.com"

    property var aNumber: 100
    property var aBool: false
    property var aString: "Hello world!"
    property var anotherString: String("#FF008800")
    property var aColor: Qt.rgba(0.2, 0.3, 0.4, 0.5)        // rgba 순으로 r은 빨강, g는 초록, b는 파랑이고 a는 채도 ? 같다.
    property var aRect: Qt.rect(17, 56, 46, 10)             // 코드 161줄을 보면 이 함수(?)는 x, y, 가로, 세로 순인것 같다.
    property var aPoint: Qt.point(10, 10)
    property var aSize: Qt.size(10, 10)
    property var aVector3d: Qt.vector3d(100, 100, 100)
    property var anArray: [1, 2, 3, "four", "five", (function() { return "six"; })]
    property var anObject: { "foo" : 10, "bar" : 20 }
    property var aFunction: (function() {return "Seven"; })

    property var aFont: Qt.font({family : "Consolas", pointSize: 30, bold: true})
    property date mDate: "2019-11-20"

    Rectangle {
        width : 200
        height : 100 + mInt
        anchors.centerIn: parent
        color: aColor

        Text {
            id: mTextId
            anchors.centerIn: parent
            text: mString
            //font.bold: isFemale ? true : false
            font: aFont                             // 122줄에 있는 property aFont를 부르는 코드임
        }
    }

    Component.onCompleted: {
        //console.log("The value of mString is : " + mString)
        print("The vlaue of mString is : " + mString)
        console.log("The value of mInt is : " + mInt)

        if(isFemale) {
            console.log("You may wear a dress")
        } else {
            console.log("You may wear a suit")
        }
        console.log("The value of mDouble is : " + mDouble)
        console.log("The value of mUrl is : " + mUrl)
                                        // == 연산자는 값만 같아도 참 !
        if(mString === mUrl) {          // === 연산자는 단순히 값만 같은게 아니라. 데이터 타입도 같아야 True 를 리턴한다.
            console.log("They are the same")
        } else {
            console.log("They are NOT the same")
        }

        console.log("---------------------Playing with var datatype-----------------------")
        console.log("The value of aNumber is : " + aNumber)
        console.log("The value of aBool is : " + aBool)
        console.log("The value of aString is : " + aString)
        console.log("The value of anotherString is : " + anotherString)

        console.log("The components of aRect are : x : " + aRect.x
                    + " y : " + aRect.y + " width : " + aRect.width + " height : " + aRect.height)

        console.log("The length of the array is : " + anArray.length);


        anArray.forEach(function(value, index) {
          if(index === 5) {
              console.log(value())
          } else {
              console.log(value)
          }})


        for(var i = 0; i < anArray.length; i++) {
            if(i === 5) {
                console.log(anArray[i]())
            } else {
                console.log(anArray[i])
            }
        }

        console.log("The date is : " + mDate)

        console.log("The function value is : " + aFunction())
    }
}  */



/*
Window{
    visible: true
    width: 640
    height: 480
    title: qsTr("Property Binding Demo")

    Rectangle {
        id : redRectId
        width: 50
        height: width * 1.5
        color: "red"
    }

    Rectangle {
        id : blueRectId
        width: 100
        height: 100
        color: "blue"
        anchors.bottom: parent.bottom

        MouseArea {
            anchors.fill: parent
            onClicked:  {
                redRectId.width = redRectId.width + 10
            }
        }
    }

    Rectangle {
        id : greenRectId
        width: 100
        height: 100
        color: "green"
        anchors.bottom: parent.bottom
        anchors.left: blueRectId.right

        MouseArea {
            anchors.fill: parent
            onClicked: {
                redRectId.height = Qt.binding(function(){
                    return redRectId.width * 2
                })
            }
        }
    }
} */


/*
Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Qt Global Object Demo")

    property var fonts: Qt.fontFamilies()

    Rectangle{
        width: 300
        height: 100
        color: "red"
        anchors.centerIn: parent

        MouseArea{
            anchors.fill: parent
            onClicked:{
                // Quit the application         (프로그램 종료)
                console.log("Quitting the App")
                Qt.quit()

                // List the available fonts     (사용 가능한 글꼴 나열)
                for(var i = 0; i < fonts.length; i++) {
                    console.log("[" + i + "] : " + fonts[i])
                }

                //Hash a string        (문자열 해쉬 ? )
                var mName = "Jung Woo Lim"
                var mNameHash = Qt.md5(mName)
                console.log("The hash of the name is " + mNameHash)

                //Open url externally  ( 외부에서 URL 열기! )
                //Qt.openUrlExternally("https://www.naver.com/")

                //Open local files with default program     (기본 프로그램으로 로컬 파일 열기)
                Qt.openUrlExternally("file:///C:/Users/ghktk/Desktop/study/QT_QML_Study/images.jfif")

                //Capture platform info
                console.log("The current platform is " + Qt.platform.os)
            }
        }
    }
} */


/*
Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Properties and Handlers Demo")

    property string mFirstName: "Lim"
    onMFirstNameChanged: {
        console.log("The firsname changed to : " + mFirstName)
    }

    Rectangle {
        width: 300
        height: 100
        color: "greenyellow"     //"dodgerblue"
        anchors.centerIn: parent

        MouseArea {
            anchors.fill: parent
            onClicked: {
                mFirstName = "Kim"
            }
        }

        Component.onCompleted:  {
            console.log("The firstname is : " + mFirstName)
        }
    }
} */


Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("QML Basic Elements Demo")

    Item {
        id : containerItemId
        x : 130; y: 90

        width: 600
        height: 400

        Rectangle {
            anchors.fill: parent
            color: "beige"
            border.color: "black"
        }

        Rectangle {
            x : 10; y: 10
            width: 50
            height: 50
            color: "red"

            MouseArea {
                anchors.fill: parent
                onClicked:  {

                }
            }
        }

        Rectangle {
            x : 67.5; y : 10
            width: 50
            height: 50
            color: "green"

            MouseArea {
                anchors.fill: parent
                onClicked:  {

                }
            }
        }

        Rectangle {
            x : 123.5; y : 10
            width: 50
            height: 50
            color: "blue"

            MouseArea {
                anchors.fill: parent
                onClicked: {

                }
            }
        }

        Rectangle {
            x : 179; y : 10
            width: 50
            height: 50
            color: "magenta"

            MouseArea {
                anchors.fill: parent
                onClicked:  {

                }
            }
        }

        Text {
            x : 100; y : 100
            id: mTextId
            text: "This is my text"
            //  font.family: "Helvetica"; font.pointSize: 24; font.bold: true  쓰는 방법이 두가지 인듯

            font {
                family: "Helvetica"; pointSize: 13; bold: true
            }

            color: "red"
        }

        Image {
            x : 10; y : 150
            width: 100; height: 100
            // Load image from the working directory (작업 디렉토리에서 이미지로드)
            source: "file:dog.png"
        }

        Image {
            x : 150; y : 150
            width: 100; height: 100
            // Loading image from the resourc (저장소에서 이미지로드)
            source: "images/dog.png"
        }

        Image {
            x : 300; y : 150
            width : 100; height: 100
            //Specify the full path to the image (이미지의 전체 경로를 지정하십시오.)
            source: "file:///Users/ghktk/Desktop/study/QT_QML_Study/QT_study/dog.png"
        }
    }
}
