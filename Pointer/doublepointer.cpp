#include <iostream>
using namespace std;


void setmsg(const char** a)
{
    *a = "이중포인터";
}
void setmsg2(const char*& a)
{
    a = "참조";
}

int main()
{
    int a  = 0;
    
    const char* msg = "hello";
    setmsg(&msg);
   //cout << msg << endl;

    setmsg2(msg);
    cout << msg << endl;

    return 0;
}