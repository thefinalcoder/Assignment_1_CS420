#include "PetSim.h"

int main()
{
    string name;
    int hunger;
    int boredom;

    cout << "Enter the name of your pet: ";
    cin >> name;    
    cout << "Enter the hunger level of your pet: ";
    cin >> hunger;
    cout << "Enter the bordem level of your pet: ";
    cin >> boredom;

    PetSim pet(hunger, boredom, name);
    pet.Menu();

    return 0;

}