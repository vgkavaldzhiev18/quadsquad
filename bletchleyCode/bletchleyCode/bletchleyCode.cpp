#include <iostream>
#include <chrono>
#include <thread>
#include <stdlib.h>
#include <time.h>
using namespace std;

// DATA LAYER
void inputArr(int arr[])
{
	for	(int i = 0; i < 4; i++)
	{
		cin>>arr[i];
	}
}

void genArr(int arr[])
{
	for (int i = 0; i < 4; i++)
	{
		arr[i] = rand() % 7;
	}
}

void printSpaces(unsigned short int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << " ";
	}
}

int countGuessedNum(int arr1[], int arr2[], int br)
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (arr1[i] == arr2[j])
			{
				br++;
			}
		}	
	}
	return br;
}

int countGuessedNumAndPos(int arr1[], int arr2[], int br)
{
	
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (arr1[i] == arr2[j] && i == j)
			{
				br++;
			}
		}
	}
	return br;
}

int enterUserInput()
{
	int userInput;
	cin >> userInput;
	return userInput;
}

// PRESENTATION LAYER

void showGuessedNumAndPos(int* arr1, int br)
{
	int arr2[10];
	for (int i = 0; i < 13; i++)
	{
		cout << "Enter your numbers: ";
		inputArr(arr2);
		cout << "\nCount of guessed numbers and positions: ";
		cout << countGuessedNumAndPos(arr1, arr2, br);
		int count1 = countGuessedNumAndPos(arr1, arr2, br);
		if (count1 == 4)
		{
			cout << "You've guessed all the numbers and their positions!" << endl;
			break;
		}
		else if (count1 < 4)
		{
			cout << "\nKeep trying!" << endl;
		}
	}
}

void showGuessedNum(int* arr1, int br)
{
	int arr2[10];
	for (int i = 0; i < 13; i++)
	{
		cout << "Enter your numbers: ";
		inputArr(arr2);
		cout << "\nCount of guessed numbers: ";
		cout << countGuessedNum(arr1, arr2, br);
		int count2 = countGuessedNum(arr1, arr2, br);
		if (count2 == 4)
		{
			cout << "You've guessed all the numbers!" << endl;
			break;
		}
		else if (count2 < 4)
		{
			cout << "\nKeep trying!" << endl;
		}
	}
}

void initialGreeting()
{
	cout << u8"                          █ █ █ █▀▀ █   █▀▀ █▀█ █▄ ▄█ █▀▀  ▀█▀ █▀█" << endl;
	cout << u8"                          ▀▄▀▄▀ ██▄ █▄▄ █▄▄ █▄█ █ ▀ █ ██▄   █  █▄█" << endl;
	cout << endl;
	cout << u8"  █▄▄ █   █▀▀ ▀█▀ █▀▀ █▄█ █   █▀▀ ▀▄▀   █▀▀ █▀█ █▀▄ █▀▀   █▄▄ █▀█ █▀▀ ▄▀▄ █▄▀ █▀▀ █▀█ █▀▀ █" << endl;
	cout << u8"  █▄█ █▄▄ ██▄  █  █▄▄ █ █ █▄▄ ██▄  █    █▄▄ █▄█ █▄▀ ██▄   █▄█ █▀▄ ██▄ █▀█ █ █ ██▄ █▀▄ ▄██ ▄" << endl;
	cout << u8"                                          Copyright©" << endl;
}

void rules()
{
	cout << endl << endl;
	cout << "                           _________________________________________________________________             " << endl;
	cout << "                          |                                                                 |            " << endl;
	cout << "                          |  Hey, CodeBreaker (it's your name for this mission)!            |            " << endl;
	cout << "                          |  The Germans are up to something very bad right now and are     |            " << endl;
	cout << "                          |  getting ready to attack but we can't decipher the locations    |            " << endl;
	cout << "                          |  of their battle ships. Here's where you come in! You'll help   |            " << endl;
	cout << "                          |  us figure out what the coordinates are and here's what you'll  |            " << endl;
	cout << "                          |  have to do in a few steps:                                     |            " << endl;
	cout << "                          |                                                                 |            " << endl;
	cout << u8"                          |              • The location of a ship is coded in a             |            " << endl;
	cout << "                          |                four-digit code whose digits are between         |            " << endl;
	cout << "                          |                 0 and 7                                         |            " << endl;
	cout << u8"                          |              • You'll tell us your prediction of 4 numbers      |            " << endl;
	cout << "                          |                and we'll give you feedback                      |            " << endl;
	cout << u8"                          |              • If you've guessed one or more numbers, the       |            " << endl;
	cout << "                          |                message will be \"Guessed numbers\"                |            " << endl;
	cout << u8"                          |              • If you've guessed the correct position of a      |            " << endl;
	cout << "                          |                correct number, the message will be              |            " << endl;
	cout << "                          |                \"Guessed numbers and positions\"                  |            " << endl;
	cout << "                          |  (Sadly we can't tell you more than that since testing out      |            " << endl;
	cout << "                          |  data takes a lot of time!)                                     |            " << endl;
	cout << u8"                          |              • If you don't get the correct combination of      |            " << endl;
	cout << "                         _|                numbers within 13 tries we're sorry to say this, |_           " << endl;
	cout << "                      __/ |                but we're done for! So you better get to work    | \\_         " << endl;
	cout << "                     /    |                right this instant, CodeBreaker!                 |   \\        " << endl;
	cout << "                    |\\__  |                                                                 |  _/|       " << endl;
	cout << "                    |   \\_|  Good luck! – A.T, G.W, H.A, B.T, S.M-B             *  *         |_/  |       " << endl;
	cout << "                    |      \\__                                              *   __   *   __/     |       " << endl;
	cout << "                    |         \\__                                          *   |__    *_/        |       " << endl;
	cout << "                    |            \\__                                       *   |__ __/           |       " << endl;
	cout << "                    |               \\__                                     *   __/              |       " << endl;
	cout << "                    |                  \\__                                   __/                 |       " << endl;
	cout << "                    |                     \\_________________________________/                    |       " << endl;
	cout << "                    |                        \\__                       __/                       |       " << endl;
	cout << "                    |                           \\__                 __/                          |       " << endl;
	cout << "                    |                              \\_______________/                             |       " << endl;
	cout << "                    |                                                                            |       " << endl;
	cout << "                    |                                                                            |       " << endl;
	cout << "                    |                                                                            |       " << endl;
	cout << "                    |                                                                            |       " << endl;
	cout << "                    |                                                                            |       " << endl;
	cout << "                    |                                                                            |       " << endl;
	cout << "                    |____________________________________________________________________________|       " << endl;
	cout << "                                                                                                         " << endl;
}

void showGoodbyeMessage()
{
	cout << endl << endl;
	this_thread::sleep_for(chrono::milliseconds(300));
	cout << u8"      ▀█▀ █▄█ ▄▀▄ █▄ █ █▄▀   ▀▄▀ █▀█ █ █   █▀▀ █▀█ █▀█   █▄█ █▀▀ █   █▀█ ▀█▀ █▄ █ █▀▀" << endl;
	this_thread::sleep_for(chrono::milliseconds(300));
	cout << u8"       █  █ █ █▀█ █ ▀█ █ █    █  █▄█ █▄█   █▀  █▄█ █▀▄   █ █ ██▄ █▄▄ █▀▀ ▄█▄ █ ▀█ █▄█" << endl;
	this_thread::sleep_for(chrono::milliseconds(300));
	cout << endl;
	this_thread::sleep_for(chrono::milliseconds(300));
	cout << u8"              █ █ █▀▀  █▀▀ ▄▀▄ █ █ █▀▀   ▀█▀ █▄█ █▀▀   █ █ █ █▀█ █▀█ █   █▀▄ █" << endl;
	this_thread::sleep_for(chrono::milliseconds(300));
	cout << u8"              █▄█ ▄██  ▄██ █▀█ ▀▄▀ ██▄    █  █ █ ██▄   ▀▄▀▄▀ █▄█ █▀▄ █▄▄ █▄▀ ▄" << endl;
	this_thread::sleep_for(chrono::milliseconds(500));

}

bool againstAI(int arr1[], int br)
{
	// menu
	cout << " Choose an option from the menu by typing a number: ";
	int userInput = enterUserInput();
	switch (userInput)
	{
	case 1:
		// easy mode
		break;
	case 2:
		// hard mode
		break;
	case 3:
		return false;
		break;
	default: cout << "\n Please enter a valid input!\n"; break;
	}

	return true;
}

bool againstPerson(int arr1[], int br)
{
	// menu
	cout << " Choose an option from the menu by typing a number: ";
	int userInput = enterUserInput();
	switch (userInput)
	{
	case 1:
		// easy mode
		break;
	case 2:
		// hard mode
		break;
	case 3:
		return false;
		break;
	default: cout << "\n Please enter a valid input!\n"; break;
	}

	return true;
}

void printGameMenu()
{
	cout << endl;
	this_thread::sleep_for(chrono::milliseconds(1000));
	printSpaces(14);  cout << u8"╔═════════════════════════════════════════════════════════════════╗" << endl;
	this_thread::sleep_for(chrono::milliseconds(300));
	printSpaces(14);  cout << u8"║                  |---------LEVELS MENU----------|               ║" << endl;
	this_thread::sleep_for(chrono::milliseconds(300));
	printSpaces(14);  cout << u8"║ 1. Play against AI                                              ║" << endl;
	this_thread::sleep_for(chrono::milliseconds(300));
	printSpaces(14);  cout << u8"║ 2. Play against a person                                        ║" << endl;
	this_thread::sleep_for(chrono::milliseconds(300));
	printSpaces(14);  cout << u8"║ 3. Exit the option                                              ║" << endl;
	this_thread::sleep_for(chrono::milliseconds(300));
	printSpaces(14);  cout << u8"╚═════════════════════════════════════════════════════════════════╝" << endl;
	this_thread::sleep_for(chrono::milliseconds(300));
	cout << endl;
}

bool menuLevels(int arr1[], int br)
{
	printGameMenu();
	cout << " Choose an option from the menu by typing a number: ";
	int userInput = enterUserInput();
	switch(userInput)
	{
		case 1:
			while (againstAI(arr1,br));
			break;
		case 2: 
			while (againstPerson(arr1,br));
			break;
		case 3:
			return false;
			break;
		default: cout << "\n Please enter a valid input!\n"; break;
	}

	return true;
}


void printMainMenu()
{
	cout << endl;
	this_thread::sleep_for(chrono::milliseconds(1000));
	printSpaces(20);  cout << u8"╔═════════════════════════════════════════════════════╗" << endl;
	this_thread::sleep_for(chrono::milliseconds(400));
	printSpaces(20);  cout << u8"║              |---------MENU----------|              ║" << endl;
	this_thread::sleep_for(chrono::milliseconds(400));
	printSpaces(20);  cout << u8"║ 1. Play game                                        ║" << endl;
	this_thread::sleep_for(chrono::milliseconds(400));
	printSpaces(20);  cout << u8"║ 2. Rules                                            ║" << endl;
	this_thread::sleep_for(chrono::milliseconds(400));
	printSpaces(20);  cout << u8"║ 3. Exit                                             ║" << endl;
	this_thread::sleep_for(chrono::milliseconds(400));
	printSpaces(20);  cout << u8"╚═════════════════════════════════════════════════════╝" << endl;
	this_thread::sleep_for(chrono::milliseconds(400));
	cout << endl;
}

bool mainMenu(int arr1[], int br)
{
	printMainMenu();
	cout << " Choose an option from the menu by typing a number: "; 
	int userInput = enterUserInput(); 

	switch (userInput)
	{
	case 1:
		while (menuLevels(arr1,br));
		break;
	case 2: 
		rules();
		break;
	case 3:
		showGoodbyeMessage();
		return false;
		break;

	default: cout << "\n Please enter a valid input!\n"; break;
	}
	return true;
}

int main()
{
	srand(time(NULL));
	system("chcp 65001");
	initialGreeting();
	int arr1[10],arr2[10];
	int br = 0;
	while (mainMenu(arr1,br));
}
