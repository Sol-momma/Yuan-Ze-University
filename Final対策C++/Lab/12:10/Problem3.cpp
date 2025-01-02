#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int main(){
    vevtor<int> vec1={1,2,3,4,5}
    vevtor<int> vec2={3,4,5,6,7}
    unordered_set<int> set(vec1.begin(),set.end());

    cout << endl;

    bool first =true;
    for(int num:vec2){
        if(set1.count(num)){
            if(!first)cout << ",";
            cout << num;
            first =false;
        }
    }

    cout << "}" << endl;

    return 0;


