#include <iostream>
using namespace std;

int main()
{
    int test_case;
    int T, N;
    cin >> T;
    int arr[11][11];
    arr[0][0] = 1;

    for (test_case = 1; test_case <= T; test_case++)
    {
        cin >> N;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                if (j == 0 || j == i)
                {
                    arr[i][j] = 1;
                }
                else
                    arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
        }
        cout << "#" << test_case << "\n";

        for (int k = 0; k < N; k++)
        {
            for (int l = 0; l <= k; l++)
            {
                cout << arr[k][l] << " ";
            }
            cout << "\n";
        }

    }

    return 0;
}