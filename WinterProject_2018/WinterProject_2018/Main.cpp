//Author Kamaljot Saini
//Programmed on Windows 10 64 Bit

#include <iostream>
#include <string>
#include <iomanip> //for "setw()"
#include "Base_Classes.h"
#include "Node.cpp"
#include "Linked_List.cpp"
using namespace std;

int main()
{
	//TESTING TESTING TESTING TESTING TESTING TESTING TESTING TESTING 
	person object1("Kamal is a HOE", "Janani", "Booty");

	cout << object1.getName() << endl;

	Linked_List<person> list;

	cout << "LINKED LIST TESTING" << endl;
	list.add(object1);
	list.view_LinkedList();



	system("PAUSE");
	return 0;
}