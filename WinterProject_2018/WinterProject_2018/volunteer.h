#ifndef VOLUNTEER_H
#define VOLUNTEER_H

#include "Person.h"
#include<iostream>
#include <string>
#include <vector>

using namespace std;

class volunteer: public person {
	
	private:
		std::vector <std::string> responsibilities;
	public:

		volunteer();

		//will return the responsibilities vector
		std::vector<std::string> getResponiblities();

		//will display all responsibilites within the vector
		void viewResponsibilities() const;

		//allows user to add one responsibility
		void addResponsibility();

		// deletes a the responsiblity depending on the index given by the user
		void deleteResponsibity(int index);

		//sub area allowing you to do all changes in one place
		void editResponsibilties(volunteer selected);

		//by entering a index number you can edit the entrance in that field
		void changeResponsibility(int index);

};

volunteer::volunteer()
{
}

vector<string> volunteer::getResponiblities()
{
	return  responsibilities;
}

void volunteer::viewResponsibilities() const
{
	cout << "Below are all Responsibilities of the Volunteer:" << endl;
	int j = responsibilities.size();
	for (int n = 0; n < j; n++) {
		cout << n + 1 << "\t" << responsibilities[n] << endl;
	}
}

void volunteer::deleteResponsibity(int index)
{
	responsibilities.erase(responsibilities.begin() + index - 1);
}

void volunteer::editResponsibilties(volunteer selected)
{
	int choice = 0;
	while (choice != 4) {
		cout << "Select an action\n"
			<< "1- To add a Responsibility\n"
			<< "2- To delete a Responsibility\n"
			<< "3- To Edit a Specific Responbility\n"
			<< "4- Quit";
		cin >> choice;
		switch (choice) {
		case 1: selected.addResponsibility();
			break;
		case 2: { selected.viewResponsibilities();
			cout << "Please enter the index number of the Responsibility you'd like to erase:";
			int ind;
			cin >> ind;
			selected.deleteResponsibity(ind);
		}
				break;
		case 3: {
			cout << "Please enter the index number of the Responsibility you'd like to EDIT:";
			int ind;
			cin >> ind;
			selected.changeResponsibility(ind);
		}
				break;
		case 4: break;
		}

	}
}
void volunteer::changeResponsibility(int index){
	string input;
	cout << "Please enter the responsibility you'd like to assign:\n";
	getline(cin, input);
	responsibilities.insert(responsibilities.begin() + index - 1, input);

}
void volunteer::addResponsibility()
{
	string input;
	cout << "Please enter the responsibility you'd like to assign:\n";
	getline(cin, input);
	responsibilities.push_back(input);
}
ostream& operator << (ostream& out, const volunteer &outputObject){
	out << "Name: " << outputObject.getName() << endl;
	out << "Gender: " << outputObject.getGender() << endl;
	out << "Dietary: " << outputObject.getdietPref() << endl;

	outputObject.viewResponsibilities();
	return out;
}
#endif