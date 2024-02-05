#include <iostream>
#include <string>
#include <SDL2/SDL.h>
#include <stdio.h>
#include <chrono>
#include <thread>

using namespace;
// & denotes function parameter that the function is taking a reference to a std::string rather than making a copy of it. Pass by reference. More efficient because it avoids unnecessary copying. 
void printText(const std::string& text)
{
	for (char c : text)
	{
		std::cout << c << std::flush;
		std::this_thread::sleep_for(std::chrono::milliseconds(100));
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

	string text16 = "You find yourself in a dark room \n";
}
