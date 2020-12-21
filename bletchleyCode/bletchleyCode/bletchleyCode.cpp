#include <iostream>
#include <iomanip>
using namespace std;

void inputArr(int arr[])
{
	for	(int i = 0; i < 7; i++)
	{
		cin>>arr[i];
	}
}

void outputArr(int arr[])
{
	for	(int i = 0; i < 7; i++)
	{
		cout<<arr[i]<<" ";
	}
}

void initialGreeting()
{
	cout << u8"                      █ █ █ █▀▀ █   █▀▀ █▀█ █▄ ▄█ █▀▀  ▀█▀ █▀█" << endl;
	cout << u8"                      ▀▄▀▄▀ ██▄ █▄▄ █▄▄ █▄█ █ ▀ █ ██▄   █  █▄█" << endl;
	cout << endl;
	cout << u8"█▄▄ █   █▀▀ ▀█▀ █▀▀ █▄█ █   █▀▀ ▀▄▀ █▀▀ █▀█ █▀▄ █▀▀   █▄▄ █▀█ █▀▀ ▄▀▄ █▄▀ █▀▀ █▀█ █▀▀ █" << endl;
	cout << u8"█▄█ █▄▄ ██▄  █  █▄▄ █ █ █▄▄ ██▄  █  █▄▄ █▄█ █▄▀ ██▄   █▄█ █▀▄ ██▄ █▀█ █ █ ██▄ █▀▄ ▄██ ▄" << endl;
	cout << u8"                                      Copyright©" << endl;
}

void rules()
{

}

void showGoodbyeMessage()
{
	cout << u8"▀█▀ █▄█ ▄▀▄ █▄ █ █▄▀   ▀▄▀ █▀█ █ █   █▀▀ █▀█ █▀█   █▄█ █▀▀ █   █▀█ ▀█▀ █▄ █ █▀▀" << endl;
	cout << u8" █  █ █ █▀█ █ ▀█ █ █    █  █▄█ █▄█   █▀  █▄█ █▀▄   █ █ ██▄ █▄▄ █▀▀ ▄█▄ █ ▀█ █▄█" << endl;
	cout << endl;
	cout << u8"        █ █ █▀▀  █▀▀ ▄▀▄ █ █ █▀▀   ▀█▀ █▄█ █▀▀   █ █ █ █▀█ █▀█ █   █▀▄ █" << endl;
	cout << u8"        █▄█ ▄██  ▄██ █▀█ ▀▄▀ ██▄    █  █ █ ██▄   ▀▄▀▄▀ █▄█ █▀▄ █▄▄ █▄▀ ▄" << endl;

}

int enterUserInput()
{
	int userInput;
	cin >> userInput;
	return userInput;
}

bool menuAnotherPlayer(int arr1[], int arr2[])
{
	cout << "\n|---------SECONDPLAYERMENU----------|\n";
	cout << "1. Player 1 input(numbers to be find)\n";
	cout << "2. Player 2 input(numbers to guessed)\n"<<endl;
	cout << "3. Show result\n"<<endl;
	cout << "9. Exit the option\n"<<endl;
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
			// outputArr(arr1);
			// outputArr(arr2);
			break;
		case 9:
			return false;
			break;
	}

	return true;
}


bool mainMenu(int arr1[], int arr2[])
{
	cout << u8"╔═════════════════════════════════════════════════════╗" << endl;
	cout << u8"║" << "              |---------MENU----------|" << u8"              ║" << endl;
	cout << u8"║" << " 1. Play against AI" << u8"                                  ║" << endl;
	cout << u8"║" << " 2. Play with another player" << u8"                         ║" << endl;
	cout << u8"║" << " 3. Rules" << u8"                                            ║" << endl;
	cout << u8"║" << " 9. Exit" << u8"                                             ║" << endl;
	cout << u8"╚═════════════════════════════════════════════════════╝" << endl;
	cout << " Enter option from the menu by typing a number: "; 
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
