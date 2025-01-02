// Create a class named Rectangle that includes private member variables for length and width. Implement
// methods to set the dimensions, calculate the area, and calculate the perimeter of the rectangle.

#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    // メンバ変数の設定
    void setDimensions(float l, float w) {
        length = l;
        width = w;
    }

    // 面積を計算
    float calculateArea() {
        return length * width;
    }

    // 周囲を計算
    float calculatePerimeter() {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle rect;
    rect.setDimensions(5.0, 3.0);  // 長さと幅を設定

    cout << "Area of Rectangle: " << rect.calculateArea() << endl;
    cout << "Perimeter of Rectangle: " << rect.calculatePerimeter() << endl;

    return 0;
}
