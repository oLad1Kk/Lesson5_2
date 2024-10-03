#include <iostream>
#include "Product.h"
#include "Buy.h"
#include "Bill.h"

int main()
{
    Product product1("Banana", 10.1, 0.5);
    //product1.showProduct();
    Buy B(product1, 5);
    B.showBuy();
    Bill d(B);
    d.printBill(d.getName()+".txt");
}


