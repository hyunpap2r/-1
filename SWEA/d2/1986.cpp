#include <iostream>
#include <vector>
using namespace std;
int n;

vector<int> a;

int check(int x)
{
	a.clear();
	for (int i = 1; i <= n; i++)
	{
		a.push_back(i);
	}
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			sum += a[i];
		}
		else
			sum -= a[i];
	}
	return sum;
}

int main()
{
	int tc;
	int t;
	cin >> t;
	
	for (int tc = 1; tc <= t; tc++)
	{
		cin >> n;
		
		
		cout << "#" << tc << " " << check(n) << "\n";

	}



}