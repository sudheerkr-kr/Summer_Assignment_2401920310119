#include <iostream>
using namespace std;

// Interface
class Test {
public:
    virtual void square(int n) = 0;
};

// Arithmetic class implements Test
class Arithmetic : public Test {
public:
    void square(int n) override {
        cout << "Square = " << n * n << endl;
    }
};

// ToTestInt class
class ToTestInt {
public:
    void run() {
        Arithmetic obj;
        obj.square(5);
    }
};

int main() {
    ToTestInt obj;
    obj.run();

    return 0;
}
