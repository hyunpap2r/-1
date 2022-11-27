#include <iostream>
using namespace std;

int main()
{
    int tc;
    int t; cin >> t;

    for (int tc = 1; tc <= t; tc++)
    {
        int h1, h2, m1, m2, sumh, summ;
        cin >> h1 >> m1 >> h2 >> m2;

        sumh = h1 + h2;
        summ = m1 + m2;
        if(summ >= 60)
        {
          summ -=60;
          sumh++;  
        }
        if (sumh > 12)
        {
            sumh -= 12;
        }

    

        cout << "#" << tc << " " << sumh << " " << summ << "\n";
    }

    return 0;
}