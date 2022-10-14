#include <iostream>
using namespace std;

int main()
{
    int r;
    cin >> r;

    int sum = 1;
    for (int i = 0; i <= r; i++)
    {
        cout << sum << " ";
        sum *= 2;
    }    


    return 0;
}