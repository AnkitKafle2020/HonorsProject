#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<vector>
#include <QMainWindow>
#include<QSql>
#include <QSqlQuery>
#include<QSqlError>
#include <QMessageBox>
#include"databaseconnection.h"
#include "createAccount.h"
#include "teacherclass.h"
#include "studentchoice.h"



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow, public databaseConnection
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_stuLoginPushButton_clicked();

    void on_actionclose_triggered();

    void on_teacherLoginPushButton_clicked();

    void on_createNewAccountPushButton_clicked();


private:
    Ui::MainWindow *ui;
private:
    createAccount *accountCreateUI;
    teacherClass *teachUI;
    studentChoice *studentChoiceUI;
public:
    void studentLogin();
    void teacherLogin();
};
#endif // MAINWINDOW_H
