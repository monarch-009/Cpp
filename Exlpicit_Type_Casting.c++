#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int intvar = 25;
    float floatvar = 35.89;
    cout << "intvar = " << intvar << endl;
    cout << "floatvar = " << floatvar << endl;
    cout << "float (intvar) = " << float(intvar) << endl;
    cout << "int (floatvar) = " << int(floatvar) << endl;

    return 0;
}