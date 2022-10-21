#include <iostream>
using namespace std;
int N;

int count369(int n)
{
    int count = 0;                                       // 박수 횟수
    while(true)
    {
        int digit = n % 10;                              // 마지막 숫자부터 확인
        if (digit == 3 || digit == 6 || digit == 9)
        {
            count++;                                     // 박수 횟수 증가
        }
        n /= 10;                                         // 확인한 마지막 숫자 버리기
        if (n == 0)                                      // 숫자 확인 끝
            break;
    }
    return count;
}


int main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        int count = count369(i);        // 1부터 N까지 숫자 확인
        if( count == 0)
        {
            cout << i;
        
        }
        for (int j = 0; j < count; j++)
        {
            cout << "-";
        }
        cout << " ";
    }

}