#include <iostream>
#include <iomanip>
using namespace std;
class temp
{
private:
    double f;
    double c;

public:
    void getdata();
    void print();
};
void temp ::getdata()
{

    cout << "Eneter the temperatue in Fahrenheit: ";
    cin >> f;
}
void temp ::print()
{

    c = ((f - 32) * 5) / 9;
    cout << fixed << setprecision(2);
    cout << "Temperature in celsius: " << c << endl;
}

int main()
{
    temp t;
    t.getdata();
    t.print();
    return 0;
}
