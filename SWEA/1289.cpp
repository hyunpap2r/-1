#include <iostream>
using namespace std;

int main()
{
    int tc;
    int t; cin >> t;

    for (int tc= 1; tc <=t; tc++)
    {
        string bit;
        int original[50] = {0,};
        cin >> bit;
        int ans = 0;

        for (int i = 0; i < bit.size(); i++)
        {
            string change;
            if(stoi(bit.substr(i,1)) == original[i])
            {
                continue;
            }
            change = bit[i];
            for (int j = i; j < bit.size(); j++)
            {
                original[j] = stoi(change);
            }
            ans++;
        }
        cout << "#" << tc << " " << ans << "\n";

    }


    return 0;

}