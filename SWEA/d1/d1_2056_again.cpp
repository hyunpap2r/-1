#include <iostream>

using namespace std;

int main()
{
    int test_case;
    int t;
    cin >> t;

    int dayofmonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    string s;
    for (int test_case = 1; test_case <= t; test_case++)
    {
        cin >> s;
        int month = atoi(s.substr(4,2).c_str());
        int day = atoi(s.substr(6).c_str());

        cout << "#" << test_case << " ";

        if (month >= 1 && month <= 12 && day >= 1 && day <= dayofmonth[month-1])
            cout << s.substr(0,4) << "/" << s.substr(4,2) << "/" << s.substr(6) << "\n";

    }


    return 0;
}
