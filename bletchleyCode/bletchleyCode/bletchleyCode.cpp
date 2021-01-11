#include <iostream>
#include <chrono>
#include <thread>
#include <stdlib.h>
#include <time.h>
#include <cctype>

using namespace std;

// DATA LAYER
void inputArrEasy(int arr[])
{
	for	(int i = 0; i < 4; i++)
	{
		cin >> arr[i];
	}
	if (arr[0] == arr[1] or arr[0] == arr[2] or arr[0] == arr[3] or arr[1] == arr[2] or arr[1] == arr[3] or arr[2] == arr[3])
	{
		cout << "Please enter code without repeating digits!" << endl;
		inputArrEasy(arr);
	}
			
}

void inputArrHard(int arr[])
{
	for	(int i = 0; i < 4; i++)
	{
		cin >> arr[i];
	}
}

void genArrEasy(int arr[])
{
	for (int i = 0; i < 4; i++)
	{
		arr[i] = rand() % 7;
	}
	if (arr[0] == arr[1] or arr[0] == arr[2] or arr[0] == arr[3] or arr[1] == arr[2] or arr[1] == arr[3] or arr[2] == arr[3])
	{
		genArrEasy(arr);
	}

}
void genArrHard(int arr[])
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
	cout << endl << endl << "Enter one (1) to go back to the home screen: ";
	char choice;
	bool work = true;
	while (work)
	{
		cin >> choice;
		if (isdigit(choice))
		{
			if (choice == '1')
			{
				work = false;
			}
			else
			{
				cout << "Enter the correct number! (one): ";
			}
		}
		else
		{
			cout << "Enter a number! (one): ";
		}
	}
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

void playAIEasy(int secretCode[], int cnt)
{
	genArrEasy(secretCode);

	int codeGuess[10];
	for (int i = 0; i < 13; i++)
	{
		cout << "Enter your guess: ";
		inputArrEasy(codeGuess);

		cout << "\nCount of guessed numbers: ";
		cout << countGuessedNum(secretCode, codeGuess, cnt);
		cout << "\nCount of guessed numbers and positions: ";
		cout << countGuessedNumAndPos(secretCode, codeGuess, cnt);

		int countNumAndPos = countGuessedNumAndPos(secretCode, codeGuess, cnt);
		int countNum = countGuessedNum(secretCode, codeGuess, cnt);

		if (countNum == 4 && countNumAndPos == 4)
		{
			cout << "\nYou've won!" << endl;
			break;
		}
		else if ((countNum < 4 or countNumAndPos < 4) and i < 12)
		{
			cout << "\nKeep trying!" << endl;
		}
		else if ((countNum < 4 or countNumAndPos < 4) and i == 12)
		{
			cout << endl;
			printSpaces(22);  cout << u8"╔═════════════════════════════════════════════════╗" << endl;
			printSpaces(22);  cout << u8"║                   YOU'VE LOST!                  ║" << endl;
			printSpaces(22);  cout << u8"║                                                 ║" << endl;
			printSpaces(22);  cout << u8"║  The code of the germans was: ";
			for (int i = 0; i < 4; i++)
			{
				cout << secretCode[i] << " ";
			}
			cout << u8"          ║" << endl;
			printSpaces(22);  cout << u8"╚═════════════════════════════════════════════════╝" << endl;
		}
	}
}

void playAIHard(int secretCode[], int cnt)
{
	genArrHard(secretCode);

	int codeGuess[10];
	for (int i = 0; i < 13; i++)
	{
		cout << "Enter your guess: ";
		inputArrHard(codeGuess);

		cout << "\nCount of guessed numbers: ";
		cout << countGuessedNum(secretCode, codeGuess, cnt);
		cout << "\nCount of guessed numbers and positions: ";
		cout << countGuessedNumAndPos(secretCode, codeGuess, cnt);

		int countNumAndPos = countGuessedNumAndPos(secretCode, codeGuess, cnt);
		int countNum = countGuessedNum(secretCode, codeGuess, cnt);

		if (countNum == 4 && countNumAndPos == 4)
		{
			cout << "\nYou've won!" << endl;
			break;
		}
		else if ((countNum < 4 or countNumAndPos < 4) and i < 12)
		{
			cout << "\nKeep trying!" << endl;
		}
		else if ((countNum < 4 or countNumAndPos < 4) and i == 12)
		{
			cout << endl;
			printSpaces(22);  cout << u8"╔═════════════════════════════════════════════════╗" << endl;
			printSpaces(22);  cout << u8"║                   YOU'VE LOST!                  ║" << endl;
			printSpaces(22);  cout << u8"║                                                 ║" << endl;
			printSpaces(22);  cout << u8"║  The code of the germans was: ";
			for (int i = 0; i < 4; i++)
			{
				cout << secretCode[i] << " ";
			}
			cout << u8"          ║" << endl;
			printSpaces(22);  cout << u8"╚═════════════════════════════════════════════════╝" << endl;
		}
	}
}

void printAIMenu()
{
	cout << endl;
	this_thread::sleep_for(chrono::milliseconds(1000));
	printSpaces(14);  cout << u8"╔═════════════════════════════════════════════════════════════════╗" << endl;
	this_thread::sleep_for(chrono::milliseconds(300));
	printSpaces(14);  cout << u8"║              |---------PLAY AGAINST COMPUTER----------|         ║" << endl;
	this_thread::sleep_for(chrono::milliseconds(300));
	printSpaces(14);  cout << u8"║ 1. Easy mode (no repeating digits in code)                      ║" << endl;
	this_thread::sleep_for(chrono::milliseconds(300));
	printSpaces(14);  cout << u8"║ 2. Hard mode (repeating digits in code)                         ║" << endl;
	this_thread::sleep_for(chrono::milliseconds(300));
	printSpaces(14);  cout << u8"║ 3. Exit                                                         ║" << endl;
	this_thread::sleep_for(chrono::milliseconds(300));
	printSpaces(14);  cout << u8"╚═════════════════════════════════════════════════════════════════╝" << endl;
	this_thread::sleep_for(chrono::milliseconds(300));
	cout << endl;
}

bool againstAI(int arr1[], int br)
{
	printAIMenu();
	cout << " Choose an option from the menu by typing a number: ";
	int userInput = enterUserInput();
	switch (userInput)
	{
	case 1:
		playAIEasy(arr1, br);
		break;
	case 2:
		playAIHard(arr1, br);
		break;
	case 3:
		return false;
		break;
	default: cout << "\n Please enter a valid input!\n"; break;
	}

	return true;
}

void easyPerson(int secretCode[], int cnt)
{
	cout << "Enter the secret code: ";
	inputArrEasy(secretCode);

	int codeGuess[10];
	for (int i = 0; i < 13; i++)
	{
		cout << "Enter your guess: ";
		inputArrEasy(codeGuess);

		cout << "\nCount of guessed numbers: ";
		cout << countGuessedNum(secretCode, codeGuess, cnt);
		cout << "\nCount of guessed numbers and positions: ";
		cout << countGuessedNumAndPos(secretCode, codeGuess, cnt);

		int countNumAndPos = countGuessedNumAndPos(secretCode, codeGuess, cnt);
		int countNum = countGuessedNum(secretCode, codeGuess, cnt);

		if (countNum == 4 && countNumAndPos == 4)
		{
			cout << "\nYou've won!" << endl;
			break;
		}
		else if ((countNum < 4 or countNumAndPos < 4) and i < 12)
		{
			cout << "\nKeep trying!" << endl;
		}
		else if ((countNum < 4 or countNumAndPos < 4) and i == 12)
		{
			cout << endl;
			printSpaces(22);  cout << u8"╔═════════════════════════════════════════════════╗" << endl;
			printSpaces(22);  cout << u8"║                   YOU'VE LOST!                  ║" << endl;
			printSpaces(22);  cout << u8"║                                                 ║" << endl;
			printSpaces(22);  cout << u8"║  The code of the germans was: ";
			for (int i = 0; i < 4; i++)
			{
				cout << secretCode[i] << " ";
			}
			cout << u8"          ║" << endl;
			printSpaces(22);  cout << u8"╚═════════════════════════════════════════════════╝" << endl;
		}
	}
}

void hardPerson(int secretCode[], int cnt)
{
	cout << "Enter the secret code: ";
	inputArrHard(secretCode);

	int codeGuess[10];
	for(int i = 0; i < 13; i++)
	{
		cout << "Enter yout guess: ";
		inputArrHard(codeGuess);

		cout << "\nCount of guessed numbers: ";
		cout << countGuessedNum(secretCode, codeGuess, cnt);
		cout << "\nCount of guessed numbers and positions: ";
		cout << countGuessedNumAndPos(secretCode, codeGuess, cnt);

		int countNumAndPos = countGuessedNumAndPos(secretCode, codeGuess, cnt);
		int countNum = countGuessedNum(secretCode, codeGuess, cnt);

		if (countNum == 4 && countNumAndPos == 4)
		{
			cout << "\nYou've won!" << endl;
			break;
		}
		else if ((countNum < 4 or countNumAndPos < 4) and i < 12)
		{
			cout << "\nKeep trying!" << endl;
		}
		else if ((countNum < 4 or countNumAndPos < 4) and i == 12)
		{
			cout << endl;
			printSpaces(22);  cout << u8"╔═════════════════════════════════════════════════╗" << endl;
			printSpaces(22);  cout << u8"║                   YOU'VE LOST!                  ║" << endl;
			printSpaces(22);  cout << u8"║                                                 ║" << endl;
			printSpaces(22);  cout << u8"║  The code of the germans was: ";
			for (int i = 0; i < 4; i++)
			{
				cout << secretCode[i] << " ";
			}
			cout << u8"          ║" << endl;
			printSpaces(22);  cout << u8"╚═════════════════════════════════════════════════╝" << endl;
		}
	}
}

void printPersonMenu()
{
	cout << endl;
	this_thread::sleep_for(chrono::milliseconds(1000));
	printSpaces(14);  cout << u8"╔═════════════════════════════════════════════════════════════════╗" << endl;
	this_thread::sleep_for(chrono::milliseconds(300));
	printSpaces(14);  cout << u8"║               |---------PLAY AGAINST PERSON----------|          ║" << endl;
	this_thread::sleep_for(chrono::milliseconds(300));
	printSpaces(14);  cout << u8"║ 1. Easy mode (no repeating digits in code)                      ║" << endl;
	this_thread::sleep_for(chrono::milliseconds(300));
	printSpaces(14);  cout << u8"║ 2. Hard mode (repeating digits in code)                         ║" << endl;
	this_thread::sleep_for(chrono::milliseconds(300));
	printSpaces(14);  cout << u8"║ 3. Exit                                                         ║" << endl;
	this_thread::sleep_for(chrono::milliseconds(300));
	printSpaces(14);  cout << u8"╚═════════════════════════════════════════════════════════════════╝" << endl;
	this_thread::sleep_for(chrono::milliseconds(300));
	cout << endl;
}

bool againstPerson(int arr1[], int br)
{
	printPersonMenu();
	cout << " Choose an option from the menu by typing a number: ";
	int userInput = enterUserInput();
	switch (userInput)
	{
	case 1:
		easyPerson(arr1, br);
		break;
	case 2:
		hardPerson(arr1, br);
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
	printSpaces(14);  cout << u8"║ 3. Exit                                                         ║" << endl;
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
	int arr1[10];
	int br = 0;
	while (mainMenu(arr1,br));
}
