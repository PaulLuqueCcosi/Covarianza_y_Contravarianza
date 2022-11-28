package jav;

public class App {

    public static void main(String[] args) {

        X testx = new X();
        A testA = new A() {
        };

        B testB = new B() {
        };

        C testC = new C() {
        };

        Y testY = new Y();

        B retornoC = testY.foo(testC);

    }

}
