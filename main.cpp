#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "sudoku.h"
#include <QQmlContext>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    Sudoku sudoku;
    engine.rootContext()->setContextProperty("sudoku", &sudoku);

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
