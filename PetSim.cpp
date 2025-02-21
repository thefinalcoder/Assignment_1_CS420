#include "PetSim.h"

int PetSim::PetMood() const
{
    return hungerLvl + boredomLvl;
}

void PetSim::PassTime(int time)
{
    hungerLvl += time;
    boredomLvl += time;
}

PetSim::PetSim(int hunger, int bordem, string petName)
{
    hungerLvl = hunger;
    boredomLvl = bordem;
    name = petName;
}

void PetSim::Talk() {
    cout << name << " says: ";
    int mood = PetMood();
    if (mood < 7)
        cout << "I'm happy!" << endl;
    else if (mood < 16)
        cout << "I'm okay." << endl;
    else if (mood < 21)
        cout << "I'm frustrated!" << endl;
    else
        cout << "I'm mad!" << endl;
    PassTime();
}

void PetSim::FeedPet(int food)
{
    cout << "You feed " << name << " some food." << endl;
    hungerLvl -= food;
    if (hungerLvl < 0)
    {
        hungerLvl = 0;
    }
    PassTime();
}

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

};
