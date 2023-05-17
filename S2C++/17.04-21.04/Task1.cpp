#include <iostream>
#include <string>
using namespace std;

class ShopItemOrder
{
private:
    string item_name;
    double unit_price;
    int num_items_ordered;

public:
    ShopItemOrder(string name, double price, int quantity);
    string getItemName();
    void setItemName(string name);
    double getUnitPrice();
    void setUnitPrice(double price);
    int getNumItemsOrdered();
    void setNumItemsOrdered(int quantity);
    double getTotalPrice();
    void printOrder();
};

ShopItemOrder::ShopItemOrder(string name, double price, int quantity)
{
    item_name = name;
    unit_price = price;
    num_items_ordered = quantity;
}

string ShopItemOrder::getItemName()
{
    return item_name;
}

void ShopItemOrder::setItemName(string name)
{
    item_name = name;
}

double ShopItemOrder::getUnitPrice()
{
    return unit_price;
}

void ShopItemOrder::setUnitPrice(double price)
{
    unit_price = price;
}

int ShopItemOrder::getNumItemsOrdered()
{
    return num_items_ordered;
}

void ShopItemOrder::setNumItemsOrdered(int quantity)
{
    num_items_ordered = quantity;
}

double ShopItemOrder::getTotalPrice()
{
    return unit_price * num_items_ordered;
}

void ShopItemOrder::printOrder()
{
    cout << "Item: " << item_name << endl;
    cout << "Unit Price: $" << unit_price << endl;
    cout << "Quantity: " << num_items_ordered << endl;
    cout << "Total Price: $" << getTotalPrice() << endl;
}

int main()
{
    ShopItemOrder order("Example Item", 10.99, 3);
    order.printOrder();

    order.setUnitPrice(12.99);
    order.setNumItemsOrdered(5);
    order.printOrder();

    return 0;
}