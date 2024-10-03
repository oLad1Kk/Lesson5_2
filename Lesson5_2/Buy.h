#pragma once
#include "Product.h"
class Buy : public Product
{
	int amount;
public:
	Buy();
	Buy(Product p, int amount);

	void setAmount(int amount);
	int getAmount()const;
	
	double calcTotalPrice()const;
	double calcTotalWeight()const;

	void showBuy()const;
};


