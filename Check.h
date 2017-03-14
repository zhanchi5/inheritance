#pragma once
#include "stdafx.h"

using namespace std;
class Check : public Buy 
{
public:
	void printProductInfo()
	{
		cout << "Item: " << getName() << endl;
		cout << "Price:  " << getPrice() << " rub\n";
		cout << "Weight:   " << getWeight() << " gr\n\n";
	}

	void printBuyInfo()
	{
		cout << "Items bought: " << getSum() << " \n";
		cout << "Total summary:       " << getSumPrice() << " rub\n";
		cout << "Total weight:      " << getSumWeight() << " gr\n\n";
	}

};
