// Write a function using refrence variable as an argument to swap the value of a pair of integer
#include <iostream>
using namespace std;

int swapval(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a, b;
    cout << "Enter value of a : ";
    cin >> a;
    cout << "Enter value of b : ";
    cin >> b;
    swapval(a, b);
    cout << "After swap value of a : " << a << endl;
    cout << "After swap value of b : " << b << endl;

    return 0;
}