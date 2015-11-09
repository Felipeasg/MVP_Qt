#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    mainModel = new MainModel();
    mainPresenter = new MainPresenter(this);
    mainPresenter->setModel(mainModel);
}

MainWindow::~MainWindow()
{
    delete ui;
}

/* Setting Action listeners */
void MainWindow::setRegisterActionListener(IActionListener *listener)
{
    this->registerActionListener = listener;
}

void MainWindow::setNewUserRegisteredActionListener(IActionListener *listener)
{
    this->newUserRegisteredActionListener = listener;
}

/* Interface methods, getter and setter */
void MainWindow::setName(string name)
{
    ui->lineEditName->setText(QString::fromLatin1(name.c_str()));
}

string MainWindow::getName()
{
    return ui->lineEditName->text().toStdString();
}

void MainWindow::setCPF(string cpf)
{
    ui->lineEditCPF->setText(QString::fromLatin1(cpf.c_str()));
}

string MainWindow::getCPF()
{
    return ui->lineEditCPF->text().toStdString();
}

void MainWindow::newUserAdded(string name, string cpf)
{
    QMessageBox::information(NULL, "User Added", QString::fromLatin1(name.c_str()) + "\n" + QString::fromLatin1(cpf.c_str()));
}

/* Interface events */
void MainWindow::on_pushButtonRegister_clicked()
{
    registerActionListener->execute();
    newUserRegisteredActionListener->execute();
}
