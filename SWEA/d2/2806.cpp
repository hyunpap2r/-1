#include <iostream>
#include <cmath>
using namespace std;
int col[10];
int n;
int ans = 0;
void queen(int x){
    if(n == x){
        ans++; // 카운트 +1
    }else{
        for (int i = 0; i < n;i++){ //행을 n개 검사
            col[x] = i; // 퀸의 위치를 정함
            bool can = true;
            for (int j = 0; j < x;j++)
            {
                if(col[x] == col[j] || abs(col[x] - col[j]) == x - j)
                {
                    //정한 위치의 퀸이 위쪽 퀸과 충돌하는 지 확인
                    // 1. 같은 행에 있는가
                    // 2. 대각선에 있는가
                    can = false; //충돌하면 다른 열의 위치로 놓아야함
                    break;
                }
            }
            if(can)
            { // 충돌하지 않는다면 다음 행으로 넘어감.
                queen(x + 1);
            }     
        }
    }
} //백트래킹
 
int main(){
    cin >> n;
    queen(0);
    cout << ans;
    return 0;
} // 1.5h 