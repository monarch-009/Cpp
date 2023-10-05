#include <iostream>
using namespace std;

inline float add(float x, float y) // Add
{
    return (x + y);
}

inline float sub(float x, float y) // Subtract
{
    return (x - y);
}

inline float mul(float x, float y) // Multiply
{
    return (x * y);
}
inline float div(float x, float y) // Divide
{
    return (x / y);
}

int main()
{
    float a = 55.6;
    float b = 32.1;
    cout << "Add : " << add(a, b) << endl;
    cout << "Subtract : " << sub(a, b) << endl;
    cout << "Multiply : " << mul(a, b) << endl;
    cout << "Divide : " << div(a, b) << endl;
    return 0;
}