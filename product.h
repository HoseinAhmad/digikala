#ifndef class_product_H
#define class_product_H
#include "product.h"

using namespace std;

class product {
privete:
	string name;
	float price;
	int number;
	string Description;
	int score;
	string** comments;
public:
	product* next;

	//write funcs
};

#endif // !class_product_H
