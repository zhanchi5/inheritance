#include "stdafx.h"




int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "rus");

	Check product; // создаём объект класса
	unsigned int price, weight, amount;

	cout << "Enter price: ";
	cin >> price;

	cout << "Enter weight ";
	cin >> weight;

	cout << "Enter amount: ";
	cin >> amount;
	

	product.setName("SPAR"); // устанавливаем название продукта
	product.setPrice(price); // цена продукта
	product.setWeight(weight);   // вес
	cout << endl;
	product.setSum(amount); // куплено шт.

	product.printProductInfo(); //чек продукта
	product.printBuyInfo(); // чек покупки

	system("pause");
	return 0;
}