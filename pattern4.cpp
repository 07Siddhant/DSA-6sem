#include <iostream>
using namespace std;

int main()
{
   int n, i, j, k;
   cin >> n;

   for(i = 1; i <= n; i++)
   {
      //for loop for displaying space
      for(k = i; k < n; k++)
      {
         cout << " ";
      }
      //for loop to display star equal to row number
      for(j = 1; j <= (2 * i - 1); j++)
      {
         cout << "*";
      }

      cout << "\n";
   }
   return 0;
}
