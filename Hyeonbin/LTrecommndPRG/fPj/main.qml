import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.5

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Lotto Recommend Number")

    signal buttonClicked(var a)

    property int a
    property int b
    property int c
    property int d
    property int e
    property int f


    Rectangle{
        id: controlZone
        x: 170
        y: 36
        width: 300
        height: 354

        Rectangle{
            id: outText
            width: 300
            height: 354
            color: "black"

            TextArea{
                width: 300
                height: 37
                id: textOutArea1
                readOnly: true
                x: 0
                y: 60
                color: "white"
                text: a    //c++에서 처리된 값을 가져오는 부분
            }

            TextArea{
                width: 300
                height: 37
                id: textOutArea2
                readOnly: true
                x: 0
                y: 103
                color: "white"
                text: b    //c++에서 처리된 값을 가져오는 부분
            }

            TextArea{
                width: 300
                height: 37
                id: textOutArea3
                readOnly: true
                x: 0
                y: 146
                color: "white"
                text: c    //c++에서 처리된 값을 가져오는 부분
            }

            TextArea{
                width: 300
                height: 37
                id: textOutArea4
                readOnly: true
                x: 0
                y: 189
                color: "white"
                text: d    //c++에서 처리된 값을 가져오는 부분
            }

            TextArea{
                width: 300
                height: 37
                id: textOutArea5
                readOnly: true
                x: 0
                y: 232
                color: "white"
                text: e    //c++에서 처리된 값을 가져오는 부분
            }

            TextArea{
                width: 300
                height: 37
                id: textOutArea6
                readOnly: true
                x: 0
                y: 275
                color: "white"
                text: f    //c++에서 처리된 값을 가져오는 부분

            }
        }

        Item {
            id: id_num
            property int setNumber : 0

//            Component
//            {
//             id: setMynumber

//            }

        }



        Button{

            BusyIndicator {
                id: busyIndicator
                x: 290
                y: 396
            }

            text:{
                qsTr("Click")
            }
            id: buttonStart
            x: 100
            y: 314
            onClicked: {
                busyIndicator.running = true
                buttonClicked(id_num.setNumber)
                console.log("success")
            }//signal 발생부분
        }

    }



}
