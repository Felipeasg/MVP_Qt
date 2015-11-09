#include "mainactionlistener.h"

#include <QDebug>

RegisterActionListener::RegisterActionListener(MainPresenter *p)
{
    presenter = p;
}

void RegisterActionListener::execute()
{
    presenter->model()->setName(QString::fromLatin1(presenter->view()->getName().c_str()));
    presenter->model()->setCpf(QString::fromLatin1(presenter->view()->getCPF().c_str()));

    qDebug() << "Name setted: " << presenter->model()->getName();
    qDebug() << "CPF setted: " << presenter->model()->getCpf();
}

void RegisterActionListener::execute(void *dto)
{
    Q_UNUSED(dto);
}


NewUserRegisterActionedListener::NewUserRegisterActionedListener(MainPresenter *p)
{
    presenter = p;
}

void NewUserRegisterActionedListener::execute()
{
    presenter->view()->newUserAdded(presenter->model()->getName().toStdString(), presenter->model()->getCpf().toStdString());

    qDebug() << "New user added " << presenter->model()->getName() << " " << presenter->model()->getCpf();
}

void NewUserRegisterActionedListener::execute(void *dto)
{
    Q_UNUSED(dto);
}
