// Choose Your Own Adventure.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void showIntroduction(); //base choice
    void handleCave(); //route 1
        void handleDarkTunnel(); //route 1a
            void handleOpen(); //mimic ending
            void handleStab(); //enchanted mace ending
        void handleFaintLight(); //route 1b
            void handleTurn(); //gold ending
            void handleGrab(); //goblin ending
    void handleAvoid(); //route 2
        void handleTown(); //route 2a
            void handleWerewolf(); //werewolf ending
            void handleBoar(); //underachiever ending
        void handleBigCity(); //route 2b
            void handleBaron(); //baron's agent ending
            void handleTownsfolk(); //hero of the people ending

int getPlayerChoice(int numChoices);

int main()
{
    int numChoices = 0;
    showIntroduction();
    numChoices = getPlayerChoice(numChoices);
    if (numChoices == 1) { handleCave(); }
    else if (numChoices == 2) { handleAvoid(); }
    return 0;
}

void showIntroduction()
{
    cout << "You are traveling down an old dusty road when you see a cave entrance. Do you... \n"
        << endl << "1. enter the tunnel?"
        << endl << "or"
        << endl << "2. avoid the dark cave?" << endl;

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

void handleCave()
{
    int numChoices = 0;
    cout << "Soon after entering the cave you reach a forked passage, one end leads down a dark tunnel, the other end has a faint light at the end. Which path do you take? \n"
        << endl << "1. The dark tunnel?"
        << endl << "or"
        << endl << "2. The tunnel with a faint light at the end?" << endl;
    numChoices = getPlayerChoice(numChoices);
    if (numChoices == 1) {handleDarkTunnel();}
    else if (numChoices == 2) {handleFaintLight();}
}

void handleDarkTunnel()
{
    int numChoices = 0;
    cout << "You head down the dark tunnel... \n" 
         << "After feeling your way down the dark tunnel, you reach something that feels almost wooden... or scaley... you strike a match and see a chest in front of you. do you... \n"
         << endl << "1. Open the suspicious chest?"
         << endl << "or"
         << endl << "2. Take out your blade and stab into it?" << endl;
    numChoices = getPlayerChoice(numChoices);
    if (numChoices == 1) { handleOpen(); }
    else if (numChoices == 2) { handleStab(); }
}

void handleOpen()
{
    cout << "you open the chest to find rows of teeth \n"
         << "MIMIC ENDING";
}

void handleStab()
{
    cout << "you stab the chest, a shriek follows as the chest opens itself and within you find an enchanted mace. \n"
         << "ENCHANTED MACE ENDING";
}

void handleFaintLight()
{
    int numChoices = 0;
    cout << "You head down the tunnel with the faint light...  \n"
         << endl << "1. turn?"
         << endl << "or"
         << endl << "2. grab?" << endl;
    numChoices = getPlayerChoice(numChoices);
    if (numChoices == 1) { handleTurn(); }
    else if (numChoices == 2) { handleGrab(); }
}

void handleTurn()
{
    cout << "turn text \n"
        << "GOLD ENDING";
}

void handleGrab()
{
    cout << "grab text \n"
        << "GOBLIN ENDING";
}

void handleAvoid()
{
    int numChoices = 0;
    cout << "You decide delving into dark caves may not be the wisest of choices. As you continue down the dusty road you run into a signpost that indicates that there is a small town to the west and a larger city to the north. Do you... \n"
         << endl << "1. Head west to the small town?"
         << endl << "or"
         << endl << "2. Head east to the big city?" << endl;
    numChoices = getPlayerChoice(numChoices);
    if (numChoices == 1) { handleTown(); }
    else if (numChoices == 2) { handleBigCity(); }
}

void handleTown()
{
    int numChoices = 0;
    cout << "town text \n"
         << endl << "1. werewolf text?"
         << endl << "or"
         << endl << "2. boar text?" << endl;
    numChoices = getPlayerChoice(numChoices);
    if (numChoices == 1) { handleWerewolf(); }
    else if (numChoices == 2) { handleBoar(); }
}

void handleWerewolf()
{
    cout << "werewolf text \n"
        << "WEREWOLF ENDING";
}

void handleBoar()
{
    cout << "boar text \n"
        << "UNDERACHIEVER ENDING";
}

void handleBigCity()
{
    int numChoices = 0;
    cout << "bigcity text \n"
         << endl << "1. baron text?"
         << endl << "or"
         << endl << "2. townsfolk text?" << endl;
    numChoices = getPlayerChoice(numChoices);
    if (numChoices == 1) { handleBaron(); }
    else if (numChoices == 2) { handleTownsfolk(); }
}

void handleBaron()
{
    cout << "baron text \n"
        << "BARON'S AGENT ENDING";
}

void handleTownsfolk()
{
    cout << "townsfolk text \n"
        << "HERO OF THE PEOPLE ENDING";
}