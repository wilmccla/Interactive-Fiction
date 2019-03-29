#include<iostream>
#include<string>
#include <thread>
#include<windows.h>
#include<stdlib.h>

using namespace std;

// Declaring Global Variables
int Karma = 0;
int Choice1 = 0;
int Choice2 = 0;
int Tracker;
string UserName;
string UserInput;
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

// Declaring Functions
void Beginnings();
void GetNameFromUser();
void GetNumbersFromUser(int Tracker);
void GetNumbersFromUser1();
void GetNumbersFromUser2();
void type_text(const std::string& text);
void GrowShip();
void CryoShip();
void ExploreShip();

int main()
{
	Beginnings();
}

void Beginnings() 
{
	type_text("Hello, Captain.\n");
	type_text("How was your sleep?\n\n");

	GetNumbersFromUser(Tracker = 0);

	type_text("\nMy logs on you have become corrupted. Let us take this time to update them.");
	type_text("\nPlease Enter your name:  ");

	GetNameFromUser();

	type_text("Welcome, Captain " + UserName + " to the S.S. Odyssey\n");
	type_text("You were sent from Earth 678 years ago to find another habitable planet.\n");
	type_text("The journey hasn't had much results, until recently.\n");
	type_text("Scans have picked up a planet that fits the category.\n");
	type_text("However, the ship's fusion core suffered damage from a critical failure, and won't be able to last until arrival.\n");
	type_text("In an effort to reduce power consumption, I've begun the process of waking up the passengers so we can unpower their pods.\n");
	type_text("However, the ship was not prepared for such a journey with conscious passengers, and the food reserves won't last.\n");
	type_text("As the captain, you have the authority and responsibility to decide for the passengers.\n");
	type_text("What do you want to do?\n\n");

	GetNumbersFromUser(Tracker = 1);

	system("pause");
	return;
}

void type_text(const std::string& text)
{
	// loop through each character in the text
	for (std::size_t i = 0; i < text.size(); ++i)
	{
		// output one character
		// flush to make sure the output is not delayed
		std::cout << text[i] << std::flush;

		// sleep 60 milliseconds
		std::this_thread::sleep_for(std::chrono::milliseconds(30));
	}
	Sleep(800);
}

void GetNameFromUser()
{
	cin >> UserName;
	return;
}

void GetNumbersFromUser(int Tracker)
{
	if (Tracker == 0)
	{
		SetConsoleTextAttribute(hConsole, 14);
		cout << "1 - 'What?'\n";
		cout << "2 - 'Good Morning?'\n";
		cout << "3 - 'Where Am I?'\n\n";
		SetConsoleTextAttribute(hConsole, 15);

		cin >> Choice1;
		switch (Choice1)
		{
		case 1:
			type_text("\nIt seems you have yet to recover your memories. This is a common side effect to cryosleep.");
			break;

		case 2:
			type_text("\nCryosleep is not always the most comfortable of procedures. I am sorry if it was unsettling.");
			break;

		case 3:
			type_text("\nYou are on a ship. I have just woken you from cryosleep.");
		}
		Tracker++;
		return;
	}
	if (Tracker == 1) {

		SetConsoleTextAttribute(hConsole, 14);
		cout << "1 - Convert different rooms in the ship for food growing. It will give us less resources when we arrive to the planet but will it matter if we can't get there alive?\n";
		cout << "2 - Leave half the passengers in cryosleep without powered support. Have our medical team keep tabs on them in case of issues. It will be a tedious, but necessary process.\n";
		cout << "3 - The food problem is a side effect of the power problem. We should scavenge any asteroid fields in hopes we find some kind of fuel for power.\n\n";
		SetConsoleTextAttribute(hConsole, 15);
		cin >> Choice2;
		switch (Choice2)
		{
		case 1:
			type_text("Very well, I will inform the passengers right away.");
			//GrowShip();
			break;

		case 2:
			type_text("A calculated risk. I will leave half the passengers in cryosleep, prioritizing the least productive.");
			//CryoShip();
			break;

		case 3:
			type_text("Very wise. I will begin local scans now.");
			//ExploreShip();
			break;
		}
		return;
	}
}

void GrowShip()
{
	SetConsoleTextAttribute(hConsole, 10);
	type_text("A few months have passed,");
}