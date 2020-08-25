#ifndef CONSTRUCTION_H
#define CONSTRUCTION_H

#include <QObject>
#include <QDebug>
#include "../interfaces/iWorker.h"

class Construction : public QObject, public iWorker
{
    Q_OBJECT
public:
    explicit Construction(QObject *parent = nullptr);

signals:


    // iWorker interface
public:
    void work() override;
};

#endif // CONSTRUCTION_H
