// Write a C++ program that demonstrates the use of the three access specifiers: public, protected, and
// private.

#include <iostream>
using namespace std;

class Example {
public:
    int publicVar;  // 公開メンバ変数

protected:
    int protectedVar;  // 保護されたメンバ変数

private:
    int privateVar;  // 非公開メンバ変数

public:
    Example() : publicVar(0), protectedVar(0), privateVar(0) {}

    // 公開関数で非公開メンバにアクセス
    void setPrivateVar(int val) {
        privateVar = val;
    }

    int getPrivateVar() {
        return privateVar;
    }
};

int main() {
    Example example;
    example.publicVar = 5;  // 公開メンバにアクセス可能
    example.setPrivateVar(10);  // 非公開メンバには直接アクセス不可、メソッド経由でアクセス

    cout << "Public Variable: " << example.publicVar << endl;
    cout << "Private Variable (via method): " << example.getPrivateVar() << endl;

    return 0;
}
