#ifndef class_person_H
#define class_person_H
#include "person.h"

using namespace std;

class person {
private:
	string username;
	string password;
public:
	void setusername(string Username);
	void setpassword(string Password);
	string give_username();
};

#endif // !class_person_H