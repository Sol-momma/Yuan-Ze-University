// Lab assignment: Create a C++ program to perform operations on two geometric shapes:
// Circle and Rectangle. The program should calculate the area and perimeter of the shapes
// using classes and objects.

#include<iostream>
using namespace std;

const double PI = 3.1415;

    class Circle {
    private: 
        float radius;
    
    public:
        Circle(float r): radius(r){}
            float calulateArea() {
                return PI*radius*radius;
            }
            float calculatePerimeter(){
                return 2*PI*radius;
            }
    };

    class Retangle{
    private:
        float length;
        float width;

    public:
        Retangle(float l,float w):length(l),width(w){}
            float caluculateArea(){
                return length*width;
            }
            float caluculatePerimeter(){
                return 2*(length+width);
            }
    };

int main(){
    float radius;
    cin >> radius;

    Circle circle(radius);

    cout << circle.calulateArea() << endl;
    cout << circle.calculatePerimeter() << endl;

    float length,width;
    cin>> length >> width;

    Retangle retangle(length,width);

    cout << retangle.caluculateArea() << endl;
    cout << retangle.caluculatePerimeter() << endl;

    return 0;
}
