#include <iostream>
#include <vector>

using namespace std;

// Function to calculate (a^b) mod c using recursive doubling
long long power_mod(long long a, long long b, long long c) {
    // Handle base case
    if (b == 0) return 1;
    
    // Initialize result
    long long result = 1;
    
    // First compute a mod c to handle large values of a
    a = a % c;
    
    // Process while b > 0
    while (b > 0) {
        // If current bit is 1, multiply result with current power of a
        if (b & 1) {
            result = (result * a) % c;
        }
        
        // Square a for next bit
        a = (a * a) % c;
        
        // Move to next bit
        b >>= 1;
    }
    
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    while (true) {
        long long a, b, c;
        cin >> a;
        
        // Check for end of input
        if (a == -1) break;
        
        cin >> b >> c;
        
        // Calculate and output result
        cout << power_mod(a, b, c) << endl;
    }
    
    return 0;
}