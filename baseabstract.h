#ifndef BASEABSTRACT_H
#define BASEABSTRACT_H

#include <iostream>

class BaseAbstract
{
public:
    BaseAbstract() {
        std::cout << "baseAbstract is here!" << std::endl;
    }

    virtual ~BaseAbstract() {
        std::cout << "BaseAbstract: bye!" << std::endl;
    }

    virtual void do_smth() = 0;
};

class Creator
{
public:
    Creator() {}
    BaseAbstract* createObject(int type);
};

#endif // BASEABSTRACT_H
