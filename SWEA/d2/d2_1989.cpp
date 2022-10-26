#include <iostream>
using namespace std;

int check(string s)
{
	int wordsize = s.length();	
	for (int i = 0; i <= wordsize/2; i++)
	{
		if (s[i] != s[wordsize - i - 1])
		{
			return 0;
		}
	}
	return 1;
}


int main()
{
	int test_case;
	int t;
	cin >> t;

	for (int test_case = 1; test_case <= t; test_case++)
	{
		string s;
		cin >> s;

		cout << "#" << test_case << " " << check(s) << "\n";

	}


	return 0;
}