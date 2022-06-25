#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;
    int total_items;
    int total = 0;

public:
    void initCounter(void) { counter = 0; }
    void no_of_items(void);
    void setPrice(void);
    void displayPrice(void);
    void total_price(void);
} shop;

void Shop ::no_of_items(void)
{
    cout << "Enter the number of items" << endl;
    cin >> total_items;
    for (int i = 1; i <= total_items; i++)
    {
        setPrice();
    }
}

void Shop ::setPrice(void)
{
    cout << "Enter the Id of your item no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter the Price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of itemId " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

void Shop ::total_price(void)
{
   for (int i = 0; i < total_items; i++)
   {
       total += itemPrice[i];
   }
   cout<<"Total is "<<total<<endl;
   
    
}

int main()
{
    shop.no_of_items();
    shop.displayPrice();
    shop.total_price();
    return 0;
}