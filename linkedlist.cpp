#include<iostream>
#include<string>
#include "linkedlist.h"
#include"product.h"

void add_seller_node(seller* head, string name, string username, string password, string address, int phone)
{
	// insert it to the end of list
	seller* curr = new seller();
	curr = head;
	if (head == NULL)
	{
		head->setname(name);
		head->setusername(username);
		head->setpassword(password);
		head->setaddress(address);
		head->setphone(phone);
		head->setwallet(0);
		head->next = NULL;
	}
	else
	{
		while (true)
		{
			if (curr->next == NULL)
			{
				curr->next = new seller();
				curr->next->setname(name);
				curr->next->setusername(username);
				curr->next->setpassword(password);
				curr->next->setaddress(address);
				curr->next->setphone(phone);
				curr->next->setwallet(0);
				curr->next->next = NULL;

				break;
			}
			curr = curr->next;
		}
	}
}
void add_buyer_node(buyer* head, string username, string password, string address, int phone) {
	// insert it to the end of list
	buyer* curr = new buyer();
	curr = head;
	if (head == NULL)
	{
		head->setusername(username);
		head->setpassword(password);
		head->setaddress(address);
		head->setphone(phone);
		head->setwallet(0);
		head->next = NULL;
	}
	else
	{
		while (true)
		{
			if (curr->next == NULL)
			{
				curr->next = new buyer();
				curr->next->setusername(username);
				curr->next->setpassword(password);
				curr->next->setaddress(address);
				curr->next->setphone(phone);
				curr->next->setwallet(0);
				curr->next->next = NULL;

				break;
			}
			curr = curr->next;
		}
	}
}
void add_product_node(product* head, string name, float price, int number, string description) {
	// insert it to the end of list
	product* curr = new product();
	curr = head;
	if (head == NULL)
	{
		head->setname(name);
		head->setprice(price);
		head->setnumber(number);
		head->setdescription(description);
		head->next = NULL;
	}
	else
	{
		while (true)
		{
			if (curr->next == NULL)
			{
				curr->next = new product();
				curr->next->setname(name);
				curr->next->setprice(price);
				curr->next->setnumber(number);
				curr->next->setdescription(description);
				curr->next->next = NULL;

				break;
			}
			curr = curr->next;
		}
	}
}
void delet_product_node(product* head) {

	cout << "enter the name of product you want to delet : " << endl;
	string deleted_product;
	cin >> deleted_product;

	product* temp;
	temp = new product();
	temp = head;

	product* prev = new product();

	while (temp != NULL)
	{
		int res;
		string name = temp->givename();
		res = name.compare(deleted_product);
		if (res == 0)
		{
			head = head->next;
			cout << "deleted !" << endl;
			return;
		}
		// Else Search for the key to be deleted,
		// keep track of the previous node as we
		// need to change 'prev->next' */
		else
		{
			while (temp != NULL && res != 0)
			{
				prev = temp;
				temp = temp->next;
			}
			// If key was not present in linked list
			if (temp == NULL)
				cout << "ERORR: there is no such a word in the list" << endl;
			return;

			// Unlink the node from linked list
			prev->next = temp->next;

			// Free memory
			delete temp;
		}
		temp = temp->next;
	}
	cout << "ERORR: there is no such a word in the list ! enter new order" << endl;
	return;
}
bool is_in_sellerlist(seller* head, string username) {
	seller* temp = new seller();
	temp = head;

	while (temp != NULL)
	{
		int res;
		res = temp->give_username().compare(username);
		if (res == 0)
		{
			return true;
		}
		temp = temp->next;
	}
	return false;
}
bool is_in_buyerlist(buyer* head, string username) {
	buyer* temp = new buyer();
	temp = head;

	while (temp != NULL)
	{
		int res;
		res = temp->give_username().compare(username);
		if (res == 0)
		{
			return true;
		}
		temp = temp->next;
	}
	return false;
}