// Console Adventure Game.cpp : Defines the entry point for the console application.
//

//include statements 
#include "stdafx.h"
#include <iostream>
#include <string>
//standered namespace
using namespace std; 

//delcaring Functions that are going to be used in Program
string GetTextFromUser(string prompt);
int GetNumbersFromUser(string prompt);
void DisplayUserComands();

//main function is where everything is made for the program to run
int main()
{
    //Variable to Hold name of player 
	string username = "";
	{
		cout << "Welcome to The The Temple of The Lost Fortune Game" << endl;
	//Getting Ready to Call users name from the string function above
		username = GetTextFromUser("Enter Your Name: ");
	//tell the story

		cout << "You Find yourself in the middle of the Jungle.\n" << ; 




	}


	return 0;
}

