#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int test_case;
    int t;
    cin >> t;

    vector<int> prices;
    for (int test_case = 1 ; test_case <= t; test_case++)
    {    
    long long sum = 0;
    int n;
    cin >> n;
    
    int temp;
    for (int i = 0; i  < n; i++)
    {
        cin >> temp;
        prices.push_back(temp);
    }
        int max = prices[n-1];

    for (int i = n-1; i >= 0; i--)
    {
        if(max >= prices[i])
        {
            sum += (max-prices[i]);
        }
        else
            max = prices[i];
    }


    }

    return 0;
}