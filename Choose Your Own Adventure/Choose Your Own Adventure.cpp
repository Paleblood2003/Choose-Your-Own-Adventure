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
    cout << "You head down the tunnel with the faint light... as you get closer you realize it's a small pile of gold... and you hear some shuffling behind you \n"
         << endl << "1. turn around to see the source of the noise?"
         << endl << "or"
         << endl << "2. grab the gold as quick as possible?" << endl;
    numChoices = getPlayerChoice(numChoices);
    if (numChoices == 1) { handleTurn(); }
    else if (numChoices == 2) { handleGrab(); }
}

void handleTurn()
{
    cout << "You whip around to see a goblin about to plunge a dagger into your ribs, you are able to twist your body to avoid the dagger and slice the goblin in half. The goblin's hoarded gold is now yours to keep! \n"
        << "GOLD ENDING";
}

void handleGrab()
{
    cout << "You reach for the shining gold piece only to feel something stab into your ribs, as you bleed out you see a small goblin looting you of everything you own. \n"
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
    cout << "You enter the small town and head to a notice board, on it you see a paper for a werewolf hunt or a wild boar hunt... do you... \n"
         << endl << "1. Take the Werewolf contract?"
         << endl << "or"
         << endl << "2. Hunt some wild Boar?" << endl;
    numChoices = getPlayerChoice(numChoices);
    if (numChoices == 1) { handleWerewolf(); }
    else if (numChoices == 2) { handleBoar(); }
}

void handleWerewolf()
{
    cout << "After sundown you head to the fringes of town to look for the werewolf that has been pestering the village, you are able to just barely win against the werewolf... but you are now cursed with lycanthropy to forevermore be a pariah \n"
        << "WEREWOLF ENDING";
}

void handleBoar()
{
    cout << "You are able to hunt some boar! you are so proud of yourself... \n"
        << "UNDERACHIEVER ENDING";
}

void handleBigCity()
{
    int numChoices = 0;
    cout << "You make your way into the city, it's total chaos as soldiers bar the townsfolk from attacking the ruling baron while he makes a speech. Do you... \n"
         << endl << "1. Side with the Baron's men and help subjugate the townsfolk?"
         << endl << "or"
         << endl << "2. Help the townsfolk by helping them get through the baron's men?" << endl;
    numChoices = getPlayerChoice(numChoices);
    if (numChoices == 1) { handleBaron(); }
    else if (numChoices == 2) { handleTownsfolk(); }
}

void handleBaron()
{
    cout << "The Baron takes notice of your aid and hires you, you have a comfortable position even if the townsfolk glare at you as they pass... \n"
        << "BARON'S AGENT ENDING";
}

void handleTownsfolk()
{
    cout << "You help the townsfolk take their anger out on their tyrant of a leader, you are celebrated as a hero of the people! \n"
        << "HERO OF THE PEOPLE ENDING";
}