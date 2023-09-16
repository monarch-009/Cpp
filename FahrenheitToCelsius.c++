// Write a program that will ask for a temperature in fahrenheit and display it in Celsius.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double f;
    cout << "Enetr the temperatue in Fahrenheit: ";
    cin >> f;
    double c;
    c = ((f - 32) * 5) / 9;
    cout << fixed << setprecision(2);
    cout << "Temperature in celsius: " << c << endl;
    return 0;
}