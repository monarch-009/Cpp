#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read(void)
    {
        cout << "Enter a binary number: ";
        cin >> s;
    }

    void chk_bin(void)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s.at(i) != '0' && s.at(i) != '1')
            {
                cout << "Incorrect Binary Number format.. the program will quit" << endl;
                getch();
                exit(0);
            }
        }
    }
    void ones(void)
    {
        chk_bin(); // calling member function
        for (int i = 0; i < s.length(); i++)
        {
            if (s.at(i) == '0')
            {
                s.at(i) = '1';
            }
            else
            {
                s.at(i) = '0';
            }
        }
    }
    void displayones(void)
    {
        ones(); // calling member function;
        cout << "The 1's compliment of the above binary number is:" << s << endl;
    }
};
int main()
{
    binary b;
    b.read();
    b.displayones();
    getch();
    return 0;
}