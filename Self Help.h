//
//  See_what_happens.h
//  See_what_happens
//
//  Created by mark melling on 5/24/22.
//

#ifndef See_what_happens_h
#define See_what_happens_h
#include <iostream>
#include <string>
#include <vector>

using namespace std;

char retryQuestion() {
    std::cout << "\nretry? (y/n + enter/return)\n";
    char answer;
    std::cin >> answer;
    return answer;
}

void foodMaking() {

    std::cout << "How easy of food are you wanting to make?\n\n";
    std::cout << "1 within the hour\n2 in need of a day's preparation\n\n";
    std::cout << "Answer: ";
    int b;
    std::cin >> b;
    std::cout << "\n";

    switch (b) {
        
        case 1:
            std::cout << "Chilli, potatoe, sour cream\n";
            std::cout << "Stuffing\n";
            std::cout << "Turkey Sandwitch\n";
            std::cout << "Grilled tuna sandwiches\n";
            std::cout << "Sub sandwich\n";
            std::cout << "Grapes\n";
            std::cout << "Bananas\n";
            std::cout << "Protien Shake\n";
            
            break;
            
        case 2:
            std::cout << "Hamburgers\n";
            std::cout << "Shepards pie\n";
            std::cout << "Crockpot chicken noodle soup\n";
            std::cout << "Crockpot Chili\n";
            std::cout << "Crockpot taco soup\n";
            std::cout << "Crockpot bbq meatballs\n";
            std::cout << "Burger Golosh\n";
            
            break;
        
        default:
            break;
    }
}

void bedtimeQuestion() {
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
}

void answers(int t) {
    switch (t) {
        case 1:
            //intolerant
            std::cout << "Go somewhere else\n";
            std::cout << "And don't ever expect the worst!\n";
            break;
        case 2:
            //bored
            std::cout << "Turn on the switch or Disney+ or Paramount+\n";
            break;
        case 3:
            //stressed
            std::cout << "Take a walk\n";
            std::cout << "And don't ever expect the worst!\n";
            break;
        case 4:
            //unmotivated
            std::cout << "Divide the task into smaller pieces\n";
            std::cout << "And don't ever expect the worst!\n";
            break;
        case 5:
            //nervous
            std::cout << "Take one step toward the thing you are nervous about doing\n";
            std::cout << "And don't ever expect the worst!\n";
            break;
        case 6:
            //sleepy
            bedtimeQuestion();
            break;
        case 7:
            //paranoid
            std::cout << "Don't ever assume the worst!\n";
            std::cout << "Move on, learn from it, and don't worry about it anymore\n";
            break;
        case 8:
            //hungry
            std::cout << "\n";
            foodMaking();
            break;
        case 9:
            //pessimistic
            std::cout << "Expect better things\n";
            break;
        default:
            std::cout << "Pray about it\n";
            break;
    }
}

void question() {
    int t;
    std::cout << "How do you feel?\n";
    std::cout << "  1 intolerant\n  2 bored\n  3 stressed\n  4 unmotivated\n  5 nervous\n  6 sleepy\n  7 paranoid\n  8 hungry\n\n Answer: ";
    
    std::cin >> t;
    
    
    answers(t);
    
    std::cout << "\n";
}

 
#endif /* Self_Help_h */
