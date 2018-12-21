//Author Kamaljot Saini
//Programmed on Windows 10 64 Bit

#include <iostream>
using namespace std;

int main()
{
	//Declare Local Variables
	int main_menu_choice = 0;
	int checkIn_subMenu_choice = 0;
	int checkIn_danceTeam_choice = 0;
	char return_mainMenu_choice = 'n';
	bool return_mainMenu_flag = false;
	

	/* Entire Application is in a Do-While loop
	to allow for us to return to main_menu
	from various segments of program */
	do
	{
		//Initialize Flag
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
					cout << "Return to Main Menu? Y/N" << endl;
					cout << "Choice: "; cin >> return_mainMenu_choice;

					//Fail Safe for User Choice

					//Clear the Screen (RISKY TO USE, SINCE DEFEATS PORTABILITY OF APPLICATION, SYSTEM COMMAND IS SYSTEM SPECIFIC)
					system("CLS");

					//Return to Main Menu
					//y = yes, n = no
					if (return_mainMenu_choice == 'y')
					{
						//Set Flag
						return_mainMenu_flag = true;
						break;
					}

					break;
				case 2:
					//Check-In ~ Dance Team ~ Tech Time
					break;
				case 3:
					//Check-In ~ Dance Team ~ Competition
					break;
				case 4:
					//Return to Check-In Sub Menu
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
				break;
			default:
				break;
			}

			break;
		case 2:
			//Schedule Main Menu
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