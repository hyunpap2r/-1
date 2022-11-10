#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int tc;
	int t; cin >> t;
	for (int tc = 1; tc <= t; tc++)
	{
		
		vector<int> a;
		vector<int> sum;
		for (int i = 0; i < 7; i++)
		{
			int temp; cin >> temp;
			a.push_back(temp);
		}
		
		int tmp;

		bool memo[301] = { false };

		for (int i = 0; i < 5; i++)
		{
			for (int j = i+1; j <6 ; j++)
			{
				for (int k = j+1; k < 7; k++)
				{
					if (!memo[a[i] + a[j] + a[k]])
					{
						tmp = a[i] + a[j] + a[k];
						sum.push_back(tmp);
						memo[a[i] + a[j] + a[k]] = true;
					}
				}
			}
		}
		sort(sum.begin(), sum.end(), greater<>());


		printf("#%d %d\n", tc, sum[4]);
		
		a.clear();
		sum.clear();

	}

	return 0;
}