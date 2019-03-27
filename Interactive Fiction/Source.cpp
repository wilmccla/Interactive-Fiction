#include<iostream>
#include<string>
#include <thread>
#include<windows.h>

using namespace std;

// Declaring Global Variables
int Karma = 0;
int Choice = 0;
string UserInput;

// Declaring Functions
void Beginnings();
void GetTextFromUser();
void GetNumbersFromUser();

int main()
{
	Beginnings();
	return 0;
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
		std::this_thread::sleep_for(std::chrono::milliseconds(40));
	}
	Sleep(1000);
}


void Beginnings()
{
	type_text("Hello, Captain.\n");
	type_text("How was your sleep?\n");
	cout << "\n1 - 'What?'\n";
	cout << "2 - 'Good Morning?'\n";
	cout << "3 - 'Where Am I?'\n";
	GetNumbersFromUser();
	switch(Choice)
	{
	case 1 :
		type_text("You seem to have not regained your memories yet. This is a common side effect to cyrosleep.");
		break;

	case 2 :
		type_text("Cyrosleep is not always the most comfortable of procedures. I am sorry if it was unsettling.");
		break;

	case 3 :
		type_text("You are on a ship. I have just woken you from cyrosleep.");
	}

	system("pause");
	return;
}

void GetTextFromUser()
{

}

void GetNumbersFromUser()
{
	cin >> Choice;
	return;
}