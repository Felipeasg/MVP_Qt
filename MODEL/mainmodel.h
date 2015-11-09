#ifndef MAINMODEL_H
#define MAINMODEL_H

#include <QObject>

#include <QString>

class MainModel : public QObject
{
    Q_OBJECT
public:
    explicit MainModel();

    QString getName() const;
    void setName(const QString &value);

    QString getCpf() const;
    void setCpf(const QString &value);

signals:

public slots:

private:
    QString name;
    QString cpf;
};

#endif // MAINMODEL_H
