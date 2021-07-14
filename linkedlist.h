#ifndef linkedlist.h
#define linkedlist.h
#include "linkedlist.h"
#include"seller.h"
#include"product.h"
#include"buyer.h"
#include<string>

using namespace std;

void add_seller_node(seller* head,string name, string username, string password,string address,int phone);
void add_buyer_node(buyer* head,string username, string password, string address, int phone);
void add_product_node(product* head,string name,float price,int number,string description);
void delet_product_node(product* &head);
void is_in_list(seller* head_list, string username);
void is_in_list(buyer* head_list, string username);
#endif // !linkedlist.h

