#include <iostream>
using namespace std;


int main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);

    int test_case;
    int T;
    cin >> T;
    int map[15][15];


    for (int test_case = 1; test_case <= T; test_case++)
    {
        int N;
        int K;
        int count = 0;
        cin >> N >> K;

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cin >> map[i][j];
            }
        }

        for (int i = 0; i < N; i++)
        {
            int flag = 0;
            for (int j = 0; j < N; j++)
            {
                if (map[i][j] == 1)
                {
                    flag++;
                    if (flag > K)
                        flag = 0;
                    if (j == N - 1 && flag == K)   // 가장 마지막 인덱스가 1일경우
                        count++;
                }
                else {
                    if (flag == K)           // 가장 마지막 인덱스가 1이 아닐 경우
                        count++;
                    flag = 0;
                }
            }
        }

        for (int i = 0; i < N; i++)
        {
            int flag = 0;
            for (int j = 0; j < N; j++) {
                if (map[j][i] == 1)
                {
                    flag++;
                    if (flag > K)
                        flag = 0;
                    if (j == N - 1 && flag == K)
                        count++;
                }
                else {
                    if (flag == K)
                        count++;
                    flag = 0;
                }
            }
        }
        cout << "#" << test_case << " " << count << "\n";
    }

    

    return 0;
}