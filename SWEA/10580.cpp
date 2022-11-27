#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int tc;
    int t; cin >> t;

    vector<int> a;
    vector<int> b;
    for (int tc = 1; tc <= t; tc++)
    {
        int n; cin >> n;
        for (int i = 0; i < n; i++)
        {
            int temp; cin >> temp;
            a.push_back(temp);
            cin >> temp;
            b.push_back(temp);
        }

        int cnt = 0;
        for (int i = 0; i < n-1; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i] < a[i+1] && b[i] > b[j])
                {
                    cnt++;
                }
            }
        }
        for (int i = n-1; i <= 0; i--)
        {
            if(a[i] > a[i-1] && b[i-1] <b[i-2])
            {
                cnt++;
            }
        }
        cout << "#" << tc << " " << cnt << "\n";
        a.clear();
        b.clear();
    }
    return 0;
}