import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.5

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("PageIndicator and SwipeView Demo")


    SwipeView {
        id : swipeViewId
        anchors.fill: parent
        currentIndex:  pageIndicatorId.currentIndex

        Image {
            id : image1
            source: "https://www.shutterstock.com/ko/image-illustration/forest-isolated-image-useful-banners-nd-1429898363.png"
        }
        Image {
            id : image2
            source: "https://www.shutterstock.com/ko/image-illustration/3d-fire-ball-candil-stock-image-1425215720"
        }
        Image {
            id : image3
            source: "https://www.shutterstock.com/ko/image-illustration/3d-water-splash-image-1337171558"
        }
    }

    PageIndicator{
        id: pageIndicatorId
        anchors.bottom: parent.bottom
        anchors.horizontalCenter: parent.horizontalCenter

        //Page indicator specific properties
        currentIndex: swipeViewId.currentIndex
        interactive: true
        count : swipeViewId.count
    }
}
