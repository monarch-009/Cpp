//Write a function that creates a vector of user-given size M usingg new operator;
#include <iostream>
using namespace std;

int *createVector(int M)
{
    int *vectorPtr = new int[M]; 
    for (int i = 0; i < M; i++)
    {
        vectorPtr[i] = 0;
    }
    return vectorPtr;
}

int main()
{
    int M;
    cout << "Enter the size of the vector: ";
    cin >> M;
    int *myVector = createVector(M);
    delete[] myVector;
    return 0;
}
