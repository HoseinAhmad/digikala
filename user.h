#ifndef class_user_H
#define class_user_H
#include "user.h"
#include "person.h"

using namespace std;

class user : public person {
private:
	float wallet;
	string address;
	int phone;
public:
	void setwallet(float Wallet);
	void setaddress(string Address);
	void setphone(int Phone);
	string give_username();
};

#endif // !class_user_H
