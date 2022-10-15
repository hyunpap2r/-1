#include <iostream>
using namespace std;
int N;
int count369(int n)
{
    int count = 0;
    while(true)
    {
        int digit = n % 10;
        if (digit == 3 || digit == 6 || digit == 9)
        {
            count++;
        }
        n /= 10;
        if (n == 0)
            break;
    }
    return count;
}


int main()
{
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        int count = count369(i);
        if( count == 0)
        {
            cout << i;
        
        }
        for (int j = 0; j < count; j++)
        {
            cout << "-";
        }
        cout << " ";
    }

}