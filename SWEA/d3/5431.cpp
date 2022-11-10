#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
    int tc;
    int t; cin >> t;
    vector<int> ans;
    for (int tc = 1; tc <= t; tc++)
    {
        bool check[101] = {false,};
        int n, k;
        cin >> n >> k;
        
        //제출자 체크
        int arr[101] = {0,};
        for (int i = 1; i <= k; i++)
        {
            cin >> arr[i];
            check[arr[i]] = true;
            
        }

        //미제출자 추출
        for (int i = 1; i <= n; i++)
        {
            if(check[i] == false)
            {
                ans.push_back(i);
            }
        }
        sort(ans.begin(), ans.end());


        //출력
        cout << "#" << tc << " ";
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";

        ans.clear();
    }
    return 0;
}