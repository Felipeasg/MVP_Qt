#ifndef MAINPRESENTER_H
#define MAINPRESENTER_H

#include <QObject>

#include "iactionlistener.h"
#include "VIEW/imainview.h"
#include "MODEL/mainmodel.h"
#include "mainactionlistener.h"



class MainPresenter : public QObject
{
    Q_OBJECT
public:
    explicit MainPresenter(IMainView* view);

    IMainView *view() const;
    void setView(IMainView *view);

    MainModel *model() const;
    void setModel(MainModel *model);

signals:

public slots:

private:
    IMainView *mView;
    MainModel *mModel;

};

#endif // MAINPRESENTER_H
