#include<iostream>
#include<string>
#include"person.h"

void person::setusername(string Username) {
	username = Username;
}
void person::setpassword(string Password) {
	password = Password;
}
string person::give_username() {
	return username;
}