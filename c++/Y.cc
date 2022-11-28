// simple class X
#ifndef Y_CC
#define Y_CC

#include "A.h"
#include "B.h"
#include "C.h"
#include "X.cc"

class Y : public X{

public:
    C foo(C b) {
        // al parecer c++ no acepta la covarianza con retorno
        C c2;
        return c2;
    }
};

#endif