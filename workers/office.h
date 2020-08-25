#ifndef OFFICE_H
#define OFFICE_H

#include <QObject>
#include <QDebug>
#include "../interfaces/iWorker.h"

class Office : public QObject, public iWorker
{
    Q_OBJECT
public:
    explicit Office(QObject *parent = nullptr);

signals:


    // iWorker interface
public:
    void work() override;
};

#endif // OFFICE_H
