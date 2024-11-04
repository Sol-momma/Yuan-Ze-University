#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> a(n);
    for (int  i = 0; i < n; i++)
    {           
        cin >> a[i];
    }

    vector<int> b;

    for(int j=0;j<n/2;++j){
        int gcd_value=__gcd(a[j],a[n-1-j]){
        b.push_back(gcd_value);
        }
    }

    for(int i=0; i<b.size();++i){
        cout << b[i] << " ";
    }

    cout << endl;

    return 0;
    
}