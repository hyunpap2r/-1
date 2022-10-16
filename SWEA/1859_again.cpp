#include <iostream>
using namespace std;

int main()
{
    int test_case;
    cin >> test_case;
    
    int N, mx, sum;
    int a[10000];
    
    for (int i = 1; i <= test_case; i++)
    {
        cin >> N;
        for (int i = 0; i < N; i++)
        {
            cin >> a[i];
        }
        sum = 0;
        mx = a[N-1];
        for (int i = N-2; i >=0; i--)
        {
            if(a[i]>mx)
            {
                mx = a[i];
            }
            else
            {
                sum += mx - a[i];
            }
        }
        cout << "#" << i << " " << sum << endl;
    }

    return 0;
}