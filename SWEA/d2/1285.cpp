#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int tc;
    int t; cin >> t;
    for (int tc  = 1; tc <= t; tc++)
    {
        int n, k; cin >> n >> k;
        int sum = 0;
        int count = 
        vector<int>a(n);
        for (int i = 0; i < n; i++)
        {
            a.push_back(i);
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < n; j++)
            {
                sum = a[i]+ a[j];
                if (sum == k)
                {
                    count
                }
            }
        }
    }

    return 0;
}