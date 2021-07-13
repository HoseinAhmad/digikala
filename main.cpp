#include<iostream>
#include<string>

#include "person.h"
#include "admin.h"
#include "user.h"
#include "buyer.h"
#include "seller.h"
#include "product.h"
#include "discoundCode.h"

using namespace std;

void main()
{
	// 1) seller* head_of_sellers_list
	// 2) buyer* head_of_buyers_list          // there is 3 linked list of nodes, made of classes ( sellers, buyers, product)
	// 3) product* head_of_products_list

	// main loop of program
	while (true)
	{
		// 1-signup  2-login  3-close the program ?

		if (1)
		{
			while (true)
			{
				// 1) enter your role
				// 2) enter your username
				// 3) enter your password
				// if in each step user entered exit then break;
				// else:
				//  check if there is a simillar user or not:
				if (/*not*/) {
					// add a node with these informations to the Relevant list
					// print you signed up seccesfully
					break;
				}
				else {
					// enter another user 
					continue;
				}
			}
		}
		if (2)
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
		if (3) break;	
	}
	return;
}