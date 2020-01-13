import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.5
import QtQuick.Layouts 1.3

/*
Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("ComboBox Demo")

    Column {
        spacing: 40             // 간격
        width: parent.width

        Label {
            text: "Non Editable Combo"
            wrapMode: Label.Wrap
            horizontalAlignment: Qt.AlignHCenter
            width: parent.width
        }

        ComboBox {
            id : nonEditableComboId
            model: ["One", "Two", "Three", "Four"]
            anchors.horizontalCenter: parent.horizontalCenter
            onActivated: {
                console.log("[" + currentIndex + "]" + currentText + "is activated")
            }
        }

        Label {
            text: "Editable Combo"
            wrapMode: Label.Wrap
            horizontalAlignment: Qt.AlignHCenter
            width: parent.width
        }

        ComboBox {
            id : editableComboId
            editable: true
            textRole: "text"
            model: ListModel {
                id : model
                ListElement { text: "First"; location: "a" }
                ListElement { text: "Second"; location: "b" }
                ListElement { text: "Third"; location: "c" }
                ListElement { text: "JungWoo"; location: "Name" }
            }

            anchors.horizontalCenter: parent.horizontalCenter
            onActivated: {
                console.log("[" + currentIndex + "]" + currentText + " is activated")
            }

            onAccepted: {
                if(find(editText) === -1) {
                    model.append({text : editText, location : "US" })
                }
            }
        }

        Button {
            text : "Capture current element"
            anchors.horizontalCenter: parent.horizontalCenter
            onClicked: {
                console.log("[" + model.get(editableComboId.currentIndex).text + "] : " +
                            model.get(editableComboId.currentIndex).location)
            }
        }
    }
} */



/*
Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("DelayButton_Demo")

    Column {
        width: parent.width
        spacing: 40

        Label {
            width: parent.width
            wrapMode: Label.Wrap
            horizontalAlignment: Qt.AlignHCenter
            text: "Delayed Button. Use it when you want to prevent accidental clicks"
            font.pointSize: 15
        }

        DelayButton {
            property bool activated: false
            text: "DelayeButton"
            anchors.horizontalCenter: parent.horizontalCenter
            delay: 1000

            onPressed: {
                if(activated === true) {
                    console.log("Button is Clicked")
                    activated = false;
                }
            }

            onActivated: {
                console.log("Button Activated")
                activated = true
            }

            onProgressChanged: {
                console.log(progress)
            }
        }
    }
} */


/*
Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Dial Demo")

    Column {
        width: parent.width
        spacing: 40

        Label {
            width: parent.width
            wrapMode: Label.Warp
            horizontalAlignment: Qt.AlignHCenter
            text: "A Know used to let the user choose a value from a range"
            font.pointSize: 15
        }

        Dial {
            anchors.horizontalCenter: parent.horizontalCenter
            from: 1
            to: 100
            value: 50
            wrap: true

            onValueChanged: {
                console.log(" Current value : " + Math.ceil(value))
            }
        }
    }
} */

/*
Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Frame Demo")

    Frame {
        anchors.centerIn: parent

        ColumnLayout {
            Button {
                text: "Button1"
                onClicked: {
                    console.log("Clicked on Button1 !")
                }
            }

            Button {
                text: "Button2"
                onClicked: {
                    console.log("Clicked on Button2 !")
                }
            }

            Button {
                text: "Button3"
                onClicked: {
                    console.log("Clicked on Button3 !")
                }
            }
        }
    }
} */


/*
Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("GroupBox Demo")

    Column {
        spacing: 10
        anchors.fill: parent

        Label {
            width: parent.width
            wrapMode: Label.Wrap
            horizontalAlignment: Qt.AlignHCenter
            text: "A GroupBox wrapping around RadioButtons."
        }

        GroupBox {
            title: "Choose bonus"
            anchors.horizontalCenter: parent.horizontalCenter

            Column {
                RadioButton {
                    text: "Coke"
                    onCheckedChanged:  {
                        if(checked === true) {
                            console.log("Coke button checked")
                        } else {
                            console.log("Coke button is NOT checked")
                        }
                    }
                }

                RadioButton {
                    text: "Green Tea"
                }

                RadioButton {
                    text: "Ice Cream"
                }
            }
        }

        Label {
            width: parent.width
            wrapMode: Label.Wrap
            horizontalAlignment: Qt.AlignHCenter
            text: "A GroupBox wrapping around CheckBoxes."
        }

        GroupBox {
            title: "Choose Qt supported Desktop Platform"
            anchors.horizontalCenter: parent.horizontalCenter

            Column {
                CheckBox {
                    text: "Windows"
                    onCheckedChanged:  {
                        if(checked === true) {
                            console.log("Windows button checked")
                        } else {
                            console.log("Windows button is NOT checked")
                        }
                    }
                }

                CheckBox {
                    text: "Mac"
                }

                CheckBox {
                    text: "Linux"
                }
            }
        }
    }
} */


/*
Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("PageIndicator and SwipeView Demo")

    SwipeView {
        id : swipeViewId
        anchors.fill: parent
        currentIndex: pageIndicatorId.currentIndex

        Image {
            id : image1
            //source: "http://pngimg.com/uploads/dolphin/dolphin_PNG71363.png"
            source: "images/audi_PNG1760.png"
        }

        Image {
            id : image2
            //source: "http://pngimg.com/uploads/dolphin/dolphin_PNG71372.png"
            source: "images/bmw_PNG1702.png"
        }

        Image {
            id : image3
            //source: "http://pngimg.com/uploads/mercedes/mercedes_PNG80209.png"
            source: "images/mercedes_PNG1894.png"
        }
    }

    PageIndicator {
        id: pageIndicatorId
        anchors.bottom: parent.bottom
        anchors.horizontalCenter: parent.horizontalCenter

        //
        currentIndex: swipeViewId.currentIndex
        interactive: true
        count: swipeViewId.count
    }
}*/


/*
Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("ProgressBar Demo")

    Column {
        width: parent.width
        spacing: 20

        Button {
            text: "Strat"
            anchors.horizontalCenter: parent.horizontalCenter
            onClicked: {
                progressBarId.value = 78
            }
        }

        Dial {
            id : dialId
            from : 1
            to : 100
            value: 40
            anchors.horizontalCenter: parent.horizontalCenter
            onValueChanged: {
                progressBarId.value = value
            }
        }

        ProgressBar {
            id : progressBarId
            from : 1
            to : 100
            value: 40
            anchors.horizontalCenter: parent.horizontalCenter
        }

        ProgressBar {
            id : progressBarId1
            indeterminate: true
            anchors.horizontalCenter: parent.horizontalCenter
        }
    }
}*/


/*
Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("RangeSlider Demo")

    Row {
        spacing: 40
        width: parent.width

        RangeSlider {
            orientation: Qt.Vertical
            from: 1
            to: 100
            first.value: 25

            second.value: 75

            first.onValueChanged: {
                console.log("First value changed to : " + Math.ceil(first.value))
            }

            second.onValueChanged: {
                console.log("Second value changed to : " + Math.ceil(second.value))
            }
        }
    }
} */

/*
Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Flickable and Scrollbar Demo")

    Flickable {
        width: parent.width
        height: parent.height
        contentHeight: mColumnId.implicitHeight

        Column {
            id : mColumnId
            anchors.fill: parent

            Rectangle {
                color: "red"
                width: parent.width
                height: 200

                Text {
                    anchors.centerIn: parent
                    text: "Elemnt 1"
                    font.pointSize: 30
                    color: "white"
                }
            }

            Rectangle {
                color: "blue"
                width: parent.width
                height: 200

                Text {
                    anchors.centerIn: parent
                    text: "Elemnt 2"
                    font.pointSize: 30
                    color: "white"
                }
            }

            Rectangle {
                color: "yellow"
                width: parent.width
                height: 200

                Text {
                    anchors.centerIn: parent
                    text: "Elemnt 3"
                    font.pointSize: 30
                    color: "white"
                }
            }

            Rectangle {
                color: "magenta"
                width: parent.width
                height: 200

                Text {
                    anchors.centerIn: parent
                    text: "Elemnt 4"
                    font.pointSize: 30
                    color: "white"
                }
            }

            Rectangle {
                color: "beige"
                width: parent.width
                height: 200

                Text {
                    anchors.centerIn: parent
                    text: "Elemnt 5"
                    font.pointSize: 30
                    color: "white"
                }
            }

            Rectangle {
                color: "pink"
                width: parent.width
                height: 200

                Text {
                    anchors.centerIn: parent
                    text: "Elemnt 6"
                    font.pointSize: 30
                    color: "white"
                }
            }

            Rectangle {
                color: "green"
                width: parent.width
                height: 200

                Text {
                    anchors.centerIn: parent
                    text: "Elemnt 7"
                    font.pointSize: 30
                    color: "white"
                }
            }

            Rectangle {
                color: "black"
                width: parent.width
                height: 200

                Text {
                    anchors.centerIn: parent
                    text: "Elemnt 8"
                    font.pointSize: 30
                    color: "white"
                }
            }

            Rectangle {
                color: "purple"
                width: parent.width
                height: 200

                Text {
                    anchors.centerIn: parent
                    text: "Elemnt 9"
                    font.pointSize: 30
                    color: "white"
                }
            }
        }

        ScrollBar.vertical: ScrollBar{}
    }
} */

/*
Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Slider Demo")

    Column {
        width: parent
        spacing: 20

        Slider {
            anchors.horizontalCenter: parent.horizontalCenter
            from: 1
            to : 100
            value: 40
            onValueChanged: {
                progressBarId.value = value
            }
        }

        ProgressBar {
            anchors.horizontalCenter: parent.horizontalCenter
            id : progressBarId
            from: 1
            to : 100
            value: 40
        }
    }
}*/


/*
Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Switch Demo")

    Column {
        width: parent.width
        spacing: 20

        Switch {
            anchors.horizontalCenter: parent.horizontalCenter
            text : "WiFi"
            checked: true
            onCheckedChanged: {
                if(checked === true) {
                    console.log("WiFi switch is turned ON")
                } else {
                    console.log("WiFi switch is turned OFF")
                }
            }
        }

        Switch {
            anchors.horizontalCenter: parent.horizontalCenter
            text : "Bluetooth"
        }

        Switch {
            anchors.horizontalCenter: parent.horizontalCenter
            text : "NFC"
            enabled: false
        }
    }
} */


/*
Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Page and TabBar Demo")

    Page {
        id : pageId
        anchors.fill: parent

        header: Rectangle {
            width: parent.width
            height: 50
            color: "red"
        }

        SwipeView {
            id : swipeViewId
            anchors.fill: parent
            currentIndex: tabBarId.currentIndex

            Image {
                id : image1
                //source: "http://pngimg.com/uploads/dolphin/dolphin_PNG71363.png"
                source: "images/audi_PNG1760.png"
            }

            Image {
                id : image2
                //source: "http://pngimg.com/uploads/dolphin/dolphin_PNG71372.png"
                source: "images/bmw_PNG1702.png"
            }

            Image {
                id : image3
                //source: "http://pngimg.com/uploads/mercedes/mercedes_PNG80209.png"
                source: "images/mercedes_PNG1894.png"
            }
        }

        footer: TabBar {
            id : tabBarId
            currentIndex: swipeViewId.currentIndex

            TabButton {
                text: "First"
            }

            TabButton {
                text: "Second"
            }

            TabButton {
                text: "Third"
            }
        }
    }
}*/


/*
Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("TextArea Demo")

    Column {
        spacing: 40
        width: parent.width

        Label {
            width: parent.width
            wrapMode: Label.Wrap
            horizontalAlignment: Qt.AlignHCenter
            text: "TextArea is a multi-line text Demo"
        }

        ScrollView {
            width: 600
            height: 150
            anchors.horizontalCenter: parent.horizontalCenter
            TextArea {
                id : textAreaId
                background: Rectangle {
                    color: "black"
                }

                color: "black"
                wrapMode: TextArea.Wrap
                placeholderText: "Type in your query"
                //text: "안녕 나는 임정우 지금 날짜는 2019년 11월 26일 시간은 오후 2시 10분이야!"
            }

        }

        Button {
            text: "Submit"
            anchors.horizontalCenter: parent.horizontalCenter
            onClicked: {
                console.log("The text inside the TextArea is : " + textAreaId.text)
            }
        }
    }
} */


/*
Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("TextField Demo")

    Rectangle {
        width: 150
        height: 150
        anchors.fill: parent
        color: "yellowgreen"
        Column {
            spacing: 20
            anchors.centerIn: parent

            Row {
                spacing: 30
                width: 300

                Label {
                    width: 100
                    height: 50
                    wrapMode: Label.Wrap
                    horizontalAlignment: Qt.AlignHCenter
                    verticalAlignment: Qt.AlignVCenter
                    text: "First Name : "
                }

                TextField {
                    id : textFieldId
                    width: 200
                    height: 50
                    color: "Black"
                    placeholderText: "Type your First Name"
                    onEditingFinished: {
                        console.log("Text Edit Finshed : " + text)
                    }
                }
            }

            Button {
                text : "Click"
                onClicked: {
                    console.log("Text is : " + textFieldId.text)
                }
            }
        }
    }
} */


/*
Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("SplitView Demo")

    SplitView {
         anchors.fill: parent
         //orientation: Qt.Horizontal
         orientation: Qt.Vertical

         Rectangle {
             //width: 200
             height: 200
             //Layout.maximumWidth: 400
             Layout.maximumHeight: 400
             color: "lightblue"
             Text {
                 text: "View 1"
                 anchors.centerIn: parent
             }
         }
         Rectangle {
             id: centerItem
             //Layout.minimumWidth: 50
             //Layout.fillWidth: true
             Layout.minimumHeight: 50
             Layout.fillHeight: true
             color: "silver"

             Text {
                 text: "View 2"
                 anchors.centerIn: parent
             }
         }
         Rectangle {
             //width: 200
             height: 200
             color: "lightgreen"
             Text {
                 text: "View 3"
                 anchors.centerIn: parent
             }
         }
     }
} */

/*
ApplicationWindow {
    id : rootId
    visible: true
    width: 360
    height: 520
    title: qsTr("Drawer Demo")

    header: ToolBar {
        height: 50
        background: Rectangle {
            color: "mintcream"
        }

        RowLayout {
            spacing: 20
            anchors.fill: parent

            ToolButton {
                background: Rectangle {
                    color: "white"
                }

                icon.source: "images/bmw_PNG1702.png"

                onClicked: {
                    console.log("Toolbutton clicked")
                    // Open Drawer
                    drawerId.open()
                }
            }

            Label {
                id : titleLabel
                text: "Drawer Demo"
                font.pixelSize: 20
                elide: Label.ElideRight
                horizontalAlignment: Qt.AlignHCenter
                verticalAlignment: Qt.AlignCenter
                Layout.fillWidth: true
                anchors.centerIn: parent
            }
        }
    }

    Drawer {
        id : drawerId
        width: Math.min(rootId.width, rootId.height) * (2/3)
        height: rootId.height
        interactive: true

        ColumnLayout {
            spacing: 0
            width: parent.width

            Button {
                width: parent.width
                height: 50
                text: "Item1"
                font.pointSize: 20
                background: Rectangle {
                    color: "beige"
                }

                Layout.fillWidth: true
                onClicked: {
                    console.log("Clicked on item1 ")
                    contentRectId.color = "beige"
                    drawerId.close()
                }
            }

            Button {
                width: parent.width
                height: 50
                text: "Item2"
                font.pointSize: 20
                background: Rectangle {
                    color: "yellowgreen"
                }

                Layout.fillWidth: true
                onClicked: {
                    console.log("Clicked on item2 ")
                    contentRectId.color = "yellowgreen"
                    drawerId.close()
                }
            }

            Button {
                width: parent.width
                height: 50
                text: "Item3"
                font.pointSize: 20
                background: Rectangle {
                    color: "dodgerblue"
                }

                Layout.fillWidth: true
                onClicked: {
                    console.log("Clicked on item3 ")
                    contentRectId.color = "dodgerblue"
                    drawerId.close()
                }
            }
        }
    }
    Rectangle {
        id : contentRectId
        anchors.fill: parent
        color: "lightsteelblue"
    }
} */

/*
Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("SpinBox Demo")

    Column {
        spacing: 20
        width: parent.width

        SpinBox {
            id : spinBoxId
            from: 1
            to: 100
            value: 20
            stepSize: 5
            editable: true
            anchors.horizontalCenter: parent.horizontalCenter

            onValueChanged: {
                console.log("Current value changed to : " + value)
            }
        }
        Button {
            anchors.horizontalCenter: parent.horizontalCenter
            text: "Capture value"
            onClicked: {
                console.log("The current value in the spinbox is : " + spinBoxId.value)
            }
        }
    }
}*/


ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("ApplicationWindow Demo")

    menuBar: MenuBar {
        Menu {
            title: qsTr("&File")
            Action {
                id : newActionId
                text: qsTr("&New")
                icon.source: "images/newIcon.png"
                onTriggered: { console.log("Clicked on new file")}
            }

            Action {
                id : openActionId
                text: qsTr("&Open...")
                icon.source: "images/openIcon.png"
                onTriggered: { console.log("Clicked on file Open")}
            }

            Action {
                id : saveActionId
                text: qsTr("&Save")
                icon.source: "images/saveIcon.png"
                onTriggered: { console.log("Clicked on save file")}
            }

            Action {
                id : saveAsActionId
                text: qsTr("&Save &as...")
                icon.source: "images/saveAsIcon.png"
                onTriggered: { console.log("Clicked on save as file")}
            }

            MenuSeparator{}
            Action {
                id : quitActionId
                text: qsTr("&Quit")
                icon.source: "images/Quit.png"
                onTriggered: Qt.quit()
            }
        }

        Menu {
            title: qsTr("&Edit")
            Action { id : cutMenuid; icon.source: "images/editIcon.png"; text: qsTr("Cut") }

            Action {
                text: qsTr("Copy")
                icon.source: "images/copyIcon.png"
            }
            Action { text: qsTr("Paste"); icon.source: "images/pasteIcon.png" }
            MenuSeparator{ }
            Action { text: qsTr("Undo"); icon.source: "images/undoIcon.png" }
            Action { text: qsTr("Redo"); icon.source: "images/redoIcon.png" }
        }

        Menu {
            title: qsTr("&Help")
            Action {
                text: qsTr("&About")
                icon.source: "images/helpIcon.png"
            }
        }
    }

    header: ToolBar {
        Row {
            anchors.fill: parent
            ToolButton {
                action: newActionId
            }

            ToolButton {
                action: saveActionId
            }

            ToolButton {
                action: saveAsActionId
            }

            ToolButton {
                action: quitActionId
            }
        }
    }

    footer: TabBar {
        id : mTabBar
        width: parent.width

        TabButton {
            text: qsTr("Page1")
            onClicked: {
                mStackId.pop()
                mStackId.push("qrc:/Page1.qml")
                console.log("Number of items : " + mStackId.depth)
            }
        }

        TabButton {
            text: qsTr("Page2")
            onClicked: {
                mStackId.pop()
                mStackId.push("qrc:/Page2.qml")
                console.log("Number of items : " + mStackId.depth)
            }
        }

        TabButton {
            text: qsTr("Page3")
            onClicked: {
                mStackId.pop()
                mStackId.push("qrc:/Page3.qml")
                console.log("Number of items : " + mStackId.depth)
            }
        }
    }

    StackView {
        id : mStackId
        anchors.fill: parent
        initialItem: Page1 {

        }
    }
}
