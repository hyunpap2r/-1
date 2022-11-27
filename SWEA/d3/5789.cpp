#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int tc;
    int t; cin >> t;

    for (int tc = 1; tc <= t; tc++)
    {
        int n,q; cin >> n >> q;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            int zero = 0;
            arr.push_back(zero);
        }

       for (int i = 1; i <= q; i++)
       {
            int L, R; cin >> L >> R;
            
            for (int j = L; j <= R; j++)
            {
                arr[j-1] = i;
            }
       }

        cout << "#" << tc << " ";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
        arr.clear();
    }
    return 0;
}