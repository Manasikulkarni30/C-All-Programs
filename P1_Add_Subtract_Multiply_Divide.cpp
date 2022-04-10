// C++ Program to Add, subtract, multiply and divide Two Numbers.

#include<iostream>
using namespace std;
int main()
{
  int num1, num2;
  cout << "Enter two Numbers : " << endl;
  cin >> num1 ;
  cin >> num2;
  
  cout << "Addtion of two Numbers is : " << endl;
  cout << num1 << "+" << num2 << " = "<< num1+num2 << endl;
  
  cout << "Subtraction of two Numbers is : " << endl;
  cout << num1 << "-" << num2 << " = "<< num1-num2 << endl;

  cout << "Multiplication of two Numbers is : " << endl;
  cout << num1 << "*" << num2 << " = "<< num1*num2 << endl;

  cout << "Division of two Numbers is : " << endl;
  cout << num1 << "/" << num2 << " = "<< num1/num2 << endl;

  return 0;
}
