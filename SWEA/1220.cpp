#include <iostream>
#include <string>

using namespace std;

int main(void) {
    
    int arr[100][100];
    for(int tc=1; tc<=10; tc++){
        
        // 입력받기
        int sz;
        cin >> sz;
        for(int r=0; r < sz; r++){
            for(int c=0; c < sz; c++){
                cin >> arr[r][c];
            }
        }
        
        int answer =0;
        int check = 0;
        for(int c=0; c< sz; c++)
        {
            bool flag = false;
            for(int r=0; r< sz; r++)
            {
                if( flag==false && arr[r][c]==1 )
                { // 처음 Red(1)
                    flag = true;
                    check++;
                }
                if( flag==true && arr[r][c]==2 )
                { // 두번째 Blue(2)
                    flag = false; // 초기화
                    answer += check;
                    check = 0;
                }
            }
        }
        
        cout << '#' << tc << ' ' << answer << endl;
    }
    return 0;
}
