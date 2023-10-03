#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int *arr;
    int size;

    cout << "Enter the size of the integer array: ";
    cin >> size;

    cout << "Creating an array of size " << size << ".." << endl;
    arr = new int[size];

    cout << "Dynamic allocation of memory for array arr is done." << endl;

    delete arr;
    getch();
    return 0;
}