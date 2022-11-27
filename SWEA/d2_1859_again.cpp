                                            //배열의 가장 끝부터 탐색해야 하는 문제//

#include <iostream>
using namespace std;
int prices[1000002];                  //최대 100000일의 가격을 넣을 수 있는 배열 생성
int main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);

    int test_case;
    int T;
    cin >> T;

    for (int test_case = 1; test_case <= T; test_case++)
    {
        int N;
        long long sum = 0;                  // int로 선언시 최대 이득이 int형의 범위를 넘어므로 long long으로 선언
                                    
        cin >> N;
        for (int i = 0; i <N; i++)
        {
            cin >> prices[i];               // 배열에 각 날짜의 값 저장
        }
        int max = prices[N-1];              // 가장 비싼 값을 마자막날이라고 가정

        for (int j = N-1; j >= 0; j--)      // 뒤에서부터 반복하여 가장 비싼 값을 탐색
        {
            if(max >= prices[j])            // max와 prices[j]의 값을 비교해서 max값이 더 크거나 같다면         10 7 6  //  3 5 9   //  1 1 3 1 2
            {
                sum += (max - prices[j]);   // 그날 다 팔고 차익을 sum에 넣어줌
            }
            else
                max = prices[j];            //prices[j]날이 더 비싸면 그 날의 값을 max값으로 재지정, 처음 max의 값이었던 마지막날은 사지 않는 걸로 생각
        }
        cout << "#" << test_case << " " << sum << endl; 
    }


    return 0;
}