#ifndef linkedlist_h
#define linkedlist_h
#include "linkedlist.h"
#include"seller.h"
#include"product.h"
#include"buyer.h"
#include<string>

using namespace std;

void add_seller_node(seller* head, string name, string username, string password, string address, int phone);
void add_buyer_node(buyer* head, string username, string password, string address, int phone);
void add_product_node(product* head, string name, float price, int number, string description);
void delet_product_node(product*& head);
bool is_in_sellerlist(seller* head_list, string username);
bool is_in_buyerlist(buyer* head_list, string username);
#endif // !linkedlist_h

