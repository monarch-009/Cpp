#include <iostream>
using namespace std;

int m = 10; // global m

int main()
{
    int m = 20; // m redeclarded , local to main
    {
        int k = m;
        int m = 30; // m declared again
                    // local to inner block
        cout << "We are in inner block." << endl;
        cout << "k = " << k << endl;
        cout << "m = " << m << endl;
        cout << "::m = " << ::m << endl;
    }
    cout << endl;
    cout << "We are in outer block." << endl;
    cout << "m = " << m << endl;
    cout << "::m = " << ::m << endl;
    // Note -> It is to noted ::m will always refer to the global m. In the inner block , ::m refers to the value 10 and not 20.
    return 0;
}