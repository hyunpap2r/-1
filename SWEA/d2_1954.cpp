#include <iostream>
using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);

    int test_case;
    int T, N, num;                      // N = 배열의 크기 N*N / num = 출력시 반복문에 사용(while문을 통해 N을 계속 줄여갈 예정이므로 초기 N의 값 저장 필요)
    cin >> T;

    for (int test_case = 1; test_case <= T; test_case++)
    {
        int arr[10][10] = {0,};         // 달팽이 최대 크기 = arr[10][10] = {case 반복시 초기화}
        int r = 0, c = -1;              // r = 배열 시작점 / c = arr[0][0]부터 넣어주기 위해 dir을 더하기전 -1로 초기값을 설정해 arr[0][0]부터 시작
        int k = 1;                      // 시작점의 값
        int dir = 1;                    // 배열의 진행방향
        cin >> N; 

        num = N;    

        while (N > 0)                   // arr[0][0]부터 arr[N][N]까지 숫자 입력
        {
            for (int i = 0; i < N; i++)
            {
                c += dir;               // 0행 0열부터 0행 N열까지 증가
                arr[r][c] = k;          // 0행 0열에 1로 지정한 k의 초기값을 넣어줌
                k++;                    // 다음번에 넣어줄 값의 증가 1 -> 2
            }

            N--;                        // 한 열이 다 채워졌으면 N-1행만 채워주면 되므로 반복될 N의 값 감소 -> 이때문에 처음에 num = N 사용

            for (int j = 0; j < N; j++) // 감소된 N만큼만 반복
            {
                r += dir;               
                arr[r][c] = k;
                k++; 
                                    // index  [0] [1] [2]
            }                           // [0] 1   2   3 
                                        // [1] 0   0   4
                                        // [2] 0   0   5
            
            dir *= -1;                  // 진행방향이 바뀌므로 기존 진행방향에 -1을 곱함
            
            
        }

        cout << "#" << test_case << endl;
        for (int i = 0; i < num; i++)  
        {
            for (int j = 0; j < num; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}