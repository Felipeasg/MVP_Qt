#include "mainmodel.h"

MainModel::MainModel()
{

}
QString MainModel::getName() const
{
    return name;
}

void MainModel::setName(const QString &value)
{
    name = value;
}
QString MainModel::getCpf() const
{
    return cpf;
}

void MainModel::setCpf(const QString &value)
{
    cpf = value;
}



