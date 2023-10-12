#include <iostream>
using namespace std;
class item
{
    static int count;
    int number;

public:
    void getdata(int a)
    {
        number = a;
        count++;
    }
    void getcount(void)
    {
        cout << "count: " << count << endl;
    }
};
int item ::count;
int main()
{
    item a, b, c;
    a.getcount();
    a.getcount();
    a.getcount();

    a.getdata(100);
    a.getdata(200);
    a.getdata(300);
    cout << "After reading data" << endl;

    a.getcount();
    a.getcount();
    a.getcount();

    return 0;
}