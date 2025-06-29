//
// Created by Carlos on 28/6/2025.
//

// You may need to build the project (run Qt uic code generator) to get "ui_mainWindow.h" resolved

#include "mainwindow.h"
#include "ui_mainWindow.h"


mainWindow::mainWindow(QWidget *parent) :
    QMainWindow(parent), ui(new Ui::mainWindow) {
    ui->setupUi(this);
}

mainWindow::~mainWindow() {
    delete ui;
}
