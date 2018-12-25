//Author Kamaljot Saini
//Programmed on Windows 10 64 Bit

#include <iostream>
#include <string>
#include <iomanip> //for "setw()"
#include "Node.cpp"
using namespace std;

int main()
{
	//TESTING TESTING TESTING TESTING TESTING TESTING TESTING TESTING 


	//Declare Local Variables
	Node<string> number1;
	Node<string> number2;
	string string_test1, string_test2;

	number1.setItem("Kamaljot");
	number2.setItem("Saini");
	cout << number1.getNext() << endl;
	number1.setNext(&number2);
	
	cout << number1.getItem() << endl;
	cout << number2.getItem() << endl;
	cout << number1.getNext() << endl;

	system("PAUSE");
	return 0;
}