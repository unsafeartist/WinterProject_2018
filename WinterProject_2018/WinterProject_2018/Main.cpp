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
	person getObjectTester;

	person_list.add(object1);
	person_list.add(object2);
	person_list.add(object3);

	person_list.view_LinkedList();





	//Declare Local Variables
	int main_menu_choice = 0;
	int checkIn_subMenu_choice = 0;
	int checkIn_danceTeam_choice = 0;
	int schedule_mainMenu_choice = 0;
	int schedule_subMenu_choice = 0;
	char return_mainMenu_choice = 'n';
	char return_checkIn_SubMenu_choice = 'n';
	char return_schedule_subMenu_choice = 'n';
	bool return_mainMenu_flag = false;
	bool return_checkIn_subMenu_flag = false;
	bool return_schedule_subMenu_flag = false;


	/* Entire Application is in a Do-While loop
	to allow for us to return to main_menu
	from various segments of program */
	do
	{
		//Reset Flags and Variables (In case of loop)
		return_mainMenu_flag = false;

		//Display Main Menu
		cout << "***Main Menu***" << endl;
		cout << "1) Check-In" << endl;
		cout << "2) Schedule" << endl;
		cout << "3) Exit" << endl << endl;
		cout << "Choice: "; cin >> main_menu_choice; cout << endl;

		//Fail Safe for User Choice

		//Clear the Screen (RISKY TO USE, SINCE DEFEATS PORTABILITY OF APPLICATION, SYSTEM COMMAND IS SYSTEM SPECIFIC)
		system("CLS");

		//Insert User Choice Within Switch Statement
		switch (main_menu_choice)
		{
		case 1:
			/*Entire Check-In Sub Menu is within Do-While loop
			to allow us to return to the sub-menu if need be
			by altering the "return_checkIn_subMenu_flag" */
			do
			{
				//Reset Flags and Variables (In case of loop)
				return_checkIn_subMenu_flag = false;
				return_checkIn_SubMenu_choice = 'n';

				//Display Check-In Sub-Menu
				cout << "---------Check-In Sub-Menu---------" << endl;
				cout << "1) Dance Team" << endl;
				cout << "2) Committee" << endl;
				cout << "3) Main Menu" << endl << endl;
				cout << "Choice: "; cin >> checkIn_subMenu_choice; cout << endl;

				//Fail Safe for User Choice

				//Clear the Screen (RISKY TO USE, SINCE DEFEATS PORTABILITY OF APPLICATION, SYSTEM COMMAND IS SYSTEM SPECIFIC)
				system("CLS");

				//Switch for Check-In Sub Menu
				switch (checkIn_subMenu_choice)
				{
				case 1:
					//Dance Team Check In Menu
					cout << "Check-In/Dance Team" << endl;
					cout << "1) Mixer" << endl;
					cout << "2) Tech Time" << endl;
					cout << "3) Competition" << endl;
					cout << "4) Return to Check-In Sub-Menu" << endl << endl;
					cout << "Choice: "; cin >> checkIn_danceTeam_choice; cout << endl;

					//Fail Safe for User Choice

					//Clear the Screen (RISKY TO USE, SINCE DEFEATS PORTABILITY OF APPLICATION, SYSTEM COMMAND IS SYSTEM SPECIFIC)
					system("CLS");

					//Switch for Check-In/Dance Team/Inner Sub-Menu
					switch (checkIn_danceTeam_choice)
					{
					case 1:
						//Check-In ~ Dance Team ~ Mixer
						cout << "Check-In ~ Dance Team ~ Mixer" << endl << endl;
						cout << "Select Team: " << endl;
						cout << " 1) Display teams here... We can sort them alphabetically if we know how" << endl << endl;
						cout << "Return to Check-In Sub-Menu? Y/N" << endl;
						cout << "Choice: "; cin >> return_checkIn_SubMenu_choice;

						//Fail Safe for User Choice

						//Clear the Screen (RISKY TO USE, SINCE DEFEATS PORTABILITY OF APPLICATION, SYSTEM COMMAND IS SYSTEM SPECIFIC)
						system("CLS");

						//Return to Check-In Sub-Menu
						//y = yes, n = no
						if (return_checkIn_SubMenu_choice == 'y')
						{
							//Set Flag
							return_checkIn_subMenu_flag = true;
							break;
						}

						break;
					case 2:
						//Check-In ~ Dance Team ~ Tech Time
						cout << "Check-In ~ Dance Team ~ Tech Time" << endl << endl;
						cout << "Select Team: " << endl;
						cout << " 1) Display teams here... We can sort them alphabetically if we know how" << endl << endl;
						cout << "Return to Check-In Sub-Menu? Y/N" << endl;
						cout << "Choice: "; cin >> return_checkIn_SubMenu_choice;

						//Fail Safe for User Choice

						//Clear the Screen (RISKY TO USE, SINCE DEFEATS PORTABILITY OF APPLICATION, SYSTEM COMMAND IS SYSTEM SPECIFIC)
						system("CLS");

						//Return to Check-In Sub-Menu
						//y = yes, n = no
						if (return_checkIn_SubMenu_choice == 'y')
						{
							//Set Flag
							return_checkIn_subMenu_flag = true;
							break;
						}

						break;
					case 3:
						//Check-In ~ Dance Team ~ Competition
						cout << "Check-In ~ Dance Team ~ Competition" << endl << endl;
						cout << "Select Team: " << endl;
						cout << " 1) Display teams here... We can sort them alphabetically if we know how" << endl << endl;
						cout << "Return to Check-In Sub-Menu? Y/N" << endl;
						cout << "Choice: "; cin >> return_checkIn_SubMenu_choice;

						//Fail Safe for User Choice

						//Clear the Screen (RISKY TO USE, SINCE DEFEATS PORTABILITY OF APPLICATION, SYSTEM COMMAND IS SYSTEM SPECIFIC)
						system("CLS");

						//Return to Check-In Sub-Menu
						//y = yes, n = no
						if (return_checkIn_SubMenu_choice == 'y')
						{
							//Set Flag
							return_checkIn_subMenu_flag = true;
							break;
						}

						break;
					case 4:
						//Return to Check-In Sub Menu
						return_checkIn_subMenu_flag = true;

						break;
					default:
						break;
					}
					break;
				case 2:
					//Committee Check In Menu
					break;
				case 3:
					//Return to Main Menu

					//Set Flag
					return_mainMenu_flag = true;

					break;
				default:
					break;
				}
			} while (return_checkIn_subMenu_flag == true);

			break;
		case 2:
			//Schedule Main Menu

			//The below display is hardcoded for demonstration purposes
			cout << "---------Schedule---------" << endl << endl;
			cout << setw(9) << "Time " << setw(20) << "Event" << setw(30) << "Responsibility" << endl;
			cout << setw(9) << "01:00 PM" << setw(20) << "Lunch" << setw(30) << "Person 1, Person 2" << endl;
			cout << setw(9) << "02:30 PM" << setw(20) << "Shuttle to Hotel" << setw(30) << "Driver" << endl << endl;
			cout << "Menu: " << endl;
			cout << "1) Edit Schedule" << endl;
			cout << "2) Return to Main Menu" << endl << endl;
			cout << "Choice: "; cin >> schedule_mainMenu_choice;

			//Fail Safe for User Choice

			//Clear the Screen (RISKY TO USE, SINCE DEFEATS PORTABILITY OF APPLICATION, SYSTEM COMMAND IS SYSTEM SPECIFIC)
			system("CLS");

			//Schedule Sub Menu Switch
			switch (schedule_mainMenu_choice)
			{
			case 1:
				//Schedule Sub-Menu in Do While Loop
				//to allow to return to sub-menu with flag
				do
				{
					//Reset Flags & Variables
					return_schedule_subMenu_flag = false;

					//Edit Schedule Sub-Menu
					cout << "***Edit Schedule Sub-Menu***" << endl;
					cout << "1) Add to Schedule" << endl;
					cout << "2) Delete from Schedule" << endl;
					cout << "3) Edit Schedule Entry" << endl;
					cout << "4) Return to Main Menu" << endl << endl;
					cout << "Choice: "; cin >> schedule_subMenu_choice;

					//Fail Safe for User Choice

					//Clear the Screen (RISKY TO USE, SINCE DEFEATS PORTABILITY OF APPLICATION, SYSTEM COMMAND IS SYSTEM SPECIFIC)
					system("CLS");

					//Schedule Sub-Menu Switch
					switch (schedule_subMenu_choice)
					{
					case 1:

						//Add to Schedule
						cout << "***Add to Schedule***" << endl;
						cout << "Time: " << endl;
						cout << "Event: " << endl;
						cout << "Responsibility: " << endl << endl;
						cout << "Return to Schedule Sub-Menu? Y/N" << endl;
						cout << "Choice: "; cin >> return_schedule_subMenu_choice;

						//Fail Safe for User Choice

						//Clear the Screen (RISKY TO USE, SINCE DEFEATS PORTABILITY OF APPLICATION, SYSTEM COMMAND IS SYSTEM SPECIFIC)
						system("CLS");

						//Return to Check-In Sub-Menu
						//y = yes, n = no
						if (return_schedule_subMenu_choice == 'y')
						{
							//Set Flag
							return_schedule_subMenu_flag = true;
							break;
						}

						break;
					case 2:
						//Delete from Schedule
						cout << "---------Delete from Schedule---------" << endl << endl;
						cout << "Select Entry to Delete: " << endl;
						cout << "**Display list of schedule entries here in order of time and allow user to choose, then confirm their decision" << endl << endl;
						cout << "Return to Schedule Sub-Menu? Y/N" << endl;
						cout << "Choice: "; cin >> return_schedule_subMenu_choice;

						//Fail Safe for User Choice

						//Clear the Screen (RISKY TO USE, SINCE DEFEATS PORTABILITY OF APPLICATION, SYSTEM COMMAND IS SYSTEM SPECIFIC)
						system("CLS");

						//Return to Check-In Sub-Menu
						//y = yes, n = no
						if (return_schedule_subMenu_choice == 'y')
						{
							//Set Flag
							return_schedule_subMenu_flag = true;
							break;
						}
						break;
					case 3:
						//Edit Schedule Entry
						cout << "---------Edit Schedule Entry---------" << endl << endl;
						cout << "**Display schedule here and ask user which entry they would like to edit" << endl;
						cout << "**After they make their choice a screen like the below will appear" << endl;
						cout << "                  ***Edit Entry Mode***    " << endl;
						cout << "                  Old Entry:               " << endl;
						cout << "                        Time: 12:30PM " << endl;
						cout << "                        Event: Shuttle  " << endl;
						cout << "                        Responsibility: Person 1, Person 2" << endl << endl;
						cout << "                  New Entry:          " << endl;
						cout << "                        Time: " << endl;
						cout << "                        Event: " << endl;
						cout << "                        Responsibility: " << endl << endl;
						cout << "Return to Schedule Sub-Menu? Y/N" << endl;
						cout << "Choice: "; cin >> return_schedule_subMenu_choice;

						//Fail Safe for User Choice

						//Clear the Screen (RISKY TO USE, SINCE DEFEATS PORTABILITY OF APPLICATION, SYSTEM COMMAND IS SYSTEM SPECIFIC)
						system("CLS");

						//Return to Check-In Sub-Menu
						//y = yes, n = no
						if (return_schedule_subMenu_choice == 'y')
						{
							//Set Flag
							return_schedule_subMenu_flag = true;
							break;
						}

						break;
					case 4:
						//Return to Main Menu
						return_mainMenu_flag = true;
						break;
					default:
						break;
					}

				} while (return_schedule_subMenu_flag == true);

				break;
			case 2:
				//Return to Main Menu
				return_mainMenu_flag = true;
				break;
			default:
				break;
			}

			break;
		case 3:
			//Exit Program from Main Menu
			break;
		default:
			break;
		}

	} while (return_mainMenu_flag == true); //End Application Do-While Loop

	//Display Exit Message
	cout << "PROGRAM TERMINATED..." << endl << endl;

	system("PAUSE");
	return 0;
}