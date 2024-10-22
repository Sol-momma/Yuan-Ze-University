// Write a C++ program that defines a class Employee with attributes for name, id, and department. Create
// multiple Employee objects and display their details along with the total number of employees created.

#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int id;
    string department;
    static int employeeCount;  // 従業員の総数を記録

public:
    // コンストラクタ
    Employee(string n, int i, string d) : name(n), id(i), department(d) {
        employeeCount++;
    }

    // 従業員情報を表示
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Department: " << department << endl;
    }

    // 総従業員数を取得
    static int getEmployeeCount() {
        return employeeCount;
    }
};

// 静的メンバ変数の初期化
int Employee::employeeCount = 0;

int main() {
    Employee emp1("Alice", 101, "HR");
    Employee emp2("Bob", 102, "Engineering");

    emp1.displayInfo();
    emp2.displayInfo();

    cout << "Total Employees: " << Employee::getEmployeeCount() << endl;

    return 0;
}
