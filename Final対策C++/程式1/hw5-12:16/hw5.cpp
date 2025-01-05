#include <iostream>
#include <string>
//#include <cmath>

using namespace std;

long long power (long long num)
{
    return num * num;
}


long long recursion(long long c, long long mod, long long i)
{
    if (i == 0){
        return mod;
    }

    return power(recursion(c, mod, i - 1)) % c;
}

int main()
{
    long long a;
    long long b;
    long long c;

    while (cin >> a && a != -1){
        cin >> b >> c;

        string binaly = "";

        while(b != 0){
            if (b % 2 == 0){
                binaly.push_back('0');
            }
            else{
                binaly.push_back('1');
            }
            b /= 2;

        }

        long long mod = a % c;
        long long len = binaly.length();
        long long multi = 1;

        int temp;
        for (long long i = 0; i < len; i++){
            if (binaly[i] != '0'){
                temp = recursion(c, mod, i);
                multi *= temp;
                multi %= c;
            }
        }

        //cout << multi % c << endl;

        cout << multi << endl;

    }


}