#ifndef SUDOKU_H
#define SUDOKU_H

#include <QObject>
#include <QVector>

class Sudoku : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QVector<QVector<int>> board READ board WRITE setBoard NOTIFY boardChanged)

public:
    explicit Sudoku(QObject *parent = nullptr);

    QVector<QVector<int>> board() const;
    void setBoard(const QVector<QVector<int>> &board);

signals:
    void boardChanged();

private:
    QVector<QVector<int>> m_board;
};

#endif // SUDOKU_H
