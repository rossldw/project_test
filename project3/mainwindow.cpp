#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug()<<"18888888888888888888888888888888888888888888888888888888888888888888888";
}

MainWindow::~MainWindow()
{
    delete ui;
}
