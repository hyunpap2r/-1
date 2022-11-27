#include <iostream>
using namespace std;
int puz[9][9];

int check()
{
    for (int i = 0; i < 9; i++)
    {
        int check1 = 0;
        for (int j = 0; j <9; j++)
        {
            int check1 += map[i][j];
        }
    }
    
}


int main()
{
    int test_case;
    int T;
    cin >> T;

    for (int test_case = 1; test_case <= T; test_case++)
    {
        for (int i = 0;i <9; i++)
        {
            for (int j = 0; j< 9; j++)
            {
                cin >> puz[i][j];
            }
        }

    
    }
    return 0;
}