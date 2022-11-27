#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int test_case;
	int t = 10;

	for (int test_case = 1; test_case <= t; test_case++)
	{
		int n;
		int tower[1000];
		int sum = 0;

		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> tower[i];
		}

		for (int i = 2; i < n-2; i++)
		{
			int maxheight = max(max(tower[i - 2], tower[i - 1]), max(tower[i + 1], tower[i + 2]));

			if (tower[i] > maxheight)
			{
				sum += tower[i] - maxheight;
			}
		}

		cout << "#" << test_case << " " << sum << "\n";
	}

}