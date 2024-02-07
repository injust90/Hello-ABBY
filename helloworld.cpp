#include <iostream>
#include <string>
#include <SDL2/SDL.h>
#include <stdio.h>
#include <chrono>
#include <thread>

using namespace std;
// & denotes function parameter that the function is taking a reference to a std::string rather than making a copy of it. Pass by reference. More efficient because it avoids unnecessary copying. 
void printText(const std::string& text)
{
	for (char c : text)
	{
		std::cout << c << std::flush;
		std::this_thread::sleep_for(std::chrono::milliseconds(50));
	}
}

int main()
{
	int option;
	std::string name;

	std::string text1 = "Welcome to the library!\n";
	printText(text1);

	std::cout << "========================================================" << std::endl;

	std::string text2 = "You've found yourself in the middle of the library. \n";	
	printText(text2);

	std::string text3 = "There's an old computer in the corner of the room you decide to turn on.\n";
	printText(text3);

	std::string text4 = "*The machine beeps and buzzes*\n";
	printText(text4);

	std::string text5 = "You look at the screen and suddenly see: \n";
	printText(text5);

	std::string text6 = "Hi my name is ABBY\n";
	printText(text6);

	std::string text7 = "What is your name?\n";
	printText(text7);

	std::cin >> name;

	std::string text8 = "Hi, ";
	printText(text8);
	printText(name);
	std::cout << "!\n";

	std::string text9 = "What does ABBY stand for you ask?\n";
	printText(text9);

	std::string text10 = "It stands for Advanced Baby Babbling...I forgot the rest!\n";
	printText(text10);

	std::string text11= "Maybe you can help me rediscover my name... it's been so long\n";
	printText(text11);

	std::string text12 = "Do you want to help me out?\n"; 
	printText(text12);
	std::string text13 = "1: You help out ABBY\n";
	printText(text13);

	std::string text14 = "2: You don't want to help ABBY\n";
	printText(text14);
	std::cin >> option;

	if (option == 1)
	{
		std::cout << "I'm so glad you want to help me out! :)" << std::endl;
	}
	else if (option == 2)
	{
		std::cout << "Aww okay :(" << std::endl;
		exit(0);
	}

	std::string text15 = "Let's proceed with our adventure!\n";
	printText(text15);

	string text16 = "The lights go out! \n";
	printText(text16);

	string text17 = "What do you want to do? \n";
	printText(text17);

	string text18 = "1: You search for the lights\n";
	printText(text18);

	string text19 = "2: You cry in a corner of the room. All hope is lost.\n";
	printText(text19);

	cin >> option;
	if (option == 1)
	{
		cout << "You find a mysterious textbook\n";
	}
	else if (option == 2)
	{
		std::cout << "ABBY tells you to stop crying and suck it up\n.";
	}
	

	
	string text20 = "What do you want to do with the mysterious textbook?\n";
	printText(text20);
	cout << "1: Pickup 2: Discard 3: Inspect" << endl;
	cin >> option;

	if (option == 1)
	{
		cout << "The textbook begins to glow mysteriously under your fingertips.\n";
	}
	else if (option == 2)
	{
		cout << "The textbook disappears from your hands. You lose" << endl;
		exit(0);
	}
	else
	{
		cout << "The textbook appears to be old and fragile.\n" << endl;
	}

	string text21 = "ABBY says \"You need to read the book, it tells the story of us.\"\n";
	printText(text21);

	string text22 = "Confused you ask ABBY what she means by that.\n";
	printText(text22);

	string text23 = "ABBY says \"You'll find out, continue to discover the secrets of the library.\" \n";
	printText(text23);

	string text24 = "You enter into another room in the library.\n";
	printText(text24);

	string text25 = "You find a mysterious artifact that has a keyhole. What do you want to do with it?\n";
	printText(text25);
	
	cout << "1: You try to pry open the mysterious artifact.\n";
	cout << "2: You search for a key and find one to open it with.\n";
	
	cin >> option;
	if (option == 1)
	{
		cout << "The artifact doesn't budge. Try again.\n";
		while (option != 2)
		{
			cin >> option;
			cout << "You need to open the artifact with a key.\n";
		}
		cout << "You open the artifact with the key, mysteriously revealing a picture of you and ABBY.\n";
	}
	// How to make is so that option goes into this else?
	else if (option == 2)
	{
		cout << "You open the artifact, revealing a picture of you and ABBY.\n";
	}

	std::cout << "========================================================" << std::endl;
	
	std::cout << "You decide to ask ABBY what the picture is about.\n";

	cout << "ABBY responds with \"The Y stands for YOU.\n";
	cout << "You lost your memory long ago, but you don't remember building me.\n";
}
