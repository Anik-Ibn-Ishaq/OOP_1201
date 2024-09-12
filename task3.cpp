#include <iostream>
using namespace std;

class triangle {
private:
    double height, base;
public:
    triangle(double height, double base) {
        this->height = height;
        this->base = base;
    }

    double getHeight() { return height; }
    double getBase() { return base; }
};

class rectangle {
private:
    double length, width;
public:
    rectangle(double length, double width) {
        this->length = length;
        this->width = width;
    }

    double getLength() { return length; }
    double getWidth() { return width; }
};

double getArea(triangle &tr) {
    double area = 0.5 * tr.getHeight() * tr.getBase();
    return area;
}

double getArea(rectangle &ret) {
    double area = ret.getLength() * ret.getWidth();
    return area;
}

int main() {
    triangle tri(30, 12);  
    rectangle rec(50, 25); 

    cout << "Area of triangle is : " << getArea(tri) << endl;
    cout << "Area of rectangle is : " << getArea(rec) << endl;

    return 0;
}
