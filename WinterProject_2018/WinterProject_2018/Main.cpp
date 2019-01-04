//Author Kamaljot Saini
//Programmed on Windows 10 64 Bit

#include <iostream>
#include <string>
#include <iomanip> //for "setw()"
#include "Person.h"
#include "Node.cpp"
#include "volunteer.h"
#include "Linked_List.h"

using namespace std;


int main()
{
	//TESTING TESTING TESTING TESTING TESTING TESTING TESTING TESTING 
	person object1("Kamal", "Male", "Non-Veg");

	person object2("Anmol", "Male", "Veg");
	Linked_List<person> person_list;
	


	person_list.add(object1);
	person_list.add(object2);

	person_list.view_LinkedList();

	cout << object2.getName() << endl;

	cout << "LINKED LIST TESTING" << endl;


	system("PAUSE");
	return 0;
}