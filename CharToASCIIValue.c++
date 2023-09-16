// Write a program that inputs a character from keyboad and display its corresponding ASCII value on the screen

#include <iostream>
using namespace std;

int main()
{
    char c;
    cout << "Enter any Character:- ";
    cin >> c;
    cout << "ASCII value of Character is: " << int(c) << endl; // TypeCasting
    return 0;
}