#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int testcase;

	

	for (int testcase = 1; testcase <= 10; testcase++)
	{
		int dump;
		cin >> dump;

		vector<int>box;
		for (int i = 0; i < 100; i++)
		{
			int x;
			cin >> x;
			box.push_back(x);
		}

		sort(box.begin(), box.end());

		for (int i = 0; i < dump; i++)
		{
			box.back()--;
			box.front()++;

			sort(box.begin(), box.end());

			if (box.back() - box.front() <= 1)
				break;
		}
	
		
		cout << "#" << testcase << " " << box.back() - box.front() << "\n";
	}

	return 0;
}