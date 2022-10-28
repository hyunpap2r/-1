#include <iostream>
using namespace std;

int main()
{
	int tc;
	int t;
	cin >> t;

	for (int tc = 1; tc <= t; tc++)
	{
		int n;
		int num[8] = { 0 ,};
		cin >> n;

		num[0] = n / 50000;
		n %= 50000;

		num[1] = n / 10000;
		n %= 10000;
		num[2] = n / 5000;
		n %= 5000;
		num[3] = n / 1000;
		n %= 1000;
		num[4] = n / 500;
		n %= 500;
		num[5] = n / 100;
		n %= 100;
		num[6] = n / 50;
		n %= 50;
		num[7] = n / 10;
		n %= 10;

		cout << "#" << tc << "\n";

		for (int i = 0; i < 8; i++)
		{
			cout << num[i] << " ";
		}
		cout << "\n";

	}

	


	return 0;
}