#ifndef _person_
#define _person_

#include <string>

class person {

private:
	std::string name;
	std::string gender;
	std::string dietPref;
public:

	person();
	person(std::string n, std::string g, std::string d);

	void setName(std::string newnameEntry);
	void setGender(std::string newdietitem);
	void setDietPref(std::string newiden);

	bool operator ==(const person & other) const;
	bool operator > (const person & other) const;
	bool operator < (const person & other) const;

	std::string getName() const;
	std::string getGender() const;
	std::string getdietPref() const;
};


person::person() {
	name = "n/a";
	gender = "n/a";
	dietPref = "n/a";
}

person::person(std::string n, std::string g, std::string d) {
	name = n;
	gender = g;
	dietPref = d;
}

void person::setName(std::string newnameEntry) {
	name = newnameEntry;
}
void person::setDietPref(std::string newdietitem) {
	dietPref = newdietitem;
}
void person::setGender(std::string newiden) {
	gender = newiden;
}

std::string person::getName() const {
	return name;
}
std::string person::getGender() const {
	return gender;
}

std::string person::getdietPref() const {
	return dietPref;
}

// compares the name of two perosn objects and returns true if it
bool person::operator < (const person & other) const {
	return this->name < other.name;
	return this->name < other.name;
}
// the inverse of the one above
bool person::operator > (const person & other) const {
	return this->name > other.name;
	return this->name > other.name;
}
// return true if the names match
bool person::operator ==(const person & other) const {
	return ((this->name == other.name) && (this->gender == other.gender) && (this->dietPref == other.dietPref));
}

std::ostream& operator << (std::ostream& out, const person &outputObject) {
	out << "Name: " << outputObject.getName() << std::endl;
	out << "Gender: " << outputObject.getGender() << std::endl;
	out << "Dietary: " << outputObject.getdietPref() << std::endl;
	return out;
}

#endif