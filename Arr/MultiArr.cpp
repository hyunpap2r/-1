#include <iostream>
using namespace std;

int main()
{
   int a[10] = { 1,2,3 };

   // [1] [5] [1] [2] [2] << 1층
   // [4] [2] [3] [4] [1] << 0층
   

   int frist[5] = { 4, 2, 3, 4, 1 };
   int second[5] = { 1, 5, 1, 2, 2 };
   
   int apt2D[2][5] = { {4, 2, 3, 4, 1 },{ 1, 5, 1, 2, 2 } };

   for (int floor = 0; floor < 2; floor++)   {
      for (int room = 0; room < 5; room++)
      {
         int num = apt2D[floor][room];
         cout << num << " ";
      }
      cout << endl;
   }

   int apt1D[10] = { 4, 2, 3, 4, 1, 1, 5, 1, 2, 2 };


   for (int floor = 0; floor < 2; floor++) {
      for (int room = 0; room < 5; room++)
      {
         int index = floor * 5 + room;
         int num = apt1D[index];
         cout << num << " ";
      }
      cout << endl;
   }

   

   // 2차 배열을 사요할 때 > 맵 생성
   int map[5][5] =
   {
      {1,1,1,1,1},
      {1,0,0,1,1},
      {1,1,0,1,1},
      {1,0,0,1,1},
      {1,1,0,0,1}
   };
      for (int  i =0; i< 5; i++)
      {
         for (int j = 0; j < 5; j++)
         {
            int info = map[i][j];
            cout << info;
         }
         cout << endl;
      }
   return 0;
}