#include "A.h"
#include "B.h"
#include "C.h"
#include "X.cc"
#include "Y.cc"
#include <stdio.h>

int main() {
    X x;
    Y y;
    A a;
    B b, b2;
    C c;

    c = y.foo(c);
    
    printf("Compilado con éxito\n");
    return 0;
}
