#include <iostream>
using namespace std;


void initialGreeting()
{
	cout << "                      █ █ █ █▀▀ █   █▀▀ █▀█ █▄ ▄█ █▀▀  ▀█▀ █▀█" << endl;
	cout << "                      ▀▄▀▄▀ ██▄ █▄▄ █▄▄ █▄█ █ ▀ █ ██▄   █  █▄█" << endl;

	cout << "█▄▄ █   █▀▀ ▀█▀ █▀▀ █▄█ █   █▀▀ ▀▄▀ █▀▀ █▀█ █▀▄ █▀▀   █▄▄ █▀█ █▀▀ ▄▀▄ █▄▀ █▀▀ █▀█ █▀▀ █" << endl;
	cout << "█▄█ █▄▄ ██▄  █  █▄▄ █ █ █▄▄ ██▄  █  █▄▄ █▄█ █▄▀ ██▄   █▄█ █▀▄ ██▄ █▀█ █ █ ██▄ █▀▄ ▄██ ▄" << endl;
	cout << "                                      Copyright©" << endl;
}

void rules()
{

}

void showGoodbyeMessage()
{

}

int enterUserInput()
{
	int userInput;
	cin >> userInput;
	return userInput;
}

bool mainMenu()
{
	initialGreeting();
	cout << "\n|---------MENU----------|\n";
	cout << "1. Play against AI\n";
	cout << "2. Play with another player\n";
	cout << "3. Rules\n";
	cout << "9. Exit\n";
	cout << "Enter option from the menu by typing a number: ";
	int userInput = enterUserInput();
	switch (userInput)
	{
	case 1:
		break;
	case 2:
		break;
	case 3: 
		// rules();
		break;
	case 9:
		// showGoodbyeMessage();
		return false;
		break;

	default: cout << "\n Please enter a valid input!\n"; break;
	}
	return true;
}

int main()
{
	system("chcp 65001");
	while (mainMenu());
}
