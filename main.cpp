#include "PetSim.h"

int main()
{
    string name;
    string input;
    int hunger = 0;  // Default values
    int boredom = 0;

    cout << "Enter your pet's name (Press Enter for default 'Pet'): ";
    getline(cin, name);
    if (name.empty()) name = "Pet";

    cout << "Enter hunger level (Press Enter for default " << hunger << "): ";
    getline(cin, input);
    if (!input.empty()) hunger = stoi(input);

    cout << "Enter boredom level (Press Enter for default " << boredom << "): ";
    getline(cin, input);
    if (!input.empty()) boredom = stoi(input);

    PetSim pet(hunger, boredom, name);
    pet.Menu();

    return 0;
}
