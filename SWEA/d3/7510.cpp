#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int tc;
    int t; cin >> t;

    for (int tc = 1; tc <= t; tc++)
    {
        int n; cin >> n;
        int ans = 0;
        int start = 1;
        
        while (start <= n)
        {
            int temp = 0;
            for (int i = start; i <= n; i++)
            {
                temp += i;
                if( temp == n)
                {
                    ans++;
                }
                else if(temp > n)
                {
                    break;
                }
            }
            start++;
        }
        
        cout << "#" << tc << " " << ans << "\n"
;    }

    return 0;
}