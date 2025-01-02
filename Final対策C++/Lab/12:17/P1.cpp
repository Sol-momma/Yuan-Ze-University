#include <iostream>

using namespace std;

class Student {
private:
    int marks[5];

public:
    void setMarks(){
        cout << "Enter 5 Marks:" << endl;
        for(int i=0;i<5;i++){
            cout << "Enter mark" << (i+1) << ": ";
            cin >> marks[i];

             while(marks[i] < 0 || marks[i] > 100) {
                cout << "Invalid mark! Please enter a mark between 0 and 100: ";
                cin >> marks[i];
            }
        }
    }

    double caluclateAverage(){
        int sum=0;
        for(int i=0;i<5;i++){
            sum += marks[i];
        }
        return static_cast<double>(sum)/5
    }

    void displayMarks(){
        cout<< "\nStudent Marks:" << endl;
        for (int i=0;i<5;i++){
            cout << "Mark " << (i+1) << ": " <<marks[i] << endl;
        }
        cout << "Average:" << caluclateAverage() <<endl;
    }
};

int main()
{
    Student student;

    student.setMarks();

    student.displayMarks();

    return 0;
}
