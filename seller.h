#ifndef class_seller_H
#define class_seller_H
#include"user.h"
#include"product.h"
#include"seller.h"

using namespace std;

class seller :public user {
private:
	string name;
	product* products;
public:
	seller* next;
	void setname(string Name);
	void setproduct(product Product);
	string give_username();

};

#endif // !class_buyer
