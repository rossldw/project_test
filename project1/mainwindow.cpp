#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug()<<"0000000000000000000000000000000000000000000000000000000000";
    qDebug()<<"022222222222222222222222222222222222222222";
}

MainWindow::~MainWindow()
{
    delete ui;
}
