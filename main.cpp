#include<iostream>
#include<string>

#include "person.h"
#include "admin.h"
#include "user.h"
#include "buyer.h"
#include "seller.h"
#include "product.h"
#include "discoundCode.h"
#include "linkedlist.h"

using namespace std;

void main()
{
	// write a tutorial and description of how to user this program
	cout << "************ DIGIKALA ************" << endl;
	cout << endl;
	cout << "Enter the command number according to the number of each command in the program guide \n\n\ " << endl;

	seller* head_of_sellers_list = new seller();
	buyer* head_of_buyers_list = new buyer();              // there is 3 linked list of nodes, made of classes ( sellers, buyers, product)
	product* head_of_products_list = new product();


	// main loop of program
	while (true)
	{
		// 1-signup  2-login  3-close the program ?
		cout << "1- signup \n2-login \n3-exit" << endl;
		int order;
		cin >> order;

		if (order == 1)
		{
			while (true)
			{
				// get role user and pass
				cout << "write <return> if you want to back to preveus step;
				cout << "enter your role" << endl;
				string role;
				cin >> role;
				if (strcmp(role, "return") == 0)	continue;
				cout << "enter your username \n";
				string username;
				cin >> username;
				if (strcmp(username, "return") == 0)	continue;
				cout << "enter your password \n";
				string password;
				cin >> password;
				if (strcmp(password, "return") == 0)	continue;
				cout << "enter your address \n";
				string address;
				cin >> address;
				if (strcmp(password, "return") == 0)	continue;
				cout << "enter your phone \n";
				string phone;
				cin >> phone;
				if (strcmp(password, "return") == 0)	continue;

				//  check the role is corect and if there is a simillar user in the list or not:
				if (strcmp(role, "buyer") == 0)
				{
					if (is_in_list(head_of_buyers_list, username)) {
						cout << "the username is invalid try another \n"
							continue;
					}
					else {
						add_buyer_node(head_of_buyers_list, username, password, address, <int>phone);
						cout << "you signed up seccesfully \n";
						break;
					}
				}
				else if (strcmp(role, "seller") == 0)
				{
					if (is_in_list(head_of_sellers_list, username)) {
						cout << "the username is invalid try another \n";
						continue;
					}
					else {
						add_seller_node(head_of_sellers_list, username, password, address, <int>phone);
						cout << "you signed up seccesfully \n";
						break;
					}
				}
				else {
					cout << "the role you entred is incorect try again:\n";
					continue;
				}
			}
		}
		if (order == 2)
		{
			//  What is your type of user? 1- admin 2- buyer 3-seller 4-close the program
			if (1)
			{
				// 1) get username and pass
				// if user entered exit then break;
				// else:
				// 2) check user pass of admin
				if (/*there is no matches*/) {
					//print ERROR : username or password is inccorect 
					continue;
				}
				// 3) print you loged in sucssesfully
				while (true) // loop of admin
				{
					// 4) show the list of options with number assigned to them
					// 5) ask what does user want and get the number of it
					// 6) write the ifs and do the order of each if with a function  
					
				}
			}
			if (2)
			{
				// 1) get username and pass
				// // if user entered exit then break;
				// else:
				// 2) check user and pass of buyers in the list
				if (/*there is no matches*/) {
					//print ERROR : username or password is inccorect 
					continue;
				}
				// 3) print you loged in sucssesfully
				while (true) // loop of buyer
				{
					// 4) show the list of options with number assigned to them
					// 5) ask what does user want and get the number of it
					// 6) write the ifs and do the order of each if with a function  

				}
			}
			if (3)
			{
				// 1) get username and pass
				// // if user entered exit then break;
				// else:
				// 2) check the list, if there is user with with these user and pass
				if (/*there is*/) {
					//print ERROR : username or password is inccorect 
					continue;
				}
				// 3) print you loged in sucssesfully
				while (true) // loop of seller
				{
					// 4) show the list of options with number assigned to them
					// 5) ask what does user want and get the number of it
					// 6) write the ifs and do the order of each if with a function 
					   // in function of adding product add products to linked list of products too

				}
			}
			if (4) break;
		}
		if (order == 3) break;	
		cout << "enterd number is invalid pleat try again " << endl;
	}
	return;
}