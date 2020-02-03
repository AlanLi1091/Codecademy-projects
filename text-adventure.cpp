#include <iostream>

int main()  {

    int selection1;

    int selection2;

    int attempts = 0;
    
    std::cout << "Welcome to the dungeon. You have three choices: ";
    std::cout << "The first choice is a raid boss.";
    std::cout << "The second choice is a group of minions.";
    std::cout << "The third choice is a mix of minions and large monsters";
    std::cout << "Which one do you prefer?";
    std::cout << "Please choose 1, 2, or 3.";
    std::cin >> selection1;

    while (attempts <= 5 && selection1 >= 4 || selection1 <= 0) {

        std::cout << "Invalid choice, please try again.";
        std::cin >> selection1;
        attempts++;

    }
    if (selection1 == 1) {

        std::cout << "Alright, I know what you gonna do. You are such a brave guy. Your choice is the boss room.";
        std::cout << "But, there are two choice.";
        std::cout << "One of them is a flame two-head ogre. Once you killed it, you will get more power on attack damage.";
        std::cout << "The other one is aqua two-head ogre. Killing this monster will enable you to have some slow effect on attacks.";
        std::cout << "Which one do you choose?";

        std::cin >> selection2;

        if (selection2 == 1) {

            std::cout << "Thank you for choosing the fire monster.";
            std::cout << "This guy is powerful. Don't get hit. Good luck.";

        }
        else if (selection2 == 2) {
            
            std::cout << "Thank you for ghoosing the aqua monster.";
            std::cout << "While not as powerful as the other one, this big guy can slow you down and attack faster.";
            std::cout << "Good luck.";

        }
        else {

            std::cout << "Your choice is invalid. Please do it again.";

        }

    }
    if (selection1 == 2) {

        std::cout << "I understand you. The thing is, the minions are no slouch.";
        std::cout << "You have two choices. Which one do you prefer?";
        
        std::cin >> selection2;

        if (selection2 == 1) {
            
            std::cout << "Beware of poison, good luck!";

        }
        else if (selection2 == 2) {

            std::cout << "A massive wave of minions are waiting for you!";

        }
        else {

            std::cout << "Invalid choice. Please do it again.";

        }

    }
    if (selection1 == 3) {

        std::cout << "This section needs more tactics.";
        std::cout << "Please make a choice.";
        
        std::cin >> selection2;

        if (selection2 == 1) {

            std::cout << "Good luck. This option means you are going to fight minions with some carrying poions.";
            std::cout << "The large monster will be the flame one.";

        }
        else if (selection2 == 2) {
            
            std::cout << "Good luck. This option means a massive wave of minions and the water monster.";

        }
        else {
            
            std::cout << "Your choice is invalid. Please try again.";

        }

    }

}