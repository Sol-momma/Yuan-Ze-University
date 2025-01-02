// Write a C++ program that creates several Book objects and displays their information along with the total
// // number of books using constructor.

#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;

public:
    // コンストラクタ
    Book(string t, string a) : title(t), author(a) {}

    // 本の情報を表示
    void displayInfo() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
    }
};

int main() {
    Book book1("The Great Gatsby", "F. Scott Fitzgerald");
    Book book2("1984", "George Orwell");

    book1.displayInfo();
    book2.displayInfo();

    return 0;
}
