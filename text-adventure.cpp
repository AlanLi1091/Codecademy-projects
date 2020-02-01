#include <iostream>

int main()  {

    int selection;

    int attempt = 0;
    
    std::cout << "Welcome to the dungeon. You have three choices: ";
    std::cout << "The first choice is a raid boss.";
    std::cout << "The second choice is a group of minions.";
    std::cout << "The third choice is a mix of minions and large monsters";
    std::cout << "Which one do you prefer?";
    std::cout << "Please choose 1, 2, or 3.";

    std::cin >> selection;

    if (selection >= 4 || selection = 0) {

        std::cout << "Your selection is invalid, please make a choice";

    }
    

}