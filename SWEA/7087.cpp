#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int tc;
    int t; cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        char alphabet[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
        bool check[26] = {false};

        int n; cin >> n;
        vector<string> a;
        for (int i = 0; i < n; i++)
        {
            string s; cin >> s;
            a.push_back(s);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(a[j][0] == alphabet[i])
                {
                    check[i] = true;
                }
            }
        }
        int cnt = 0;
        for (int k = 0; k < n; k++)
        {
            if(check[k] == true)
            {
                cnt++;
            }
            else
                break;
        }
        cout << "#" << tc << " " << cnt << "\n";
        a.clear();
    }

    return 0;
}