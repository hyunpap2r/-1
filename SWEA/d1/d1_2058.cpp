#include<iostream>
using namespace std;

int main()
{
    int N,a,b,c,d,sum;
    cin >> N;

        a = N/1000;
        b = (N%1000) / 100;
        c = (N%100) / 10;
        d = (N%10);
        sum = a+b+c+d;

        cout << sum << endl;
    

    return 0;
}