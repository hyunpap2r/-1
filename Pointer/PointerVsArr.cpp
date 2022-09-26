#include <iostream>
using namespace std;

void Test(int a)
{

	a++;
}
void Test(char a[])
{
	a[0] = 'x';
}


int main()
{
	const char* test1 = "Hello World";



	char test2[] = "Hello World";

	char test3[1];


	Test(test2);
	cout << test2;
	
	return 0;
}