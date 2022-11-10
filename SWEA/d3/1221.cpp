#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

string num[10] = {"ZRO", "ONE", "TWO", "THR", "FOR", "FIV", "SIX", "SVN", "EGT", "NIN"};

int main()
{
    int tc;
    int t; cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        vector<string>arr;
        bool check[10000] = {false,};
        char shap; int tcnum;
        cin >> shap >> tcnum;
        int n; cin >> n;
        
        for (int i = 0; i < n; i++)
        {
            string temp; cin >> temp;
            arr.push_back(temp);
        }


        cout << "#" << tc << "\n";

        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (check[j] == false && arr[j] == num[i])
                {
                    check[j] = true;
                    cout << arr[j] << " ";
                }
            }
        }
        cout << "\n";
        arr.clear();
    }
    return 0;
}