#include <iostream>
using namespace std;

int puz[9][9];
int check()
{
    for (int i = 0; i<9; i++)
                {
                int check01 = 0;
                int check02 = 0;
                for (int j = 0; j < 9; j++)
                {
                    check01 += puz[i][j]; 
                    check02 += puz[j][i]; 
                }
                if (check01 != 45)
                    return 0;
                if (check02 != 45)
                    return 0;

                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j <3; j++)
                    {
                        int check03 = 0;
                        for (int k = 0; k <3; k++)
                        {
                            for (int l =0; l <3; l++)
                            {
                                check03 += puz[i*3+k][j*3+l];
                            }
                        }
                        if (check03 != 45)
                        {
                            return 0;
                        }
                    }
                }
            }
    return 1;
}

int main()
{
    int test_case;
    int T;
    cin >> T;

    for (int test_case = 1; test_case <= T; test_case++)
    {
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j <9; j++)
            cin >> puz[i][j];
        }
    cout << "#" << test_case << " " << check() << endl;
    }
    return 0;
}