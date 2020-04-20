#ifndef BASEABSTRACT_H
#define BASEABSTRACT_H

#include <iostream>

class BaseAbstract
{
public:
    BaseAbstract() {
        std::cout << "baseAbstract is here!" << std::endl;
    }

    /*
     * C++03, 5.3.5.3
     * In the first alternative (delete object), if the static
     * type of the operand is different from its dynamic type,
     * the static type shall be a base class of the operand's
     * dynamic type and the static type shall have a virtual
     * destructor or the behavior is undefined.
     */
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
