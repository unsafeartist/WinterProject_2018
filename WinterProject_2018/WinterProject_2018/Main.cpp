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

	person_list.add(object1);
	person_list.add(object2);
	person_list.add(object3);

	person_list.view_LinkedList();

	


	system("PAUSE");
	return 0;
}