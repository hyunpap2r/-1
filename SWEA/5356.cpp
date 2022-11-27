#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    int tc;
    int t; cin >> t;

    for (int tc = 1; tc <=t; tc++)
    {
        vector<string> s;
        string ans = "";
        int max = 0;
        for (int i= 0; i < 5; i++)
        {
            string a; cin >> a;
            s.push_back(a);
            if(s[i].size() > max)
            {
                max = s[i].size();
            }
        }
        for (int c = 0; c < max; c++)
            {
                for (int r = 0; r < 5; r++)
                {
                    if(s[r].size() > c)
                    {
                        ans += s[r][c];
                    }
                }
            }
        cout << "#" << tc << " " << ans << "\n";
        s.clear();
    }
    

    return 0;    
}