#include <iostream>
using namespace std;

const int m = 50;
class Item
{
    int itemCode[m];
    float itemPrice[m];
    int count;

public:
    void CNT(void)
    {
        count = 0;
    }
    void getitem();
    void displaySum();
    void remove();
    void displayItem();
};

void Item ::getitem()
{
    cout << "Enter Item Code :" << endl;
    cin >> itemCode[count];
    cout << "Enter the item Price :" << endl;
    cin >> itemPrice[count];
    count++;
}
void Item::displayItem(void)
{
    cout << "\n code Price :" << endl;

    for (int i = 0; i < count; i++)
    {
        cout << " " << itemCode[i];
        cout << " " << itemPrice[i];
    }
    cout << endl;
}

void Item ::displaySum(void)
{
    float sum = 0;

    for (int i = 0; i < count; i++)
    {
        sum = sum + itemPrice[i];
    }
    cout << "\n total value :" << sum << endl;
}


void Item::remove(void)
{
    int a;
    cout << "Enter Item code :";
    cin >> a;
    for (int i = 0; i < count; i++)
    {
        if (itemCode[i] == a)
        {
            itemPrice[i] = 0;
        }
    }
}

int main()
{
    Item order;
    order.CNT();
    int x;
    do
    {
        cout << "You Can do following Choice Your option :" << endl;
        cout << "1:Add an item :" << endl;
        cout << "2:Display total Value :" << endl;
        cout << "3:Delete an item :" << endl;
        cout << "4:Display all item :" << endl;
        cout << "5:Quit :" << endl;

        cin >> x;

        switch (x)
        {
        case 1:
            order.getitem();
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
            cout << "Error in input! try again" << endl;
            break;
        }
    } while (x != 5);

    return 0;
}