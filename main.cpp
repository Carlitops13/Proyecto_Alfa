#include <QApplication>
#include <QPushButton>
#include <iomanip>
#include <iostream>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    QPushButton button("Hello world!", nullptr);
    button.resize(200, 100);
    button.move(50, 50);


    button.show();
    return QApplication::exec();
}