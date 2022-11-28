#include "A.h"
#include "B.h"
#include "C.h"
#include "X.cc"
#include "Y.cc"

int main() {
    X x;
    Y y;
    A a;
    B b, b2;
    C c;

    b2 = y.foo(c);
    
    return 0;
}
