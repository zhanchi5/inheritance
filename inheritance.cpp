#include "stdafx.h"




int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "rus");

	Check product; // создаЄм объект класса
	unsigned int price, weight, amount;

	cout << "¬ведите цену: ";
	cin >> price;

	cout << "¬ведите вес: ";
	cin >> weight;

	cout << "¬ведите количество: ";
	cin >> amount;
	

	product.setName("\"”ральские\" пельмени"); // устанавливаем название продукта
	product.setPrice(price); // цена продукта
	product.setWeight(weight);   // вес
	cout << endl;
	product.setSum(amount); // куплено шт.

	product.printProductInfo(); //чек продукта
	product.printBuyInfo(); // чек покупки

	system("pause");
	return 0;
}