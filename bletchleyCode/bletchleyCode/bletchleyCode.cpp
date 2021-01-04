#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

void inputArr(int arr[])
{
	for	(int i = 0; i < 7; i++)
	{
		cin>>arr[i];
	}
}


void printSpaces(unsigned short int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << " ";
	}
}

//void outputArr(int arr[])
//{
//	for	(int i = 0; i < 7; i++)
//	{
//		cout<<arr[i]<<" ";
//	}
//}


// To be improved
int countGuessedNum(int arr1[], int arr2[])
{
	int br = 0;
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (arr1[i] == arr2[j])
			{
				br++;
			}
		}	
	}
	return br;
}

int countGuessedNumAndPos(int arr1[], int arr2[])
{
	int br = 0;
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (arr1[i] == arr2[j] && i == j)
			{
				br++;
			}
		}
	}
	return br;
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

int enterUserInput()
{
	int userInput;
	cin >> userInput;
	return userInput;
}

void printSecondMenu()
{
	cout << endl;
	this_thread::sleep_for(chrono::milliseconds(1000));
	printSpaces(14);  cout << u8"╔═════════════════════════════════════════════════════════════════╗" << endl;
	this_thread::sleep_for(chrono::milliseconds(300));
	printSpaces(14);  cout << u8"║              |---------SECOND PLAYER MENU----------|            ║" << endl;
	this_thread::sleep_for(chrono::milliseconds(300));
	printSpaces(14);  cout << u8"║ 1. Player 1 input(numbers to be find)                           ║" << endl;
	this_thread::sleep_for(chrono::milliseconds(300));
	printSpaces(14);  cout << u8"║ 2. Player 2 input(numbers to guessed)                           ║" << endl;
	this_thread::sleep_for(chrono::milliseconds(300));
	printSpaces(14);  cout << u8"║ 3. Show how many numbers and possitions have been guessed       ║" << endl;
	this_thread::sleep_for(chrono::milliseconds(300));
	printSpaces(14);  cout << u8"║ 4. Show how many numbers have been guessed                      ║" << endl;
	this_thread::sleep_for(chrono::milliseconds(300));
	printSpaces(14);  cout << u8"║ 9. Exit the option                                              ║" << endl;
	this_thread::sleep_for(chrono::milliseconds(300));
	printSpaces(14);  cout << u8"╚═════════════════════════════════════════════════════════════════╝" << endl;
	this_thread::sleep_for(chrono::milliseconds(300));
	cout << endl;
}

bool menuAnotherPlayer(int arr1[], int arr2[])
{
	printSecondMenu();
	int userInput = enterUserInput();
	switch(userInput)
	{
		case 1:
			inputArr(arr1);
			break;
		case 2:
			inputArr(arr2);
			break;
		case 3:
			cout <<"Count of guessed numbers and possitions: "<< countGuessedNumAndPos(arr1, arr2);
			break;
		case 4:
			cout <<"Count of guessed numbers: "<< countGuessedNum(arr1, arr2);
			break;
		case 9:
			return false;
			break;
	}

	return true;
}


void printFirstMenu()
{
	cout << endl;
	this_thread::sleep_for(chrono::milliseconds(1000));
	printSpaces(20);  cout << u8"╔═════════════════════════════════════════════════════╗" << endl;
	this_thread::sleep_for(chrono::milliseconds(400));
	printSpaces(20);  cout << u8"║              |---------MENU----------|              ║" << endl;
	this_thread::sleep_for(chrono::milliseconds(400));
	printSpaces(20);  cout << u8"║ 1. Play against AI                                  ║" << endl;
	this_thread::sleep_for(chrono::milliseconds(400));
	printSpaces(20);  cout << u8"║ 2. Play with another player                         ║" << endl;
	this_thread::sleep_for(chrono::milliseconds(400));
	printSpaces(20);  cout << u8"║ 3. Rules                                            ║" << endl;
	this_thread::sleep_for(chrono::milliseconds(400));
	printSpaces(20);  cout << u8"║ 9. Exit                                             ║" << endl;
	this_thread::sleep_for(chrono::milliseconds(400));
	printSpaces(20);  cout << u8"╚═════════════════════════════════════════════════════╝" << endl;
	this_thread::sleep_for(chrono::milliseconds(400));
	cout << endl;
}

bool mainMenu(int arr1[], int arr2[])
{
	printFirstMenu();
	cout << " Enter an option from the menu by typing a number: "; 
	int userInput = enterUserInput(); 

	
	switch (userInput)
	{
	case 1:
		break;
	case 2:
		while (menuAnotherPlayer(arr1,arr2));
		break;
	case 3: 
		rules();
		break;
	case 9:
		showGoodbyeMessage();
		return false;
		break;

	default: cout << "\n Please enter a valid input!\n"; break;
	}
	return true;
}

int main()
{
	system("chcp 65001");
	initialGreeting();
	int arr1[10],arr2[10];
	while (mainMenu(arr1,arr2));
}
