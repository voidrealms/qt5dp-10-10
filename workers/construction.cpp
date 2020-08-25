#include "construction.h"

Construction::Construction(QObject *parent) : QObject(parent)
{

}


void Construction::work()
{
    qInfo() << this << "Mix concrete";
    qInfo() << this << "Pour concrete";
    qInfo() << this << "Smooth concrete";
    qInfo() << this << "Fix the concrete after the cat walked on it";
    qInfo() << this << "Cleanup";
}
