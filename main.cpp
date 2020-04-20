#include <baseabstract.h>

int main(int argc, char *argv[])
{
    Creator creator;

// Some errors from the abstract class
//    BaseAbstract* obj = new BaseAbstract();
//    obj->do_smth();
//    BaseAbstract obj3;

    BaseAbstract* obj1 = NULL;
    BaseAbstract* obj2 = NULL;
    // Danger! Memory allocation inside
    obj1 = creator.createObject(1);
    obj2 = creator.createObject(2);

    obj1->do_smth();
    obj2->do_smth();

    delete obj1;
    delete obj2;
}
