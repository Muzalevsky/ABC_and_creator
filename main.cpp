#include "baseabstract.h"

#include <vector>

int main(int argc, char *argv[])
{
    Creator creator;

    std::vector<BaseAbstract*> objects;

    objects.push_back( creator.createObject(1) );
    objects.push_back( creator.createObject(2) );

    for ( size_t i = 0; i < objects.size(); i++ ) {
        objects[i]->do_smth();
        delete objects[i];
    }

    return EXIT_SUCCESS;

#if 0
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
#endif
}
