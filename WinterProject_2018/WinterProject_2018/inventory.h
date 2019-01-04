
#ifndef INVENTORY_H
#define INVENTORY_H


#include <iostream>
#include <string

using namespace std;

class inventory {

private:
	string itemname;
	int itemcount;
public:
	void setItemName(string newname) {
		itemname = newname;
	}
	void setItemCount(int count) {
		itemcount = count;
	}
	string getItemName();
	int getItemCount();
};


string inventory::getItemName(){
	return itemname;
}
int inventory::getItemCount() {
	return itemcount;
}


















#endif