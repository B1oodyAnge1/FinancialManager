#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "operationinfo.h"

#include <QDate>
OperationInfo opInfo;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    initScreens();

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




void MainWindow::initScreens(){
    //Сумма
    ui->lineEditSum->setValidator(new QIntValidator(this));

    //Время
    ui->spinBoxTimeH->setPrefix("часы:  ");
    ui->spinBoxTimeH->setRange(0,23);
    ui->spinBoxTimeM->setPrefix("минуты:  ");
    ui->spinBoxTimeM->setRange(0,59);

    //Дата
    ui->spinBoxDateDay->setPrefix("день:  ");
    ui->spinBoxDateDay->setRange(0,31);
    ui->spinBoxDateMonth->setPrefix("месяц:  ");
    ui->spinBoxDateMonth->setRange(1,12);
    ui->spinBoxDateYear->setPrefix("год:  ");
    ui->spinBoxDateYear->setRange(1900,9999);

    QDate currentDate = QDate::currentDate();
    ui->spinBoxDateDay->setValue(currentDate.day());
    ui->spinBoxDateMonth->setValue(currentDate.month());
    ui->spinBoxDateYear->setValue(currentDate.year());
}

void MainWindow::on_lineEditSum_editingFinished()
{

    opInfo.setSum(ui->lineEditSum->text().toInt());

}

//Получение во сколько часов была выполнена операция
void MainWindow::on_spinBoxTimeH_editingFinished()
{
    opInfo.setTimeH(ui->spinBoxTimeH->text().toShort());
}

//Получение во сколько минут была выполнена операция
void MainWindow::on_spinBoxTimeM_editingFinished()
{
    opInfo.setTimeM(ui->spinBoxTimeM->text().toShort());
}

//Получение дня когда была выполнена операция
void MainWindow::on_spinBoxDateDay_editingFinished()
{
    opInfo.setDateD(ui->spinBoxDateDay->text().toShort());
}

//Получение месяца когда была выполнена операция
void MainWindow::on_spinBoxDateMonth_editingFinished()
{
    opInfo.setDateM(ui->spinBoxDateMonth->text().toShort());
}

//Получение года когда была выполнена операция
void MainWindow::on_spinBoxDateYear_editingFinished()
{
    opInfo.setDateY(ui->spinBoxDateYear->text().toShort());
}

//Получение названия операции
void MainWindow::on_lineEditNameOperation_editingFinished()
{
    opInfo.setNameOperation(ui->lineEditNameOperation->text());
}

