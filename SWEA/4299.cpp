#include <iostream>
using namespace std;


int main()
{
    int tc;
    int t; cin >> t;

    for (int tc = 1; tc <= t; tc++)
    {
        int d, h, m;
        cin >> d >> h >> m;

        d -= 11;
        h -= 11;
        m -= 11;
        
        cout << "#" << tc << " ";
        if(m < 0)
        {
            m = 60+m;
            h--;
        }
        if(h < 0)
        {
            h = 24+h;
            d--;
        }
        if (d <0)
        {
            cout << "-1" << "\n";
        }
        else
        {
            cout << (1440 * d) + (60 *h) + m << "\n";
        }
    }
    return 0;
}