#include<iostream>
#include<string>
#include "product.h"

product::setname(string Name) {
	name = Name;
}
product::setprice(float Price) {
	price = Price;
}
product::setnumber(int Number) {
	number = Number;
}
product::setdescription(string Description) {
	description = Description;
}
product::setscore(int Score) {
	score = Score;
}
product::setcomments(string Comment) {
	int size = sizeof(comments); // the last index witch is empty
	comments[size] = new string();
	comments[size] = Comment;
}