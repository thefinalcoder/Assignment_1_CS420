#ifndef PETSIM_H
#define PETSIM_H

#include <iostream>
#include <string>

using namespace std;

class PetSim
{
    private:
        int hungerLvl;
        int bordemLvl;
        string name;

        int PetMood() const;
        void PassTime(int time = 1 );

        public:
            PetSim(int hunger, int bordem, string petName);
            void Talk();
            void FeedPet(int food = 4);
            void Play(int fun = 4);
            void ShowPetStats() const;
            void Menu();

};

#endif // PETSIM_H