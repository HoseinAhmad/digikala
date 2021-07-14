#ifndef linkedlist.h
#define linkedlist.h
#include "linkedlist.h"
#include"seller.h"
#include"buyer.h"
#include<string>

using namespace std;

void add_seller_node(seller* head,string name, string username, string password,string address,int phone);
void add_buyer_node(buyer* head,string username, string password, string address, int phone);
void add_product_node();
void delet_product_node();

#endif // !linkedlist.h

