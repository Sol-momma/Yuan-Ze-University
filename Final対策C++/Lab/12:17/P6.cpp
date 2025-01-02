#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class DataProcessor {
private:
    vector<int> data;

public:
    void addData(int n) {
        data.push_back(n);
        cout << n << " added to the vector" << endl;
    }

    void sortData() {
        if(data.empty()) {
            cout << "Vector is empty. Nothing to sort." << endl;
            return;
        }

        sort(data.begin(), data.end());
        cout << "\nVector sorted in ascending order." << endl;
    }

    bool searchData(int n) {
        if(data.empty()) {
            cout << "Vector is empty. Nothing to search." << endl;
            return false;
        }

        // Perform linear search
        for(int i = 0; i < data.size(); i++) {
            if(data[i] == n) {
                cout << n << " found at position " << i << endl;
                return true;
            }
        }

        cout << n << " not found in the vector" << endl;
        return false;
    }

    void displayData() {
        if(data.empty()) {
            cout << "Vector is empty" << endl;
            return;
        }

        cout << "Elements in vector: ";
        for(int element : data) {
            cout << element << " ";
        }
        cout << endl;
    }
};

int main() {
    DataProcessor dp;

    // Add 10 integers
    cout << "Adding 10 integers to the vector:" << endl;
    dp.addData(64);
    dp.addData(34);
    dp.addData(25);
    dp.addData(12);
    dp.addData(22);
    dp.addData(11);
    dp.addData(90);
    dp.addData(87);
    dp.addData(45);
    dp.addData(73);

    // Display original vector
    cout << "\nOriginal ";
    dp.displayData();

    // Sort and display
    dp.sortData();
    cout << "Sorted ";
    dp.displayData();

    // Search for numbers
    cout << "\nSearching for elements:" << endl;
    dp.searchData(87);  // Should be found
    dp.searchData(100); // Should not be found

    return 0;
}
