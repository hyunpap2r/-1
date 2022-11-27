#include <iostream>
using namespace std;

int main()
{
    int tc;
    int t; cin >> t;

    for (int tc= 1; tc <= t; tc++)
    {
        int n, d;
        cin >> n >> d;

        int b = d*2+1;
        
        int ans = 0;
        if(n%b ==0)
        {
            ans = n/b;
        }
        else
            ans = n/b+1;
    
        cout << "#" << tc << " " << ans << "\n";
    }


    return 0;
}