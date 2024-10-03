#pragma once
#include <string>
#include <iostream>
using namespace std;

class Product
{
	string name;
	double price;
	double weight;
public:
	Product();
	Product(string name, double price, double weight);

	void setName(string name);
	void setPrice(double price);
	void setWeight(double weight);

	string getName()const;
	double getPrice()const;
	double getWeight()const;
	
	void showProduct()const;

};

