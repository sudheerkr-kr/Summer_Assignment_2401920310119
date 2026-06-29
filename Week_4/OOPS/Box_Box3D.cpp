#include <iostream>
using namespace std;

class Box {
protected:
    double length, breadth;

public:
    Box(double l, double b) {
        length = l;
        breadth = b;
    }

    double area() {
        return length * breadth;
    }
};

class Box3D : public Box {
private:
    double height;

public:
    Box3D(double l, double b, double h) : Box(l, b) {
        height = h;
    }

    double volume() {
        return length * breadth * height;
    }
};

int main() {

    Box3D obj(10, 5, 2);

    cout << "Area = " << obj.area() << endl;
    cout << "Volume = " << obj.volume() << endl;

    return 0;
}
