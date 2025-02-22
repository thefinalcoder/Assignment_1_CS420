#include "PetSim.h"

// Returns the pet's mood based on hunger and boredom levels
int PetSim::PetMood() const
{
    return hungerLvl + boredomLvl;
}

// Increases hunger and boredom levels by the specified time
void PetSim::PassTime(int time)
{
    hungerLvl += time;
    boredomLvl += time;
}

// Constructor to initialize the pet's hunger, boredom levels, and name
PetSim::PetSim(int hunger, int bordem, string petName)
{
    hungerLvl = hunger;
    boredomLvl = bordem;
    name = petName;
}

// Displays the pet's mood based on its current state
void PetSim::Talk() {
    cout << name << " says: ";
    int mood = PetMood();
    if (mood < 7)
        cout << "I am happy! :D" << endl;
    else if (mood < 16)
        cout << "I am okay :P." << endl;
    else if (mood < 21)
        cout << "I am frustrated! :/" << endl;
    else
        cout << "I am mad! >:(" << endl;
    PassTime();
}

// Feeds the pet and decreases its hunger level
void PetSim::FeedPet(int food)
{
    cout << "You feed " << name << " some yummy food." << endl;
    hungerLvl -= food;
    if (hungerLvl < 0)
    {
        hungerLvl = 0;
    }
    PassTime();
}

// Plays with the pet and decreases its boredom level
void PetSim::Play(int fun)
{
    cout << "You play with " << name << "." << endl;
    boredomLvl -= fun;
    if (boredomLvl < 0)
    {
        boredomLvl = 0;
    }
    cout << "You played with " << name << ". Boredom level now: " << boredomLvl << endl;
    PassTime();
}

// Displays the pet's current hunger and boredom levels and its behavior
void PetSim::DisplayPetBehavior() const
{
    cout << name << "'s Hunger Level: " << hungerLvl << ", Boredom Level: " << boredomLvl << endl;
    if (hungerLvl < 3 && boredomLvl < 3)
        cout << name << " is happy and content." << endl;
    else if (hungerLvl >= 11)
        cout << name << " is very hungry!" << endl;
    else if (boredomLvl >= 11)
        cout << name << " is very bored!" << endl;
    else
        cout << name << " is doing okay." << endl;
}

// Displays a menu for interacting with the pet and processes user input
void PetSim::Menu() {
    int choice;
    do {
        cout << "\nMenu:\n1. Talk\n2. Feed\n3. Play\n4. Display Behavior\n5. Quit\nChoice: ";
        cin >> choice;
        switch (choice) {
            case 1: Talk(); break;
            case 2: FeedPet(); break;
            case 3: Play(); break;
            case 4: DisplayPetBehavior(); break;
            case 5: cout << "Goodbye!" << endl; break;
            default: cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 5);
}
