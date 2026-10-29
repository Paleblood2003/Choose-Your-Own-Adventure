// Choose Your Own Adventure.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void showIntroduction();
void handleCaveEntrance();
void handleDarkTunnel();
void handleFaintLight();
int getPlayerChoice(int numChoices);

int main()
{
    int numChoices = 0;
    showIntroduction();
    handleCaveEntrance();
    numChoices = getPlayerChoice(numChoices);
    if (numChoices == 1)
    {
        handleDarkTunnel();
    }
    else if (numChoices == 2)
    {
        handleFaintLight();
    }
}

void showIntroduction()
{
    cout << "You are traveling down an old dusty road when you see a cave entrance." << endl;
}

int getPlayerChoice(int numChoices)
{
    while (true)
    {
        cin >> numChoices;
        if (numChoices == 1 || numChoices == 2)
        {
            return numChoices;
        }
        cout << "Invalid input, please enter either 1 or 2." << endl;
    }
}

void handleCaveEntrance()
{
    cout << "Soon after entering the cave you reach a forked passage, one end leads down a dark tunnel, the other end has a faint light at the end. Which path do you take? \n"
        << endl << "1. The dark tunnel?"
        << endl << "or"
        << endl << "2. The tunnel with a faint light at the end?" << endl;
}

void handleDarkTunnel()
{
    cout << "Congrats! you found a chest containing an enchanted mace!"
        << endl << "GOOD ENDING";

}

void handleFaintLight()
{
    cout << "As you approached the light you see that it is the fading ember of a campfire, a goblin sneaks up behind you and stabs you in the back!"
        << endl << "BAD ENDING";
}