// Create a class Student with attributes name, marks (for 5 subjects), and a method to calculate and return
// the grade based on average marks. Implement a grading system as:
// • 90-100: A
// • 80-89: B
// • 70-79: C
// • 60-69: D
// • Below 60: F

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    float marks[5];

public:
    // コンストラクタ
    Student(string n, float m[5]) : name(n) {
        for (int i = 0; i < 5; i++) {
            marks[i] = m[i];
        }
    }

    // 平均点を計算する関数
    float calculateAverage() {
        float sum = 0;
        for (int i = 0; i < 5; i++) {
            sum += marks[i];
        }
        return sum / 5;
    }

    // グレードを計算して返す関数
    char getGrade() {
        float average = calculateAverage();
        if (average >= 90) return 'A';
        else if (average >= 80) return 'B';
        else if (average >= 70) return 'C';
        else if (average >= 60) return 'D';
        else return 'F';
    }

    // 生徒情報の表示
    void display() {
        cout << "Name: " << name << endl;
        cout << "Grade: " << getGrade() << endl;
    }
};

int main() {
    float marks[5] = {85, 90, 78, 88, 76};  // サンプルの成績
    Student student("John", marks);  // Studentオブジェクトの生成
    student.display();  // 生徒情報の表示

    return 0;
}


