#include "sudoku.h"

Sudoku::Sudoku(QObject *parent) : QObject(parent)
{
    // Initialize the board with a partially solved Sudoku puzzle
    m_board = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };
}

QVector<QVector<int>> Sudoku::board() const
{
    return m_board;
}

void Sudoku::setBoard(const QVector<QVector<int>> &board)
{
    if (m_board != board) {
        m_board = board;
        emit boardChanged();
    }
}
