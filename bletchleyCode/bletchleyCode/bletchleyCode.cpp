#include <iostream>
#include <chrono>
#include <thread>
#include <stdlib.h>
#include <time.h>
#include <cctype>

using namespace std;

// PRESENTATION LAYER

void initialGreeting() // prints the greeting
{
	cout << u8"                          █ █ █ █▀▀ █   █▀▀ █▀█ █▄ ▄█ █▀▀  ▀█▀ █▀█" << endl;
	cout << u8"                          ▀▄▀▄▀ ██▄ █▄▄ █▄▄ █▄█ █ ▀ █ ██▄   █  █▄█" << endl;
	cout << endl;
	cout << u8"  █▄▄ █   █▀▀ ▀█▀ █▀▀ █▄█ █   █▀▀ ▀▄▀   █▀▀ █▀█ █▀▄ █▀▀   █▄▄ █▀█ █▀▀ ▄▀▄ █▄▀ █▀▀ █▀█ █▀▀ █" << endl;
	cout << u8"  █▄█ █▄▄ ██▄  █  █▄▄ █ █ █▄▄ ██▄  █    █▄▄ █▄█ █▄▀ ██▄   █▄█ █▀▄ ██▄ █▀█ █ █ ██▄ █▀▄ ▄██ ▄" << endl;
	cout << u8"                                          Copyright©" << endl;
}

void rules() // prints the game's rules
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
	while (work) // checkes if the user's input is correct
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

void showGoodbyeMessage() // prints the goodbye message
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

void printWinMessage()
{
	cout << endl;
	printSpaces(22);  cout << u8"╔═════════════════════════════════════════════════╗" << endl;
	printSpaces(22);  cout << u8"║                                                 ║" << endl;
	printSpaces(22);  cout << u8"║                   YOU'VE WON!                   ║" << endl;
	printSpaces(22);  cout << u8"║                                                 ║" << endl;
	printSpaces(22);  cout << u8"╚═════════════════════════════════════════════════╝" << endl;
}

void printLoseMessage(int secretCode[])
{
	cout << endl;
	printSpaces(22);  cout << u8"╔═════════════════════════════════════════════════╗" << endl;
	printSpaces(22);  cout << u8"║                   YOU'VE LOST!                  ║" << endl;
	printSpaces(22);  cout << u8"║                                                 ║" << endl;
	printSpaces(22);  cout << u8"║  The code of the germans was: ";
	for (int i = 0; i < 4; i++) // prints the correct secret code
	{
		cout << secretCode[i] << " ";
	}
	cout << u8"          ║" << endl;
	printSpaces(22);  cout << u8"╚═════════════════════════════════════════════════╝" << endl;
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



// DATA LAYER
void inputArrEasy(int arr[]) // inputs secret code easy mode
{
	for	(int i = 0; i < 4; i++)
	{
		cin >> arr[i];
	}
	
	for (int i = 0; i < 4; i++)
	{
		if (arr[i] < 0 or arr[i]>7)
		{
			cout << "Please enter digits in the range of 0 to 7 only! : ";
			inputArrEasy(arr);
		}
	}

	if (arr[0] == arr[1] or arr[0] == arr[2] or arr[0] == arr[3] or arr[1] == arr[2] or arr[1] == arr[3] or arr[2] == arr[3])
	{
		cout << "     Please enter a code without repeating digits! : ";
		inputArrEasy(arr);
	}			
}

void inputArrHard(int arr[]) // inputs secret code hard mode
{
	for	(int i = 0; i < 4; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < 4; i++)
	{
		if (arr[i] < 0 or arr[i]>7)
		{
			cout << "Please enter digits in the range of 0 to 7 only! : ";
			inputArrHard(arr);
		}
	}
}

void genArrEasy(int arr[]) // generates secret code easy mode
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
void genArrHard(int arr[]) // generates secret code hard mode
{
	for (int i = 0; i < 4; i++)
	{
		arr[i] = rand() % 7;
	}
}

void printSpaces(unsigned short int n) // prints spaces
{
	for (int i = 0; i < n; i++)
	{
		cout << " ";
	}
}

int countGuessedNumEasy(int arr1[], int arr2[], int br) // counts guessed numbers in the secred code
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

int countGuessedNumHard(int arr1[],int arr2[])
{
	int res = 1;

	for (int i = 1; i < 4; i++) 
	{
		int j;

		for (j = 0; j < i; j++)
		{
			if (arr1[i] == arr2[j])
			{ 
				break;
			}
		}

		if (i == j)
		{
			res++;
		}
	}
	return res;
}

int countGuessedNumAndPos(int arr1[], int arr2[], int br) // counts guessed positions in the secret code
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

int enterUserInput() // enters the player's input
{
	int userInput;

	cin >> userInput;

	return userInput;
}

void playAIEasy(int secretCode[], int cnt) // player plays against the computer in easy mode
{
	system("cls");
	
	genArrEasy(secretCode);

	cout << endl << endl << endl;
	printSpaces(25); cout << "YOU ARE NOW IN GAME!" << endl << endl;
	cout << u8"  ╔═════════════════════════════════════════════════════════════════╗" << endl << endl;
	cout << endl;

	int codeGuess[10];

	for (int i = 0; i < 13; i++)
	{
		printSpaces(5); cout << u8"• Enter your guess: ";
		inputArrEasy(codeGuess); // takes player 2's guesses
		
		cout << endl;
		printSpaces(12); cout << "- - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
		printSpaces(11); cout << u8"|  • Count of guessed numbers: " << countGuessedNumEasy(secretCode, codeGuess, cnt) << "                  |" << endl; // prints the count of guessed numbers
		printSpaces(11); cout << u8"|  • Count of guessed positions: " << countGuessedNumAndPos(secretCode, codeGuess, cnt) << "                |" << endl; // prints the count of guessed positions
		printSpaces(12); cout << "- - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

		int countNumAndPos = countGuessedNumAndPos(secretCode, codeGuess, cnt);
		int countNum = countGuessedNumEasy(secretCode, codeGuess, cnt);

		if (countNum == 4 && countNumAndPos == 4)
		{
			printWinMessage();
			break;
		}
		else 
			if ((countNum < 4 or countNumAndPos < 4) and i < 12)
			{
				printSpaces(30); cout << "Keep trying!" << endl << endl << endl;
			}
			else 
				if ((countNum < 4 or countNumAndPos < 4) and i == 12)
				{
					printLoseMessage(secretCode);
				}
	}
}

void playAIHard(int secretCode[], int cnt) // player plays against the computer in hard mode
{
	system("cls");

	genArrHard(secretCode);

	cout << endl << endl << endl;
	printSpaces(25); cout << "YOU ARE NOW IN GAME!" << endl << endl;
	cout << u8"  ╔═════════════════════════════════════════════════════════════════╗" << endl << endl;
	cout << endl;

	int codeGuess[10];
	for (int i = 0; i < 13; i++)
	{
		printSpaces(5); cout << u8"• Enter your guess: ";
		inputArrHard(codeGuess);
		cout << endl;

		printSpaces(12); cout << "- - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
		printSpaces(11); cout << u8"|  • Count of guessed numbers: " << countGuessedNumHard(secretCode, codeGuess) << "                  |" << endl; // prints the count of guessed numbers
		printSpaces(11); cout << u8"|  • Count of guessed positions: " << countGuessedNumAndPos(secretCode, codeGuess, cnt) << "                |" << endl; // prints the count of guessed positions
		printSpaces(12); cout << "- - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

		int countNumAndPos = countGuessedNumAndPos(secretCode, codeGuess, cnt);
		int countNum = countGuessedNumHard(secretCode, codeGuess);

		if (countNum == 4 && countNumAndPos == 4)
		{
			printWinMessage();
			break;
		}
		else 
			if ((countNum < 4 or countNumAndPos < 4) and i < 12)
			{
				printSpaces(30); cout << "Keep trying!" << endl << endl << endl;
			}
			else 
				if ((countNum < 4 or countNumAndPos < 4) and i == 12)
				{
					printLoseMessage(secretCode);
				}
	}
}

bool againstAI(int arr1[], int br) // menu for playing against the computer
{
	printAIMenu();

	cout << " Choose an option from the menu by typing a number: ";
	int userInput = enterUserInput(); // takes the user's input

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

void easyPerson(int secretCode[], int cnt) // player playes against another player in easy mode
{
	system("cls");

	printSpaces(25); cout << "YOU ARE NOW IN GAME!" << endl << endl;
	cout << u8"  ╔═════════════════════════════════════════════════════════════════╗" << endl << endl;
	cout << endl;
	printSpaces(5); cout << "This message will disappear after the secret code has" << endl;
	printSpaces(5); cout << "been entered!" << endl;
	printSpaces(5); cout << "| Enter the secret code: "; inputArrEasy(secretCode); // player 1 inputs the secret code
	cout << endl;

	system("cls");

	printSpaces(25); cout << "YOU ARE NOW IN GAME!" << endl << endl;
	cout << u8"  ╔═════════════════════════════════════════════════════════════════╗" << endl << endl;
	cout << endl;

	int codeGuess[10]; // saves player 2's guess
	for (int i = 0; i < 13; i++)
	{
		printSpaces(5); cout << u8"• Enter your guess: ";
		inputArrEasy(codeGuess); // takes player 2's guesses
		cout << endl;
		printSpaces(12); cout << "- - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
		printSpaces(11); cout << u8"|  • Count of guessed numbers: " << countGuessedNumEasy(secretCode, codeGuess, cnt) << "                  |" << endl; // prints the count of guessed numbers
		printSpaces(11); cout << u8"|  • Count of guessed positions: " << countGuessedNumAndPos(secretCode, codeGuess, cnt) << "                |" << endl; // prints the count of guessed positions
		printSpaces(12); cout << "- - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

		int countNumAndPos = countGuessedNumAndPos(secretCode, codeGuess, cnt);
		int countNum = countGuessedNumEasy(secretCode, codeGuess, cnt);

		// prints the appropriate message corresponding to the player's guess
		if (countNum == 4 && countNumAndPos == 4)
		{
			printWinMessage();
			break;
		}
		else 
			if ((countNum < 4 or countNumAndPos < 4) and i < 12)
			{
				printSpaces(30); cout << "Keep trying!" << endl << endl << endl;
			}
			else 
				if ((countNum < 4 or countNumAndPos < 4) and i == 12)
				{
					printLoseMessage(secretCode);
				}
	}
}

void hardPerson(int secretCode[], int cnt) // player playes against another player in hard mode
{
	system("cls");

	printSpaces(25); cout << "YOU ARE NOW IN GAME!" << endl << endl;
	cout << u8"  ╔═════════════════════════════════════════════════════════════════╗" << endl << endl;
	cout << endl;
	printSpaces(5); cout << "This message will disappear after the secret code has" << endl;
	printSpaces(5); cout << "been entered!" << endl;
	printSpaces(5); cout << "| Enter the secret code: "; inputArrHard(secretCode); // player 1 inputs the secret code
	cout << endl;

	system("cls");

	printSpaces(25); cout << "YOU ARE NOW IN GAME!" << endl << endl;
	cout << u8"  ╔═════════════════════════════════════════════════════════════════╗" << endl << endl;
	cout << endl;
	

	int codeGuess[10]; // saves player 2's guess
	for(int i = 0; i < 13; i++)
	{
		printSpaces(5); cout << u8"• Enter your guess: ";
		inputArrHard(codeGuess);
		cout << endl;

		printSpaces(12); cout << "- - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
		printSpaces(11); cout << u8"|  • Count of guessed numbers: " << countGuessedNumHard(secretCode, codeGuess) << "                  |" << endl; // prints the count of guessed numbers
		printSpaces(11); cout << u8"|  • Count of guessed positions: " << countGuessedNumAndPos(secretCode, codeGuess, cnt) << "                |" << endl; // prints the count of guessed positions
		printSpaces(12); cout << "- - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

		int countNumAndPos = countGuessedNumAndPos(secretCode, codeGuess, cnt);
		int countNum = countGuessedNumHard(secretCode, codeGuess);

		// prints the appropriate message corresponding to the player's guess
		if (countNum == 3 && countNumAndPos == 4)
		{
			printWinMessage();
			break;
		}
		else 
			if ((countNum < 4 or countNumAndPos < 4) and i < 12)
			{
				printSpaces(30); cout << "Keep trying!" << endl << endl << endl;
			}
			else 
				if ((countNum < 4 or countNumAndPos < 4) and i == 12)
				{
					printLoseMessage(secretCode);
				}
	}
}

bool againstPerson(int arr1[], int br) // menu for playing against another player
{
	printPersonMenu();

	cout << " Choose an option from the menu by typing a number: ";
	int userInput = enterUserInput(); // takes the user's input

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

bool menuLevels(int arr1[], int br) // prints the mode menu of the game
{
	printGameMenu();

	cout << " Choose an option from the menu by typing a number: ";
	int userInput = enterUserInput(); // takes the user's input

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

bool mainMenu(int arr1[], int br) // prints the main menu of the game
{
	printMainMenu();

	cout << " Choose an option from the menu by typing a number: "; 
	int userInput = enterUserInput(); // takes the user's input

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
	srand(time(NULL)); // generates random numbers

	system("chcp 65001"); // utf8

	initialGreeting();

	int arr1[10], br = 0;

	while (mainMenu(arr1,br)); // show mein menu on screen
}
