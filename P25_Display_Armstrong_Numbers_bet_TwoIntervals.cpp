// C++ Program to Display Armstrong Number Between Two Intervals

#include <iostream>
#include <cmath>
using namespace std;
int main() {
   int lowerbound, upperbound, digitSum, temp, remainderNum, digitNum ;
   cout << "Enter two numbers (intervals): " << endl;
   cin >> lowerbound;
   cin >> upperbound;
   cout<<"Armstrong Numbers between "<<lowerbound<<" and "<<upperbound<<" are: ";
   for(int num = lowerbound; num <= upperbound; num++) {
      temp = num;
      digitNum = 0;
      while (temp != 0) {
         digitNum++;
         temp = temp/10;
      }
      temp = num;
      digitSum = 0;
      while (temp != 0) {
         remainderNum = temp%10;
         digitSum = digitSum + pow(remainderNum, digitNum);
         temp = temp/10;
      }
      if (num == digitSum)
      cout<<num<<" ";
   }
   return 0;
}
