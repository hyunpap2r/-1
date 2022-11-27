#include <iostream>
#include <vector>
using namespace std;

int main()
{
    
    int test_case;
    int t;
    cin >> t;

    int student;
    int k;
    int first, second, third;

    
    string grade[10] = {"A+", "A0", "A-","B+", "B0", "B-","C+", "C0", "C-","D0"};
    vector<double> score;

    for (int test_case = 1; test_case <= t; test_case++)
    {
       cin >> student >> k;

        for (int i = 0; i < student; i++)
        {
            cin >> first >> second >> third;
            score.push_back((first*0.35) + (second * 0.45) + (third * 0.2));
        }


       int result = 0;
       for (int i = 0; i < student; i++)
        {
            if(score[i] > score[k-1])
            {
                result++;
            }
        }    
        cout << "#" << test_case << " " << grade[result/(student/10)] << "\n";
        score.clear();
    }
    return 0;
}