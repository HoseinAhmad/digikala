#ifndef class_buyer_H
#define class_buyer_H
#include"user.h"
#include"buyer.h"

using namespace std;

class buyer :public user {

public:
	buyer* next;
	string give_Username();
};

#endif // !class_buyer