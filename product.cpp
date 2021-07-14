#include<iostream>
#include<string>
#include "product.h"

void product::setname(string Name) {
	name = Name;
}
void product::setprice(float Price) {
	price = Price;
}
void product::setnumber(int Number) {
	number = Number;
}
void product::setdescription(string Description) {
	description = Description;
}
void product::setscore(int Score) {
	score = Score;
}
void product::setcomments(string Comment) {
	int size = sizeof(comments); // the last index witch is empty
	comments[size] = new string();
	*(comments[size]) = Comment;
}
string product::givename() {
	return name;
}