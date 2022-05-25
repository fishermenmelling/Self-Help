//
//  main.cpp
//  Self Help
//
//  Created by mark melling on 5/24/22.
//

#include <iostream>
#include "Self Help.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    int t;
    std::cout << "How do you feel?\n";
    std::cout << "  1 intolerant\n  2 bored\n  3 stressed\n  4 unmotivated\n  5 nervous\n  6 sleepy\n  7 paranoid\n\n Answer: ";
    
    std::cin >> t;
    
    switch (t) {
        case 1:
            //intolerant
            std::cout << "Go somewhere else\n";
            break;
        case 2:
            //bored
            std::cout << "Turn on the switch\n";
            break;
        case 3:
            //stressed
            std::cout << "Take a walk\n";
            break;
        case 4:
            //unmotivated
            std::cout << "Divide the task into smaller pieces\n";
            break;
        case 5:
            //nervous
            std::cout << "Take one step toward the thing you are nervous about doing\n";
            break;
        case 6:
            //sleepy
            std::cout << "Is it close to bedtime?(y/n)\n Answer: ";
            char a;
            std::cin >> a;
            if (a == 'y') {
                std::cout << "Get ready for bed\n";
            } else if (a == 'n') {
                std::cout << "Think about going for a walk\n";
            } else {
                std::cout << "Don't fall asleep on the couch\n";
            }
            break;
        case 7:
            std::cout << "Move on, learn from it, and don't worry about it anymore\n";
            break;
        default:
            std::cout << "Pray about it\n";
            break;
    }
    return 0;
}
