#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int test_cases;
    cin >> test_cases;

    while (test_cases--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        // Read the array values
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        // Find the maximum index i such that a[i] > a[i+1]
        int max_i = -1;
        for (int i = 0; i < n - 1; ++i)
        {
            if (a[i] > a[i + 1])
            {
                max_i = i;
            }
        }

        // Output the result for this test case
        cout << max_i << endl;
    }

    return 0;
}
