from abc import ABC, abstractmethod

class A(ABC):
    @abstractmethod
    def f_a(self):
        pass
class B(A):
    @abstractmethod
    def f_b(self):
        pass

class C(B):
    @abstractmethod
    def f_c(self):
        print("f_c")

class A_impl(A):
    def f_a(self):
        print("A_impl.f_a")


class B_impl(B):
    def f_b(self):
        print("B_impl.f_b")
    
    def f_a(self):
        print("B_impl.f_a")

class C_impl(C):
    def f_c(self):
        print("C_impl.f_c")

    def f_b(self):
        print("C_impl.f_b")
    
    def f_a(self):
        print("C_impl.f_a")



class X:
    def __init__(self):
        pass

    def foo(self, b):
        b.f_b()
        return b

class Y(X):
    def __init__(self):
        pass
    
    def foo(self, b):                                                                                           
        b.f_a()
        b.f_b()

        c2 = C_impl()
        return c2

if __name__ == "__main__":
    a = A_impl()
    b = B_impl()
    c = C_impl()
    y = Y()

    retorna = y.foo(b)
    print("Nombre de la clase: ", retorna.__class__.__name__)