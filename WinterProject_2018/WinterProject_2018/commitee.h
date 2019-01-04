#pragma once
#ifndef COMMITEE_H
#define COMMITEE_H

#include "volunteer.h"
#include "Person.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class commitee : public person {

private:
	string role;
	string responsibility;
public:
	// DEFAULT CONSTRUCTOR
	commitee();
	//CONSTRUCTOR
	commitee(string newname, string newgender, string newdiet, string newrole, string newrespon);
	//assigns the value to the role of the commitee member
	void setRole(string newRole);
	//returns the role of the commitee membet
	string getRole() const;
	//sets the responsibility e.i if liason
	void setResponsibility(string newEntry);

	string getResponsibility()  const;
};
ostream& operator <<(ostream& out, const commitee &outputObject) {
	out << "Name: " << outputObject.getName() << std::endl;
	out << "Role : " << outputObject.getRole() << std::endl;
	out << "Responsibility: " << outputObject.getResponsibility() << std::endl;
	out << "Gender: " << outputObject.getGender() << std::endl;
	out << "Dietary: " << outputObject.getdietPref() << std::endl;
	return out;
}

commitee::commitee() {
	role = "NOT ASSIGNED";
	responsibility = "NOT ASSIGNED";
}

inline commitee::commitee(string newname, string newgender, string newdiet, string newrole, string newrespon)
{
	setName(newname);
	setGender(newgender);
	setDietPref(newdiet);
	setRole(newrole);
	setResponsibility(newrespon);
}
void commitee::setRole(string newRole) {
	role = newRole;
}
void commitee::setResponsibility(string newEntry)
{
	responsibility = newEntry;
}
 string commitee::getResponsibility() const
{
	return responsibility;
}
string commitee::getRole() const {
	return role;
}
#endif
