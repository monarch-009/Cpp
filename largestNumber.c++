// Write a program to read two number from the keyboard  and display the larger number on the screen
#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cout << "Enter two number:- ";
    cin >> n1 >> n2;
    if (n1 > n2)
    {
        cout << "First number is greater than Second." << endl;
    }
    else if (n2 > n1)
    {
        cout << "Second number is greater than First." << endl;
    }
    else
    {
        cout << "Both number are same." << endl;
    }
    return 0;
}