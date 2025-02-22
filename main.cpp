#include "PetSim.h"

int main()
{
    string name;       // Variable to store the pet's name
    string input;      // Variable to store user input
    int hunger = 0;    // Initial hunger level
    int boredom = 0;   // Initial boredom level

    // Prompt the user to enter the pet's name
    cout << "Enter your pet's name (Default 'Pet'): ";
    getline(cin, name);
    if (name.empty()) name = "Pet";  // Set default name if none is provided

    // Prompt the user to enter the pet's hunger level
    cout << "Enter hunger level (Default " << hunger << "): ";
    getline(cin, input);
    if (!input.empty()) hunger = stoi(input);  // Set hunger level if provided

    // Prompt the user to enter the pet's boredom level
    cout << "Enter boredom level (Default " << boredom << "): ";
    getline(cin, input);
    if (!input.empty()) boredom = stoi(input);  // Set boredom level if provided

    // Create a PetSim object with the provided or default values
    PetSim pet(hunger, boredom, name);
    
    // Display the menu for interacting with the pet
    pet.Menu();

    return 0;  // End of the program
}
