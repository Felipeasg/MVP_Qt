#ifndef IMAINVIEW_H
#define IMAINVIEW_H

#include <QAbstractTableModel>

#include "PRESENTER/iactionlistener.h"

#include <iostream>
using namespace std;

class IMainView
{
public:

    //If you not use = 0 (error: Undefined reference to vtable)
    virtual void setRegisterActionListener(IActionListener* listener) = 0;
    virtual void setNewUserRegisteredActionListener(IActionListener* listener) = 0;

    virtual void setName(string name) = 0;
    virtual string getName() = 0;

    virtual void setCPF(string cpf) = 0;
    virtual string getCPF() = 0;

    virtual void newUserAdded(string name, string cpf) = 0;
};

#endif // IMAINVIEW_H
