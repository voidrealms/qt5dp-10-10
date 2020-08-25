#ifndef SURGEN_H
#define SURGEN_H

#include <QObject>
#include <QDebug>
#include "../interfaces/iWorker.h"

class Surgen : public QObject, public iWorker
{
    Q_OBJECT
public:
    explicit Surgen(QObject *parent = nullptr);

signals:


    // iWorker interface
public:
    void work() override;
};

#endif // SURGEN_H
