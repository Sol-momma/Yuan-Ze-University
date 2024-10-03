// Implement a Simple ATM System
// • Requirements:
// o The user starts with an initial balance of $1000.
// o Display a menu of options
// o Check Balance
// o Deposit Money
// o Withdraw Money
// o Exit

#include <iostream>
using namespace std;

int main() {
    // 初期残高
    int balance = 1000;
    int option;
    int amount;

    do {
        // メニュー表示
        cout << "ATM Menu:\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Select an option (1-4): ";
        cin >> option;

        switch(option) {
            case 1:
                // 残高確認
                cout << "Your balance is: $" << balance << endl;
                break;
            case 2:
                // 預け入れ
                cout << "Enter amount to deposit: $";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    cout << "You deposited: $" << amount << endl;
                } else {
                    cout << "Invalid deposit amount!" << endl;
                }
                break;
            case 3:
                // 引き出し
                cout << "Enter amount to withdraw: $";
                cin >> amount;
                if (amount > balance) {
                    cout << "Insufficient balance!" << endl;
                } else if (amount > 0) {
                    balance -= amount;
                    cout << "You withdrew: $" << amount << endl;
                } else {
                    cout << "Invalid withdrawal amount!" << endl;
                }
                break;
            case 4:
                // 終了
                cout << "Thank you for using the ATM. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid option! Please select again." << endl;
        }

        cout << endl; // メニュー再表示のため改行
    } while(option != 4); // optionが4（終了）でない限りループ

    return 0;
}
