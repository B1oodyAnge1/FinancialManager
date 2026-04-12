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

    createDatabase("myDb");
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


void MainWindow::createDatabase(QString nameDB){
     QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    nameDB+=".db";

     // Проверяем, существует ли файл
     if (QFile::exists(nameDB)) {
         qDebug() << "Файл базы данных уже существует, подключаемся к нему";
     } else {
         qDebug() << "Файл базы данных не найден, будет создан новый";
     }


    db.setDatabaseName(nameDB);

    if (!db.open()) {
        qDebug() << "Ошибка создания/открытия БД:" << db.lastError().text();
        return;
    }

     qDebug() << "Бд успешно создано/открыто";
    QSqlQuery query;



    if(!query.exec(R"(
        CREATE TABLE IF NOT EXISTS users(
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        Name TEXT  NOT NULL,
        Password TEXT NOT NULL
        )
    )")){
        qDebug()<< "Ошибка запроса: " << query.lastError().text();
    }


    if(!query.exec(R"(
        CREATE TABLE IF NOT EXISTS icons(
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        name TEXT NOT NULL,
        img_url TEXT NOT NULL
        )
    )")){
        qDebug()<< "Ошибка запроса: " << query.lastError().text();
    }


    if(!query.exec(R"(
        CREATE TABLE IF NOT EXISTS types(
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        type TEXT NOT NULL,
        icon_id INTEGER NOT NULL,
        FOREIGN KEY (icon_id) REFERENCES icons(id)
        )
    )")){
        qDebug()<< "Ошибка запроса: " << query.lastError().text();
    }


    if(!query.exec(R"(
        CREATE TABLE IF NOT EXISTS currencies(
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        type TEXT NOT NULL,
        symbol text NOT NULL
        )
    )")){
        qDebug()<< "Ошибка запроса: " << query.lastError().text();
    }


    if(!query.exec(R"(
        CREATE TABLE IF NOT EXISTS main(
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        user_id INTEGER NOT NULL,
        sum INTEGER NOT NULL,
        type_id INTEGER NOT NULL,
        dateOperation TEXT NOT NULL,
        timeOperation TEXT NOT NULL,
        createTimeRecords TEXT NOT NULL,
        currency_id INTEGER NOT NULL,
        FOREIGN KEY (user_id) REFERENCES users(id),
        FOREIGN KEY (type_id) REFERENCES types(id),
        FOREIGN KEY (currency_id) REFERENCES currencies(id)
        )
    )")){
        qDebug()<< "Ошибка запроса: " << query.lastError().text();
    }


    if(!query.exec(R"(
        SELECT name FROM sqlite_master WHERE type='table'
    )")){
        qDebug()<< "Ошибка запроса: " << query.lastError().text();
    }

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

