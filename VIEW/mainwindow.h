#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>




#include <iostream>

using namespace std;


#include "PRESENTER/iactionlistener.h"
#include "imainview.h"
#include "PRESENTER/mainpresenter.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow, IMainView
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    virtual void setRegisterActionListener(IActionListener* listener);
    virtual void setNewUserRegisteredActionListener(IActionListener* listener);

    virtual void setName(string name);
    virtual string getName();

    virtual void setCPF(string cpf);
    virtual string getCPF();

    virtual void newUserAdded(string name, string cpf);

private slots:
    void on_pushButtonRegister_clicked();

private:
    Ui::MainWindow *ui;

    IActionListener* registerActionListener;
    IActionListener* newUserRegisteredActionListener;

    MainPresenter* mainPresenter;
    MainModel* mainModel;
};

#endif // MAINWINDOW_H
