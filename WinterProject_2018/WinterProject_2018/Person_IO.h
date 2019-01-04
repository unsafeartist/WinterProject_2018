#ifndef PERSON_IO_H
#define PERSON_IO_H
#include <fstream>
#include <string>
#include <cstdlib>
#include "Linked_List.h"
#include "Person.h"

using namespace std;
//Function inputs all information of persons listed in a text file 
//in order of name, gender, diet preference
void inputPerson(string inputTextFile, Linked_List<person> &inputLinkedList) {
	ifstream ifs;
	ifs.open(inputTextFile);
	/*Ensure file opens properly.*/
	if (ifs.fail()) {
		std::cout << "Input Text File open failed.\n";
		exit(1);
	}
	string name, gender, dietPref; //Temporary holders for input from txt file
	person *inputPerson = nullptr;
	//Loop to input each person's information until end of file
	//Input temporarily in variables and dynamically allocate to person class
	//Add person to linked list
	while(!ifs.eof()) {
		ifs >> name >> gender >> dietPref;
		inputPerson = new person(name, gender, dietPref);
		inputLinkedList.add(*inputPerson);
	}
	//Delete dynamically allocated person class
	delete inputPerson;
}

#endif 