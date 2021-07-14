#include<iostream>
#include<string>
#include "linkedlist.h"

void add_seller_node(seller* head,string name, string username,string password,string address,int phone)
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