#pragma once
#include "stdafx.h"

using namespace std;
class Check : public Buy // открытое наследование
{
public:
	void printProductInfo()
	{
		cout << "Товар: " << getName() << endl;
		cout << "Цена:  " << getPrice() << " руб\n";
		cout << "Вес:   " << getWeight() << " гр\n\n";
	}

	void printBuyInfo()
	{
		cout << "Товара куплено: " << getSum() << " шт\n";
		cout << "На сумму:       " << getSumPrice() << " руб\n";
		cout << "Общий вес:      " << getSumWeight() << " гр\n\n";
	}

};
