#include "A.h"
#include "B.h"
#include "C.h"
#include "X.cc"
#include "Y.cc"

int main() {
    X x;
    B b, b2;

    b2 = x.foo(b);
    
    return 0;
}
