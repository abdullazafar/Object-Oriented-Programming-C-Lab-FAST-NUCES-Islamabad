#include <iostream>
using namespace std;

struct Order
{
    int orderId;
    int quantity;
    double price;
};

void applyDiscount(Order& o, double percent)
{
    o.price -= (o.price * percent/100);
}

double calculateTotal(const Order& o)
{
    return o.quantity * o.price;
}

void printReceipt(const Order& o)
{
    cout<<"Order Id: "<<o.orderId<<endl;
    cout<<"Quantity: "<<o.quantity<<endl;
    cout<<"Price   : "<<o.price<<endl;
    cout<<"Total   : "<<calculateTotal(o)<<endl;
}