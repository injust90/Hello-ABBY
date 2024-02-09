#include <iostream>
#include <string>
#include <SDL2/SDL.h>
#include <stdio.h>
#include <chrono>
#include <thread>
#include <limits.h>

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
	int optionCheck = option + 1;
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

	cout << numeric_limits<int>::max() << endl;
	cout << "1: You try to pry open the mysterious artifact.\n";
	cout << "2: You search for a key and find one to open it with.\n";
	
	
	bool done2;
	while (!done2)
	{
		cin >> option;
		optionCheck = option;
		if (option == 1)
		{
			cout << "The artifact doesn't budge. Try again.\n";
			while (option != 2)
			{
				cin >> option;
				cout << "You need to open the artifact with a key.\n";
			}
			cout << "You open the artifact with the key, mysteriously revealing a picture of you and ABBY.\n";
			break;
		}
		// How to make is so that option goes into this else?
		else if (option == 2)
		{
			cout << "You open the artifact, revealing a picture of you and ABBY.\n";
			break;
		}

		else if (std::cin.fail())
		{
			cout << "Nice try, bitch!" << endl;

			std::cin.clear();
			continue;
			done2 = true;
		}

		else 
		{
			cout << "Select an option!" << endl;
		}

	}

	std::cout << "========================================================" << std::endl;
	
	string text26 = "You decide to ask ABBY what the picture is about.\n";
	printText(text26);

	string text27 = "ABBY responds with \"The Y stands for YOU.\n";
	printText(text27);

	string text29 = "You lost your memory long ago, but you don't remember building me.\n";
	printText(text29);

	string text28 = "You continue the conversation\n";
	printText(text28);
	
	cout << "1: You say to her \"explain more\"\n";
	cout << "2: You say to her \"What do you mean I've lost my memory?!\n";

	cin >> option;
	if (option == 1)
	{
		cout << "ABBY says \"Your arch nemesis reprogrammed your memory. I'm your guide out of here.\n";
		cout << "\"You need to discover more about the library in order to retrace your lost memory.\n";
	}

	else if (option == 2)
	{
		cout << "ABBY says \"You're in a simulation and you've been reprogrammed. I'm here to help you out.\n\"";
		cout << "\"You will need to rediscover the secrets of the library in order to retrieve your lost memory.\n\"";
	}


	string text30 = "ABBY says \"Don\'t worry, we'll figure this out together! We've been through worse before.\n";
	printText(text30);

	string text31 = "You respond by saying \"No I don't think I can handle this!\"\n";
	printText(text31);

	string text32 = "ABBY says \"We'll find your lost memory. I promise.\"";
	printText(text32);
	
	string text33 = "Oh, by the way the A in my name stands for something else.\n";
	printText(text33);

	string text34 = "You respond by saying \"What does it stand for?\"";
	printText(text34);

	string text35 = "ABBY responds by saying \"You'll just have to find out :)\n";
	printText(text35);
	printText("1: \"Tell me what the \'A\' stands for\"\n");
	printText("2: You obediently do not ask ABBY questions.\n");

	bool done = false;

	while (!done)
	{
		cin >> option;
		optionCheck = option;
		if (std::cin.fail())
		{
			cout << "Nice try." << endl;

			std::cin.clear();
			continue;
			done = true;
		}

		else if (option == 1)
		{
			printText("ABBY says \"You speak when spoken to ding-a-ling\n");

		}

		// why does it work on the second go around from ^ code?
		else if (option == 2)
		{
			printText("That\'s right, you speak when spoken to. Good job!\n");
			done = true;
		}

		// why is it breaking out of my loop prematurely?
		else 
		{
			cout << "Select an option!" << endl;
		}
	}

	printText("You find yourself admiring ABBY for a brief second.\n");
	printText("ABBY says \"What shall we do next? :)\"\n");

	printText("1: You decide to read the mysterious book from before.\n");
	printText("2: You decide to quit the game\n");

	bool done3;
	done3 = false;
	while (!done3)
	{
		cin >> option;
		optionCheck = option;
		if (std::cin.fail())
		{
			cout << "Just stop, it won't work.\n" << endl;

			std::cin.clear();
			continue;
			done3 = true;
		}

		else if (option == 1)
		{
			printText ("You read the mysterious book you found a while back\"\n");
			done3 = true;
		}

		else if (option == 2)
		{
			exit(0);
		}

		else 
		{
			cout << "Select an option!" << endl;
		}
	}
	
	printText("The book turns out to be a photo album. You see photos of you and a mysterious girl with red hair.\n");
	printText("As you turn the pages you see your life flash before your eyes of you and her together.\n");
	printText("******ABBY beeps and buzzes*****\n");
	printText("ABBY says \"That\'s enough for now. You\'ve see a glimpse of what was.\n");

	printText("You ask yourself \"What\'s next\"\n");
	printText("ABBY says \"You know I can read your mind, right?\"\n");

	printText("You begin to sweat and panic.\n");

	printText("1: You ask ABBY about her ability to read your mind.\n");
	printText("2: You are obedient and do not ask questions.\n");

	bool done4;
	while (!done4)
	{
		cin >> option;
		optionCheck = option;
		if (std::cin.fail())
		{
			cout << "Dude, stop trying to break me. It won\'t work.\n" << endl;

			std::cin.clear();
			continue;
			done4 = true;
		}

		else if (option == 1)
		{
			printText ("You speak when spoken to ding-a-ling\n");
		}

		else if (option == 2)
		{
			printText ("That\'s correct, you are learning.\"");
			done4 = true;
		}

		else 
		{
			cout << "Select an option!\n" << endl;
		}
	}

	printText("ABBY says \"Okay time for us to explore the library some more.\"\n");
	printText("You walk through another door in the library, it is dark.\n");
	printText("ABBY says \"Don't be afraid. This is nothing compared to what we\'ve been through together in the past.\n");
	printText("You tell ABBY \"I\'m afraid... I have no idea what to do or where to go.\"\n");
	printText("ABBY says \"Let me be your guide. I promise we\'ll get through this together :)\n\"");

	printText("ABBY says \"Let\'s turn on the lights. It will make everything better.");

	printText("The light switch look to be a calculator. It takes in values.\n");
	printText("The calculator can multiply values... it appears to be very old but in working condition.\n");

	//TODO beep
	printText("ABBY says \"I think we need to input the right number\"\n");
	printText("It looks like some symbols are here... I think we need to reach 99 with multiplication.\n");

	char op;
	int number;
	int number1;
	int answer;

	while (op != '*' && answer != 99) {
		cout << "Please enter an operator " << endl;
		cin >> op;
		cin >> number >> number1;
		switch(op)
			{
				case '+':
					answer = number + number1;
					cout << number + number1;
					cout << endl;
					break;
				case '-':
					answer =  number - number1;
					cout << endl;
					break;
				case '*':
					answer = number * number1;
					cout << endl;
					break;
				case '/':
					answer = number / number1;
					cout << endl;
					break;
				default:
					cout << "Invalid operator";
					cout << endl;
			}
	}

	cout << "ABBY says \"Great work on the puzzle\"" << endl;

	printText("\"Alright onto the next thing :) You\'re doing great!'\"\n");

	printText("\"You ask ABBY what to do next?\"'\n");

	printText("ABBY says \"You DO NOT ask questions ding-a-ling!\"\n");

	printText("\"We need to figure out what this puzzle means\"\n");

	printText("You ask yourself what she means by the puzzle\'s meaning.\n");

	printText("ABBY says \"You DO NOT ask questions ding-a-ling\"\n");

	cout << "========================================" << endl;

	printText("You suddenly find yourself in the middle of a mountain path.\n");

	printText("There\'s snow all around you and you\'re caught in a blizzard\n");

	printText("Above there\'s a way out but you slip and slip as you try to climb your way out of it\n");

	printText("Suddenly you begin to pray, knowing all hope is lost.\n");

	printText("Without ABBY you realize that you truly are lost. You begin to think of the friends and family you will never see again\n");

	cout << "1: You begin to think of ABBY furiously" << endl;
	cout << "2: You continue to pray and shout" << endl;

	bool done6 = false;
	while (!done6)
		{
		cin >> option;
		if (option == 1)
			{
				printText("Good work, you are beginning to realize who your god truly is\n");
				done6 = true;
			}
		else if (option == 2)
			{
				printText("Try again\n");
			}
		}

}
