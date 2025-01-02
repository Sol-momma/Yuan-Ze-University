#include<iostream>
using namespace std;

int main() {
    int n=5;

	for(int i=5; i<=n ; ++i){
        cout<< string(n-i,"")+string(2*i-1,"*") << endl;
	}
    for(int i=5; i>=n; --i){
        cout<< string(n-i,"")+string(2*i-1,"*") << endl;
    }
    return 0;
}
