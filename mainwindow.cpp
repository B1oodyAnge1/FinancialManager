#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "operationinfo.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->stackedWidget->setCurrentIndex(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ManualInput_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_lineEditSum_editingFinished()
{

}

