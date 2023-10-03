#include <iostream>
#include <iomanip> //  for setw

using namespace std;

int main()
{
    int Basic = 950, Allowance = 95, Total = 1045;
    cout << setw(20) << std::left << "Basic : " << setw(10) << Basic << endl
         << setw(20) << "Allowance : " << setw(10) << Allowance << endl
         << setw(20) << "Total : " << setw(10) << Total << endl;

    return 0;
}