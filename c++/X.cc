// simple class X
#ifndef X_CC
#define X_CC

#include "A.h"
#include "B.h"
#include "C.h"

class X {
    public:
    virtual B foo(B b){
        return b;
    }

};

#endif