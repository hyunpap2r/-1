#include<iostream>
using namespace std;

int main()
{
    int A, B;
    cin >> A, B;

    if(B - A == 1 || B - A == 2)
    {
        cout << "B";
    }
    else
        cout << "A";

    return 0;
}