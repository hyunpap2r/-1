#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int temp;
	vector<int> a;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		a.push_back(temp);
	}

	sort(a.begin(), a.end());

	cout << a[n/2] << endl;

	return 0;
}


