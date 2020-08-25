#include "office.h"

Office::Office(QObject *parent) : QObject(parent)
{

}

void Office::work()
{
    qInfo() << this  << "Create spreadsheets and documents";
}

