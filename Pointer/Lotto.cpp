#include <iostream>
using namespace std;

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;

}

void Sort(int num[], int count)
{
    for (int i = 0; i < count; i++)
    {
         int best = i;

        for (int j = i+1; j < count; j++)
        {
            if (num[j] < num[best])
                best = j;
        }
    if (i != best)
        swap(num[i], num[best]);
    }
        
}
void ChooseLotto(int num[])
{
    srand((unsigned)time(0));

    int count = 0;
    while (count != 6)
    {
        int randvalue =  1 + (rand() % 45);

        bool found = false;
        for (int i = 0; i < count; i++)
        {
            if(num[i] == randvalue)
            {
                found = true;
                break;
            }
        }
        if (found == false)
        {    
            num[count] = randvalue;
            count++;
        }    
    }
    

    Sort(num, 6);


}

int main()
{
    int a = 1;
    int b = 2;
    swap(a,b);

    int num[6] = {1,4,5,8,2,9};
    Sort(num,sizeof(num)/sizeof(int));


    ChooseLotto(num);
    for (int i = 0; i < 6; i++)
    {
        cout << num[i] << " ";
    }

    return 0;
}