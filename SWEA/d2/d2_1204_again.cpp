#include<iostream>

using namespace std;

int main(int argc, char** argv)
{   
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    
	int test_case;
	int T;
	
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        int scores[101] = {0,};         
        int test_num;                   
        cin >> test_num;                

        for (int i = 0; i < 1000; i++)
        {
            int score;              
            cin >> score;               //  성적 입력
            scores[score]++;            //  똑같은 점수라면 1증가 
        }
        int res = 0 ;                   // 결과를 담을 변수
        int max = 0;                    // 최빈값
        for (int j = 0; j <101; j++)
        {
            if(scores[j] >= max)
            {
                max = scores[j];        //  socres[j]가 최빈값이라면 max에 점수 j를 담아줌
                res = j;
            }
        }
        cout << "#" << test_num << " " << res << endl;
	}
	return 0;
}