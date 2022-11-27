#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    for (int t = 1; t <= 10; t++)
    {

    int n;
    string temp;
    stack<char>s, ans;

    cin >> n >> temp;

    for (int i = 0; i < temp.size(); i++)
    {
        if(!s.empty() && s.top() == temp[i])
        {
            s.pop();
        }
        else
        {
            s.push(temp[i]);
        }
    }

    cout << "#" << t << " ";

    while (!s.empty())
    {
        ans.push(s.top());
        s.pop();
    }
    
    while (!ans.empty())
    {
        cout << ans.top();
        ans.pop();
    }
    cout << "\n";
    
    }

    return 0;
}