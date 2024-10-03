#include "Bill.h"

Bill::Bill(Buy b) : Buy(b)
{

}

void Bill::printBill(string fileName)
{
	ofstream file(fileName);
	if (file.is_open())
	{
		file << "Name: " << getName() << endl;
		file << "Price: " << getPrice() << endl;
		file << "Weight: " << getWeight() << endl;
		file << "Amount :" << getAmount() << endl;
		file << "+++++++++++++++++++++++++++++++++++++++++++\n";
		file << "Total Price: " << calcTotalPrice() << endl;
		file << "Total Weight: " << calcTotalWeight() << endl;
		file << "+++++++++++++++++++++++++++++++++++++++++++\n";
		file.close();
		cout << "The bill was printed\n";
	}
	else
	{
		cout << "Erorr\n";
	}
}
