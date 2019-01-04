//Author Kamaljot Saini
//Programmed on Windows 10 64 Bit

#include <iostream>
#include <string>
#include <iomanip> //for "setw()"
#include "Person.h"
#include "Node.cpp"
#include "Linked_List.h"

using namespace std;

int main()
{
	//TESTING TESTING TESTING TESTING TESTING TESTING TESTING TESTING 
	cout << "LINKED LIST TESTING" << endl;
	person object1("Kamal", "Male", "Non-Veg");
	person object2("Anmol", "Male", "Veg.");
	person object3("Gurjot", "Male", "Vegan");
	Linked_List<person> person_list;
	person getObjectTester;

	person_list.add(object1);
	person_list.add(object2);
	person_list.add(object3);

	person_list.view_LinkedList();

	person_list.remove(object2);

	cout << endl << endl << "AFTER REMOVAL:" << endl;
	person_list.view_LinkedList();

	getObjectTester = person_list.getEntry(object3);
	cout << endl << endl << "getObjectTester Below: " << endl;
	cout << getObjectTester << endl;

	cout << endl << endl << "AFTER CLEAR: " << endl;
	person_list.clear();




	system("PAUSE");
	return 0;
}