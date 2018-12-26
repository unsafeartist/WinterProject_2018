//Author Kamaljot Saini
//Programmed on Windows 10 64 Bit

#include <iostream>
#include <string>
#include <iomanip> //for "setw()"
#include "Node.cpp"
#include "Linked_List.cpp"
using namespace std;

int main()
{
	//TESTING TESTING TESTING TESTING TESTING TESTING TESTING TESTING 


	//Declare Local Variables
	Node<string> number1;
	Node<string> number2;
	string string_test1, string_test2;
	Linked_List<string> list;
	

	number1.setItem("Kamaljot");
	number2.setItem("Saini");
	cout << number1.getNext() << endl;
	number1.setNext(&number2);
	
	cout << number1.getItem() << endl;
	cout << number2.getItem() << endl;
	cout << number1.getNext() << endl;

	cout << "LINKED LIST TESTING" << endl;
	list.add("David");
	list.add("Beckham");
	list.add("Junior");
	list.view_LinkedList();


	system("PAUSE");
	return 0;
}