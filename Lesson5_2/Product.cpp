#include "Product.h"

Product::Product()
{
    name = "undefined";
    price = 0;
    weight = 0;
}

Product::Product(string name, double price, double weight)
{
    this->name = name;
    this->price = price;
    this->weight = weight;
}

void Product::setName(string name)
{
    this->name = name;
}

void Product::setPrice(double price)
{
    this->price = price;

}

void Product::setWeight(double weight)
{
    this->weight = weight;

}

string Product::getName() const
{
    return name;
}

double Product::getPrice() const
{
    return price;
}

double Product::getWeight() const
{
    return weight;
}

void Product::showProduct() const
{
    cout << "Name: " << name << endl;
    cout << "Price: " << price << endl;
    cout << "Weight: " << weight << endl;
}
