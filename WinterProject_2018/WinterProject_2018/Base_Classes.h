#pragma once

#ifndef Base_Classes_H
#define Base_Classes_H

#include <iostream>


using namespace std;

class person {

	private:
		string name;
		string gender;
		string dietPref;
	public:
		void setName(string);
		void setGender(string);
		void setDietPref(string);
		person() {
			name = "n/a";
			gender = "n/a";
			dietPref = "n/a";
		}
		person(string n, string g, string d) {
			name = n;
			gender = g;
			dietPref = d;
		}

		bool operator < (const person & other) const;
		bool operator > (const person & other) const;
		bool operator ==(const person & other) const;
		
		string getName() {
			return name;
		}
		string getGender() {
			return gender;
		}

		string dietPref() {
			return dietPref;
		}
};
void person::setName(string n) {
	name = n;
}
void person::setDietPref(string diet) {
	dietPref = diet;
}
void person::getGender(string iden) {
	gender = iden;
}

// compares the name of two perosn objects and returns true if it
bool person::operator < (const person & other) const {
	return this->name < other->name;
}
// the inverse of the one above
bool person::operator > (const person & other) const {
	return this->name > other->name;
}
// return true if the names match
bool person::operator ==(const person & other) const {
	return ((this->name == other->name) && (this->gender == other->name))

}

#endif