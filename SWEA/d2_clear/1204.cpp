#include <iostream>

using namespace std;

int main()
{
    int test_case;
    int t;

    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);

    cin >> t;
    for (int test_case = 1; test_case <= t; ++test_case)
    {
        int scores[101] = {0,};
        int test_num;
        cin >> test_num;

        for (int i = 0; i < 1000; i++)
        {
            int score;
            cin >> score;
            scores[score]++;
        }
        int max = 0;
        int res = 0;

        for (int j = 0; j < 101; j++)
        {
            if(scores[j] >= max)
            {
                max = scores[j];
                res = j;
            }
        }
        cout << "#" << test_num << " " << res << "\n";
    }
    return 0;
}