#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int test_case;
	int t;
	cin >> t;
	int n;

	int arr[7][7];
	int result_90[7][7];
	int result_180[7][7];
	int result_270[7][7];

	for (int test_case = 1; test_case <= t; test_case++)
	{
		cin >> n;

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> arr[i][j];
			}
		}
		
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				result_90[j][(n - 1) - i] = arr[i][j];
			}
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				result_180[j][(n - 1) - i] = result_90[i][j];
			}
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				result_270[j][(n - 1) - i] = result_180[i][j];
			}
		}
		cout << "#" << test_case << "\n";
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << result_90[i][j];
			}
			cout << " ";
			for (int j = 0; j < n; j++)
			{
				cout << result_180[i][j];
			}
			cout << " ";
			for (int j = 0; j < n; j++)
			{
				cout << result_270[i][j];
			}
			cout << "\n";

		}


	

	}
	


	return 0;
}