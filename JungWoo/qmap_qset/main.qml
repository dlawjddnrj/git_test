import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.5
import connect 1.0

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("QMap, QSet Test")

    signal qmlSignal(var test)

    property int property_int: a
}
