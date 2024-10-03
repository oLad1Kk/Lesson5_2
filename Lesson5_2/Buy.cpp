#include "Buy.h"

Buy::Buy()
{
    amount = 1;
}

Buy::Buy(Product p, int amount) : Product(p)
{
    this->amount = amount;
}

void Buy::setAmount(int amount)
{
    this->amount = amount;
}

int Buy::getAmount() const
{
    return amount;
}

double Buy::calcTotalPrice() const
{
    return amount*getPrice();
}

double Buy::calcTotalWeight() const
{
    return amount*getWeight();
}

void Buy::showBuy() const
{
    Product::showProduct();
    cout << "Amount :" << amount << endl;
    cout << "+++++++++++++++++++++++++++++++++++++++++++\n";
    cout << "Total Price: " << calcTotalPrice() << endl;
    cout << "Total Weight: " << calcTotalWeight() << endl;
    cout << "+++++++++++++++++++++++++++++++++++++++++++\n";

}
