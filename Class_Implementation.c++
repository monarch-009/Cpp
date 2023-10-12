#include <iostream>
using namespace std;

class item
{
    int number;
    float cost;

public:
    void getdata()
    {
        cout << "Enter the value which is asked..!" << endl
             << endl;
        cout << "Enter the number of the item : ";
        cin >> number;
        cout << "Enter the cost of the item : ";
        cin >> cost;
    }
    void print()
    {
        cout << "Number: " << number << endl;
        cout << "Cost: " << cost << endl;
    }
};

int main()
{
    item x;
    cout << "Object x" << endl;
    x.getdata();
    x.print();

    item y;
    cout << "Object y" << endl;
    y.getdata();
    y.print();
    return 0;
}