// simple class X
#ifndef Y_CC
#define Y_CC

#include "A.h"
#include "B.h"
#include "C.h"
#include "X.cc"

class Y : public X{

public:
    B foo(B b)
    {
        return b;
    }
};

#endif