#include <iostream>
#include <algorithm>
using namespace std;
string s[100];
string rsv, temp;
bool flag;
int n;
int main()
{
    int tc;
    int t = 10;
    for (int tc = 1; tc <= t; tc++)
    {
        flag = true;
        int max1 = 0;
        int max2 = 0;
        int num; cin>> num;
        n = 100;
        for (int i = 0; i < 100; i++)
        {
            cin >>s[i];
        }
        while (flag)
        {
            n--;

            for (int i = 0; i < 100; i++)
            {
                for (int j = 0; j < 100-n+1; j++)
                {
                    temp = {};
                    for (int k = 0; k < n; k++)
                    {
                        temp += s[i][j+k];
                    }
                    rsv = temp;
                    reverse(rsv.begin(), rsv.end());

                    if(temp == rsv)
                    {
                        max1 = n;
                        flag = false;
                    }
                }
            }

            for (int i = 0; i < 100; i++)
            {
                for (int j = 0; j < 100-n+1; j++)
                {
                    temp = {};
                    for (int k = 0; k < n; k++)
                    {
                        temp += s[j+k][i];
                    }
                    rsv = temp;
                    reverse(rsv.begin(), rsv.end());

                    if(temp == rsv)
                    {
                        max2 = n;
                        flag = false;
                    }
                }
            }
        }
        if (max1 > max2)
        {
        cout << "#" << tc << " " << max1 <<  "\n";
        }
        else
        {
        cout << "#" << tc << " " << max2 <<  "\n";

        }
    }

    return 0;
}