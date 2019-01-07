#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnNo1_clicked()
{
    this->ui->renderArea->setShape(RenderArea::Shape1);
    this->ui->renderArea->repaint();
}

void MainWindow::on_btnNo2_clicked()
{
    this->ui->renderArea->setShape(RenderArea::Shape2);
    this->ui->renderArea->repaint();
}

void MainWindow::on_btnNo3_clicked()
{
    this->ui->renderArea->setShape(RenderArea::Shape3);
    this->ui->renderArea->repaint();
}

void MainWindow::on_btnNo4_clicked()
{
    this->ui->renderArea->setShape(RenderArea::Shape4);
    this->ui->renderArea->repaint();
}
