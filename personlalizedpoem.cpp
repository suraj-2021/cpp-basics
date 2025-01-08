#include <iostream>
#include <string>

using namespace std;

// Function to generate a personalized poem
void generatePoem(const string& name, const string& color, const string& animal, const string& place) {
    cout << "\nHere's your personalized poem:\n";
    cout << "In the heart of " << place << ", where dreams take flight,\n";
    cout << name << " dances with joy, under the stars so bright.\n";
    cout << "With a splash of " << color << ", the world comes alive,\n";
    cout << "Like a brave little " << animal << ", ready to thrive.\n";
    cout << "Through fields of wonder, hand in hand we roam,\n";
    cout << "In this magical place, we've found our home.\n";
}

int main() {
    string name, color, animal, place;

    // Taking user inputs
    cout << "Welcome to the Personalized Poem Generator!\n";
    
    cout << "Please enter your name: ";
    getline(cin, name);

    cout << "What's your favorite color? ";
    getline(cin, color);

    cout << "Name an animal you love: ";
    getline(cin, animal);

    cout << "Where is your favorite place? ";
    getline(cin, place);

    // Generate and display the poem
    generatePoem(name, color, animal, place);

    return 0;
}
