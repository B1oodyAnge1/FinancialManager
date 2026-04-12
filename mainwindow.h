#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QFile>

#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private slots:
    void on_ManualInput_clicked();

    void on_lineEditSum_editingFinished();

    void on_spinBoxTimeH_editingFinished();

    void on_spinBoxTimeM_editingFinished();

    void on_spinBoxDateDay_editingFinished();

    void on_spinBoxDateMonth_editingFinished();

    void on_spinBoxDateYear_editingFinished();

    void on_lineEditNameOperation_editingFinished();

private:
    void createDatabase(QString nameDB);
    void initScreens();
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
//