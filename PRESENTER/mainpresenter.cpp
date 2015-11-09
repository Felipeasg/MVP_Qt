#include "mainpresenter.h"


MainPresenter::MainPresenter(IMainView *view)
{
    this->mView = view;

//    RegisterActionListener registerActionListener;

    this->view()->setRegisterActionListener(new RegisterActionListener(this));
    this->view()->setNewUserRegisteredActionListener(new NewUserRegisterActionedListener(this));

}
IMainView *MainPresenter::view() const
{
    return mView;
}

void MainPresenter::setView(IMainView *view)
{
    mView = view;
}
MainModel *MainPresenter::model() const
{
    return mModel;
}

void MainPresenter::setModel(MainModel *model)
{
    mModel = model;
}



