#include <iostream>
using namespace std;

class Outer {
public:
    void display() {
        cout << "This is Outer Class" << endl;
    }

    class Inner {
    public:
        void display() {
            cout << "This is Inner Class" << endl;
        }
    };
};

int main() {

    Outer obj1;
    obj1.display();

    Outer::Inner obj2;
    obj2.display();

    return 0;
}
