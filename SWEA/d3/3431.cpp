#include <iostream>
using namespace std;

int main()
{

    int tc;
    int t; cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        int L, U, X;
        cin >> L >> U >> X;


        cout << "#" << tc << " ";
        if (X >= L && X <= U)
        {
            cout << "0" << "\n";
        }
        else if(X < L)
        {
            cout << L-X << "\n";
        }
        else
            cout << "-1" << "\n";
    }

    return 0;
}