#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int tc;
    int t; cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        vector<string> a;
        vector<string> b;
        int n; cin >> n;
        int middle = n/2;
        if(n%2 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                string s; cin >> s;
                a.push_back(s);
            }
            
            string temp; 
            for (int i = 0; i < middle; i++)
            {
                temp = a[i];
                b.push_back(temp);
                temp = a[i+middle];
                b.push_back(temp);
            }
        }
        if(n%2 != 0)
        {
            for (int i = 0; i < n; i++)
            {
                string s; cin >> s;
                a.push_back(s);
            }
            
            string temp; 
            for (int i = 0; i < middle; i++)
            {
                temp = a[i];
                b.push_back(temp);
                temp = a[i+middle+1];
                b.push_back(temp);
            }
            temp = a[middle];
            b.push_back(temp);
        }

        cout << "#" << tc << " ";
        for (int i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }
        cout << "\n";
        a.clear();
        b.clear();
    }
    return 0;
}