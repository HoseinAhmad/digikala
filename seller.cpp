#include<iostream>
#include<string>

#include"user.h"
#include"product.h"
#include"seller.h"

void seller::setname(string Name) {
	name = Name;
}
void seller::setproduct(product Product) {
	int size = sizeof(products); // last full index of products array  // it must be changed if its wrong
	products[size] = Product;
}
string seller::give_username() {
	string username = give_username();
	return username;
}