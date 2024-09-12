#include<iostream>
using namespace std;

class triangle{
private:
    double height, base;
public:
    void setHeight(double height){
        this->height=height;
    }
    void setBase(double base){
        this->base=base;
    }
    double getHeight(){return height;}
    double getBase(){return base;}
};

class rectangle{
private:
    double length,width;
public:
    void setLength(double length){
        this->length=length;
    }
    void setWidth(double width){
        this->width=width;
    }
    double getLength(){return length;}
    double getWidth(){return width;}
};

double getArea(triangle &tr){
    double area=0.5 * tr.getHeight() * tr.getBase();
    return area;
}

double getArea(rectangle &ret){
    double area=ret.getLength() * ret.getWidth();
    return area;
}



int main(){
    triangle tri;  
    rectangle rec; 

    tri.setBase(12);
    tri.setHeight(30);

    rec.setLength(50);
    rec.setWidth(25);

    cout<<"Area of triangle is : "<<getArea(tri)<<endl;
    cout<<"Area of rectangle is : "<<getArea(rec)<<endl;

    return 0;
}