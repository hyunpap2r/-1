#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int testcase = 10;

	int n;
	int tower[1000];
	for (int testcase = 1; testcase <= 10; testcase++)
	{
		
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
				sum += tower[i] - maxheight;
		}

		cout << "#" << testcase << " " << sum << "\n";
	}


	return 0;
}