#include <iostream>
#include <algorithm>
#include<cmath>
using namespace std;

int main()
{
    int test_case;

    int T;

    cin >>T;
    for (int test_case = 1; test_case <= T; test_case++)
    {
        double mean = 0;
        double sum = 0;
        int num;
        for (int i = 0; i < 10; i++)
        {
            cin >> num;
            sum += num;
        }
        mean = sum/10;
        cout << "#" << test_case << " " << round(mean) << endl; 
    }

    return 0;
}