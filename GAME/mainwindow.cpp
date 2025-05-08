#include "mainwindow.h"
#include <QRandomGenerator>
#include "./ui_mainwindow.h"
#include <ctime>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)


{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

int currentLevel, secretNumber;

void generateNewNumber() {
    int maxRange;
    switch (currentLevel) {
    case 1: maxRange = 10; break;
    case 2: maxRange = 100; break;
    case 3: maxRange = 1000; break;
    default: maxRange = 100;
    }
    secretNumber = QRandomGenerator::global()->bounded(1, maxRange + 1);
}


void MainWindow::on_radioButton_1_clicked() {
    currentLevel = 1;
    generateNewNumber();
}

void MainWindow::on_radioButton_2_clicked() {
    currentLevel = 2;
    generateNewNumber();
}

void MainWindow::on_radioButton_3_clicked() {
    currentLevel = 3;
    generateNewNumber();
}

void MainWindow::on_pushButton_try_clicked()
{

    QString text = ui->lineEdit_guess->text();
    bool isConvertOk = false;
    int value = text.toInt(&isConvertOk);

    if (!isConvertOk)
    {
        ui->label_result->setText("Ошибка ввода!");

    }
    else if(secretNumber == value)
    {
        ui->label_result->setText("Победа");
        generateNewNumber();
    }
    else
    {
        ui->label_result->setText("Неправильно");
    }
}


void MainWindow::on_pushButton_end_clicked()
{
    ui->label_result->setText("Попытка закончена, выберите сложность для новой попытки");
}



