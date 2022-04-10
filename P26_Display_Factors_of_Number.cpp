// C++ Program to Display Factors of a Number.

#include<iostream>
using namespace std;
int main()
{
   int num , i;
   cout << "Enter the number: " << endl;
   cin >> num;
   cout << "The factors of " << num << " are : ";
   for(i=1; i <= num; i++)
    {
      if (num % i == 0)
      cout << i << " ";
   }
   return 0;
}
