#include <bits/stdc++.h>
using namespace std;

long fact(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return n * fact(n - 1);
}

int main()
{
    int num;
    cout << "Enter a positive number:- ";
    cin >> num;

    cout << "Factoraial of " << num << " is " << fact(num);

    return 0;
}