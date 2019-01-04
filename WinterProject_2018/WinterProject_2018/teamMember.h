#ifndef TEAMMEMBER_H
#define TEAMMEBER_H

#include "Person.h";
#include <iostream>
#include <string>

using namespace std;

class teamMember : public person {

private:
	std::string teamName;
public:
	// initiaizes the team name
	void setTeamName(std::string newTeamName) {
		teamName = newTeamName;
	}
	// returns team Name
	string getTeamName() {
		return teamName;
	}
	teamMember();
	teamMember(string name, string gender, string diet, string teamName);
};
teamMember::teamMember() {
	teamName = "Not Assigned";
}
teamMember::teamMember(string name, string gender, string diet, string teamName) {
	setName(name);
	setGender(gender);
	setDietPref(diet);
	setTeamName(teamName);
}
std::ostream& operator << (std::ostream& out, const teamMember &outputObject) {
	out << "Name: " << outputObject.getName() << std::endl;
	out << "Team Name: " << outputObject.getTeamName() << std::endl;
	out << "Gender: " << outputObject.getGender() << std::endl;
	out << "Dietary: " << outputObject.getdietPref() << std::endl;
	return out;
}

#endif
