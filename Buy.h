#pragma once
#include "stdafx.h"
class Buy : public Product 
{
private:
	int    sum; 
	double sum_price,    
		sum_weight; 
public:
	Buy();

	void setSum(const int &); 
	int getSum() const; 

	double getSumPrice() const; 

	double getSumWeight() const; 
};

