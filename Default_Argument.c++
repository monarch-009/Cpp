#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

int main()
{
    float amount;
    float value(float p, int n, float r = 0.15); // prototype
    void printline(char ch = '*', int len = 40); // prototype

    printline(); // use default value of argumnet

    amount = value(5000.00, 5); // default for 3rd Arugument
    cout << endl;
    cout << "Final Value = " << amount << endl;

    amount = value(5000.00, 5, 0.30); // pass all the argument
    cout << "Final Value = " << amount << endl;

    printline('='); // use default value for second argument
    getch();

    return 0;
}

float value(float p, int n, float r)
{
    int year = 1;
    float sum = p;
    while (year <= n)
    {
        sum = sum * (1 + r);
        year = year + 1;
    }
    return (sum);
}

void printline(char ch, int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << ch;
    }
}
