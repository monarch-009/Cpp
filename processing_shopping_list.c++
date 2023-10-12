#include <iostream>
using namespace std;

const int m = 50;
class ITEMS
{
    int itemCode[m];
    float itemPrice[m];
    int count;

public:
    void CNT(void) { count = 0; } // initialize count to 0;
    void getItem(void);
    void displaySum(void);
    void remove(void);
    void displayItem(void);
};
//==================================================================
void ITEMS ::getItem(void)
{
    cout << "Enter item code: ";
    cin >> itemCode[count];

    cout << "Enter item cost: ";
    cin >> itemPrice[count];
    count++;
}

void ITEMS::displaySum(void)
{
    float sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum = sum + itemPrice[i];
        cout << "Total value : " << sum << endl;
    }
}

void ITEMS ::remove(void)
{
    int a;
    cout << "Enter item code: ";
    cin >> a;
    for (int i = 0; count; i++)
    {
        if (itemCode[i] == a)
            itemPrice[i] = 0;
    }
}

void ITEMS ::displayItem(void)
{

    cout << "Code Price" << endl;
    for (int i = 0; i < count; i++)
    {
        cout << itemCode[i] << endl;
        cout << itemPrice[i] << endl;
    }
}

int main()
{
    ITEMS order;
    order.CNT();
    int x;
    do
    {
        cout << "You can do the following order." << endl
             << "Enter apprpraite number " << endl;
        cout << "1: Add an item " << endl;
        cout << "2: Display total value" << endl;
        cout << "3: Delete an item" << endl;
        cout << "4: Display all item" << endl;
        cout << "5: Quit" << endl;
        cout << "What is your option?" << endl;
        cin >> x;
        switch (x)
        {
        case 1:
            order.getItem();
            break;
        case 2:
            order.displaySum();
            break;
        case 3:
            order.remove();
            break;
        case 4:
            order.displayItem();
            break;
        case 5:
            break;
        default:
            cout << "Error in input ; try again." << endl;
            break;
        }

    } while (x != 5);

    return 0;
}