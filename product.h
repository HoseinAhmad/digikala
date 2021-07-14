#ifndef class_product_H
#define class_product_H
#include "product.h"

using namespace std;

class product {
privete:
	string name;
	float price;
	int number;
	string description;
	int score;
	string** comments;
public:
	product* next;
	void setname(string Name);
	void setprice(float Price);
	void setnumber(int Number);
	void setdescription(string Description);
	void setscore(int Score);
	void setcomments(string Comment);

	string givename();
};

#endif // !class_product_H
