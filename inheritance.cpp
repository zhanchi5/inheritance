#include "stdafx.h"




int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "rus");

	Check product; // ������ ������ ������
	unsigned int price, weight, amount;

	cout << "Enter price: ";
	cin >> price;

	cout << "Enter weight ";
	cin >> weight;

	cout << "Enter amount: ";
	cin >> amount;
	

	product.setName("SPAR"); // ������������� �������� ��������
	product.setPrice(price); // ���� ��������
	product.setWeight(weight);   // ���
	cout << endl;
	product.setSum(amount); // ������� ��.

	product.printProductInfo(); //��� ��������
	product.printBuyInfo(); // ��� �������

	system("pause");
	return 0;
}