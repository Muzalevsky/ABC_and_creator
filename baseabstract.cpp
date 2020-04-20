#include "baseabstract.h"
#include "childs.h"

/*
 * This is dangerous because memory allocation is hidden inside.
 * Should think about protection
 */
BaseAbstract* Creator::createObject(int type)
{
    BaseAbstract *obj;
    switch ( type ) {
        case 1:
            obj = new ChildA();
            break;
        case 2:
            obj = new ChildB();
            break;
        default:
            break;
    }

    return obj;
}
