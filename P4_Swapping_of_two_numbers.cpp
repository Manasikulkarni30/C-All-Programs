// C++ Program to Swap Two Numbers.

#include <iostream>
using namespace std;
int main()
{
    int a, b, temp;
    cout << "Input 1st number : " << endl; 
    cin >> a;
    cout << "Input 2nd number : " << endl;
    cin >> b;
    
    temp = a;
    a = b;
    b = temp;

    cout << "After swapping the 1st number is : " << a << endl;
    cout << "After swapping the 2nd number is : " << b ;
    return 0;
}
