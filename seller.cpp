#include<iostream>
#include<string>

#include"user.h"
#include"product.h"
#include"seller.h"

seller::setname(string Name) {
	name = Name;
}
seller::setproduct(product Product) {
	int size = sizeof(products); // last full index of products array  // it must be changed if its wrong
	products[size] = new product();
	products[size] = Product;
}
seller::give_username() {
	return give_username();
}