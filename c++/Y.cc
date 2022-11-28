// simple class X
#ifndef Y_CC
#define Y_CC

#include "A.h"
#include "B.h"
#include "C.h"
#include "X.cc"

class Y : public X{

public:
    A foo(B b) {
        A a2;
        return a2;
    }
};

#endif