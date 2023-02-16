#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "clista.h"

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

Clista* neurona = new Clista;

void MainWindow::on_pushButton_clicked()
{
    int ID = 0;
    float Volt = 0;
    int x = 0;
    int y = 0;
    int r = 0;
    int v = 0;
    int a = 0;

    QString id = ui->datoN->text();
     ID = id.toInt();
     QString voltaje = ui->datoN_2->text();
     Volt = voltaje.toFloat();
     QString pos_X = ui->datoN_3->text();
     x = pos_X.toInt();
     QString pos_Y = ui->datoN_4->text();
     y = pos_Y.toInt();
     QString rojo = ui->datoN_5->text();
     r = rojo.toInt();
     QString verde = ui->datoN_6->text();
     v = verde.toInt();
     QString azul = ui->datoN_7->text();
     a = azul.toInt();

     neurona->InsertarInicio(ID,Volt,x,y,r,v,a);


}


void MainWindow::on_pushButton_7_clicked()
{


    ui->TextEdit->insertPlainText(QString::number(neurona->setID()));
     ui->TextEdit->insertPlainText(QString::number(neurona->setV()));
      ui->TextEdit->insertPlainText(QString::number(neurona->setX()));
       ui->TextEdit->insertPlainText(QString::number(neurona->setY()));
        ui->TextEdit->insertPlainText(QString::number(neurona->setR()));
         ui->TextEdit->insertPlainText(QString::number(neurona->setG()));
          ui->TextEdit->insertPlainText(QString::number(neurona->setB()));

    //ui->TextEdit->insertPlainText(neurona->Set());

}


void MainWindow::on_pushButton_2_clicked()
{
    int ID = 0;
    float Volt = 0;
    int x = 0;
    int y = 0;
    int r = 0;
    int v = 0;
    int a = 0;

    QString id = ui->datoN->text();
     ID = id.toInt();
     QString voltaje = ui->datoN_2->text();
     Volt = voltaje.toFloat();
     QString pos_X = ui->datoN_3->text();
     x = pos_X.toInt();
     QString pos_Y = ui->datoN_4->text();
     y = pos_Y.toInt();
     QString rojo = ui->datoN_5->text();
     r = rojo.toInt();
     QString verde = ui->datoN_6->text();
     v = verde.toInt();
     QString azul = ui->datoN_7->text();
     a = azul.toInt();

     neurona->InsertarFinal(ID,Volt,x,y,r,v,a);


}

