import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15

ApplicationWindow {
    visible: true
    width: 400
    height: 400
    title: "Sudoku Game"
    color: "red"

    GridLayout {
        columns: 9
        rows: 9
        anchors.centerIn: parent
        Repeater {
            model: 81
            Rectangle {
                width: 40
                height: 40
                border.color: "black"
                color: "white"

                TextInput {
                    anchors.fill: parent
                    text: sudoku.board[Math.floor(index / 9)][index % 9]
                    inputMethodHints: Qt.ImhDigitsOnly
                    onTextChanged: {
                        let value = parseInt(text);
                        sudoku.board[Math.floor(index / 9)][index % 9] = isNaN(value) ? 0 : value;
                    }
                }
            }
        }
    }
}
