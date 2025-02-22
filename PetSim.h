#ifndef PETSIM_H
#define PETSIM_H

#include <iostream>
#include <string>

using namespace std;

class PetSim
{
    private:
        int hungerLvl;
        int boredomLvl;
        string name;

        int PetMood() const;
        void PassTime(int time = 1);

    public:
        // Constructors
        PetSim(int hunger, int boredom, string petName);
        
        // Setters
        void setHungerLvl(int hunger);
        void setBoredomLvl(int boredom);
        void setName(string petName);

        // Getters
        int getHungerLvl() const;
        int getBoredomLvl() const;
        string getName() const;

        // Other functions
        void Talk();
        void FeedPet(int food = 4);
        void Play(int fun = 4);
        void DisplayPetBehavior() const;
        void Menu();
};

#endif // PETSIM_H
