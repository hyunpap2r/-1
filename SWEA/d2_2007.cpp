#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
   int test_case;
   int T;
   cin >> T;

   for (int test_case = 1; test_case <= T; test_case++)
   {
      string str, tmp;

      cin >> str;
      tmp.push_back(str[0]);

      for (int i = 1; i < str.size(); i++)
      {
         if (tmp != str.substr(tmp.size(), i))
         {
            tmp.push_back(str[i]);
         }
         else
         {
            break;
         }
      }
   }

   return 0;
}