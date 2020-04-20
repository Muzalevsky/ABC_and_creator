#ifndef CHILDS_H
#define CHILDS_H

#include "baseabstract.h"

class ChildA : public BaseAbstract
{
public:
    ChildA() {}
    ~ChildA() {
        std::cout << "ChildA: bye" << std::endl;
    }

    void do_smth() {
        std::cout << "hey, it'a ChildA" << std::endl;
    }
};

class ChildB : public BaseAbstract
{
public:
    ChildB() {}
    ~ChildB() {
        std::cout << "ChildB: bye" << std::endl;
    }

    void do_smth() {
        std::cout << "hey, it'a ChildB" << std::endl;
    }
};

#endif // CHILDS_H
