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
    virtual void setRegisterActionListener(IActionListener* listener) const = 0;
    virtual void setNewUserRegisteredActionListener(IActionListener* listener) const = 0;

    virtual void setName(string name) const = 0;
    virtual string getName() const = 0;

    virtual void setCPF(string cpf) const = 0;
    virtual string getCPF() const = 0;

    virtual void newUserAdded(string name, string cpf) const = 0;
};

#endif // IMAINVIEW_H
