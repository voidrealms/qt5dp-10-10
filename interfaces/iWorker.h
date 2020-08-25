#ifndef IWORKER_H
#define IWORKER_H

class iWorker
{
public:
    virtual ~iWorker() {} //this will make people mad
    virtual void work() = 0;
};

#endif // IWORKER_H
