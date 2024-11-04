int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i=0;i<n;++i){
            cin >> a[n];
        }

        int result = -1;

        for (int i=0;i<n-1;++i){
            if (a[n]>a[n+1]){
                result = i;
            }
        }
        cout << result << endl;
    }
    return 0;
}