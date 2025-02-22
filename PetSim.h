#ifndef PETSIM_H
#define PETSIM_H

#include <iostream>
#include <string>

using namespace std;

// Class representing a virtual pet simulation
class PetSim
{
    private:
        int hungerLvl;    // Pet's hunger level
        int boredomLvl;   // Pet's boredom level
        string name;      // Pet's name

        // Returns the pet's mood based on hunger and boredom levels
        int PetMood() const;
        
        // Increases hunger and boredom levels by the specified time
        void PassTime(int time = 1);

    public:
        // Constructor to initialize the pet's hunger, boredom levels, and name
        PetSim(int hunger, int boredom, string petName);
        
        // Setters for pet's attributes
        void setHungerLvl(int hunger);
        void setBoredomLvl(int boredom);
        void setName(string petName);

        // Getters for pet's attributes
        int getHungerLvl() const;
        int getBoredomLvl() const;
        string getName() const;

        // Other functions to interact with the pet
        void Talk();                       // Displays the pet's mood
        void FeedPet(int food = 4);        // Feeds the pet
        void Play(int fun = 4);            // Plays with the pet
        void DisplayPetBehavior() const;   // Displays the pet's current behavior
        void Menu();                       // Displays a menu for interacting with the pet
};

#endif // PETSIM_H
