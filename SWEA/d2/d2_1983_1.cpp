#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int test_case;
    int t;
    cin >> t;

    int student;
    int k;

    double score[100];
    string class1[] = {"A+", "A0", "A-","B+", "B0", "B-","C+", "C0", "C-","D0"};

    for (int test_case = 1; test_case <= t; test_case++)
    {
        cin >> student >> k;
        int result = 0;
        int first, second, third;
        for (int i = 0; i < student; i++)
        {
            cin >> first >> second >> third;
            score[i] = (first*0.35) + (second * 0.45) + (third * 0.2);
        }
        for (int i = 0; i < student; i++)
        {
            if(score[i] > score[k-1])
            {
                result++;
            }
        }
            cout << "#" << test_case << " " << class1[result/(student/10)] << "\n";
    }
    return 0;
}