#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int tc;
    int t = 10;

    for (int tc = 1; tc <= t;tc ++)
    {
        int n; cin >> n;
        int count = 0;
        vector<vector<string>> map;
        vector<string> tmp;

            for (int j = 0; j < 8; j++)
            {
                string s;
                cin >> s;
                tmp.push_back(s);
                map.push_back(tmp);
                tmp.clear();
            }    

        string temp, rev;

        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8-n+1; j++)
            {
                temp ={};
                for (int k = 0; k < n; k++)
                {
                    temp += map[i][j+k];
                }
                rev = temp;
                reverse(temp.begin(), temp.end());
                if (rev == temp)
                {
                    count++;
                }
            }
        }


        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8-n+1; j++)
            {
                temp ={};
                for (int k = 0; k < n; k++)
                {
                    temp += map[j+k][i];
                }
                rev = temp;
                reverse(temp.begin(), temp.end());

                if (rev == temp)
                {
                    count++;
                }
            }
            map.clear();
        }
        cout << "#" << tc << " " << count << "\n";
    }
    return 0;
}