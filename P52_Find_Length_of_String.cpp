// C++ Program to Find the Length of a String

#include<iostream>
using namespace std;
int main() {
   char str[] = "Manasi Kulkarni";
   int count = 0;
   while (str[count] != '\0')
   count++;
   cout<<"The string is "<<str<<endl;
   cout <<"The length of the string is :  " << count<<endl;
   return 0;
}
