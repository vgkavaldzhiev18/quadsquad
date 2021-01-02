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


void printSpaces()
{
	for (int i = 0; i < 20; i++)
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

//int countGuessedNumAndPos(int arr1[], int arr2[]);
//{
//	// To be done
//}

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

}

void showGoodbyeMessage()
{
	cout << u8"    ▀█▀ █▄█ ▄▀▄ █▄ █ █▄▀   ▀▄▀ █▀█ █ █   █▀▀ █▀█ █▀█   █▄█ █▀▀ █   █▀█ ▀█▀ █▄ █ █▀▀" << endl;
	cout << u8"     █  █ █ █▀█ █ ▀█ █ █    █  █▄█ █▄█   █▀  █▄█ █▀▄   █ █ ██▄ █▄▄ █▀▀ ▄█▄ █ ▀█ █▄█" << endl;
	cout << endl;
	cout << u8"            █ █ █▀▀  █▀▀ ▄▀▄ █ █ █▀▀   ▀█▀ █▄█ █▀▀   █ █ █ █▀█ █▀█ █   █▀▄ █" << endl;
	cout << u8"            █▄█ ▄██  ▄██ █▀█ ▀▄▀ ██▄    █  █ █ ██▄   ▀▄▀▄▀ █▄█ █▀▄ █▄▄ █▄▀ ▄" << endl;

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
	this_thread::sleep_for(chrono::milliseconds(2000));
	printSpaces();  cout << u8"╔═════════════════════════════════════════════════════════════════╗" << endl;
	this_thread::sleep_for(chrono::milliseconds(500));
	printSpaces();  cout << u8"║              |---------SECOND PLAYER MENU----------|            ║" << endl;
	this_thread::sleep_for(chrono::milliseconds(500));
	printSpaces();  cout << u8"║ 1. Player 1 input(numbers to be find)                           ║" << endl;
	this_thread::sleep_for(chrono::milliseconds(500));
	printSpaces();  cout << u8"║ 2. Player 2 input(numbers to guessed)                           ║" << endl;
	this_thread::sleep_for(chrono::milliseconds(500));
	printSpaces();  cout << u8"║ 3. Show how many numbers and possitions have been guessed       ║" << endl;
	this_thread::sleep_for(chrono::milliseconds(500));
	printSpaces();  cout << u8"║ 4. Show how many numbers have been guessed                      ║" << endl;
	this_thread::sleep_for(chrono::milliseconds(500));
	printSpaces();  cout << u8"║ 9. Exit the option                                              ║" << endl;
	this_thread::sleep_for(chrono::milliseconds(500));
	printSpaces();  cout << u8"╚═════════════════════════════════════════════════════════════════╝" << endl;
	this_thread::sleep_for(chrono::milliseconds(500));
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
			// cout << countGuessedNumAndPos(arr1, arr2);
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
	this_thread::sleep_for(chrono::milliseconds(2000));
	printSpaces();  cout << u8"╔═════════════════════════════════════════════════════╗" << endl;
	this_thread::sleep_for(chrono::milliseconds(500));
	printSpaces();  cout << u8"║              |---------MENU----------|              ║" << endl;
	this_thread::sleep_for(chrono::milliseconds(500));
	printSpaces();  cout << u8"║ 1. Play against AI                                  ║" << endl;
	this_thread::sleep_for(chrono::milliseconds(500));
	printSpaces();  cout << u8"║ 2. Play with another player                         ║" << endl;
	this_thread::sleep_for(chrono::milliseconds(500));
	printSpaces();  cout << u8"║ 3. Rules                                            ║" << endl;
	this_thread::sleep_for(chrono::milliseconds(500));
	printSpaces();  cout << u8"║ 9. Exit                                             ║" << endl;
	this_thread::sleep_for(chrono::milliseconds(500));
	printSpaces();  cout << u8"╚═════════════════════════════════════════════════════╝" << endl;
	this_thread::sleep_for(chrono::milliseconds(500));
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
	initialGreeting();
	int arr1[10],arr2[10];
	while (mainMenu(arr1,arr2));
}
