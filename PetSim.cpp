#include "PetSim.h"

int PetSim::PetMood() const
{
    return hungerLvl + bordemLvl;
}

void PetSim::PassTime(int time)
{
    hungerLvl += time;
    bordemLvl += time;
}

PetSim::PetSim(int hunger, int bordem, string petName)
{
    hungerLvl = hunger;
    bordemLvl = bordem;
    name = petName;
}

void PetSim::Talk()
{
    cout << "Hello, my name is " << name << "!" << endl;
    cout << "My mood is " << PetMood() << endl;
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
    bordemLvl -= fun;
    if (bordemLvl < 0)
    {
        bordemLvl = 0;
    }
    PassTime();
}

void PetSim::ShowPetStats() const
{
    cout << "Name: " << name << endl;
    cout << "Hunger Level: " << hungerLvl << endl;
    cout << "Bordem Level: " << bordemLvl << endl;
}

void PetSim::Menu()
{
    int choice;
    cout << "1. Talk to " << name << endl;
    cout << "2. Feed " << name << endl;
    cout << "3. Play with " << name << endl;
    cout << "4. Show " << name << " stats" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            Talk();
            break;
        case 2:
            FeedPet();
            break;
        case 3:
            Play();
            break;
        case 4:
            ShowPetStats();
            break;
        case 5:
            cout << "Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
    }
}
