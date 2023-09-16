#include <iostream>
using namespace std;

int main()
{
    float num1, num2, sum, avg; //variable 
    cout << "Enter two number:- "; // prompt
    cin >> num1 >> num2; //Read input from keybord 
    sum = num1 + num2;
    avg = sum / 2;
    cout << "Sum = " << sum << endl;
    cout << "Average = " << avg << endl;
    return 0;
}