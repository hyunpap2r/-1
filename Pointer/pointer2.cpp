#include <iostream>

using namespace std;

int main()
{
    int num = 1;

    int* ptr = &num;

    ptr += 2;

    cout << ptr;


    return 0;
    
}