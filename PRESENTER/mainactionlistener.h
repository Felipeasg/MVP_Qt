#ifndef MAINACTIONLISTENER_H
#define MAINACTIONLISTENER_H

#include "iactionlistener.h"
#include "mainactionlistener.h"
#include "mainpresenter.h"

class MainPresenter;

class RegisterActionListener : public IActionListener
{
public:
    RegisterActionListener(MainPresenter *p);

    virtual void execute();

    virtual void execute(void* dto);

private:
    MainPresenter* presenter;

};


class NewUserRegisterActionedListener : public IActionListener
{
public:
    NewUserRegisterActionedListener(MainPresenter *p);

    virtual void execute();

    virtual void execute(void* dto);

private:
    MainPresenter* presenter;

};

#endif // MAINACTIONLISTENER_H
