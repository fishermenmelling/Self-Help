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

void mainQuestion();

char yesNoQuestion() {
    std::cout << "(y/n + enter/return)\n";
    char answer;
    std::cin >> answer;
    return answer;
}

char retryQuestion() {
    std::cout << "\nretry? ";
    return yesNoQuestion();
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
    std::cout << "Is it close to bedtime?\n Answer: ";
    char a = yesNoQuestion();
    
    if (a == 'y') {
        std::cout << "Get ready for bed\n";
    } else if (a == 'n') {
        std::cout << "Think about going for a walk\n";
    } else {
        std::cout << "Don't fall asleep on the couch\n";
    }
}

void intolerant() {
    std::cout << "Go somewhere else\n";
    std::cout << "And don't ever expect the worst!\n";
}

void bored() {
    std::cout << "Turn on the switch or Disney+ or Paramount+\n";
}

void stressed() {
    std::cout << "Take a walk\n";
    std::cout << "And don't ever expect the worst!\n";
}

void unmotivated() {
    
    std::cout << "And don't ever expect the worst!\n";
    std::cout << "Do you have something to do that you are either overwelmed by or just ecsessively not interested in doing?\n";
    if (yesNoQuestion() == 'y') {
        std::cout << "Divide the task into smaller pieces. These pieces can be in any order that can reasonably result in a finished task. I would start by the most fun or easiest task since I know I will be more motivated after I start working.\n";
    }
    else {
        bedtimeQuestion();
    }
}

void nervous() {
    std::cout << "Take one step toward the thing you are nervous about doing\n";
    std::cout << "And don't ever expect the worst!\n";
}

void sleepy() {
    std::cout << "Sick tired?\n";
    if (yesNoQuestion() == 'y') {
        bedtimeQuestion();
    } else {
        std::cout << "Sleepy or Exhasted?\n";
        if (yesNoQuestion() == 'y') {
            bedtimeQuestion();
        }
    }
    
}

void paranoid() {
    std::cout << "Don't ever assume the worst!\n";
    std::cout << "Move on, learn from it, and don't worry about it anymore\n";
}

void hungry() {
    
    std::cout << "For junk/fast food?\n";
    if (yesNoQuestion() == 'y') {
        std::cout << "Eat nuts, granola bars, cereal, tortillas\n";
    } else {
        std::cout << "For Sugar or Chocolate?\n";
        if (yesNoQuestion() == 'y') {
            std::cout << "eat fruit like:\n bannanas\n pineapple\n mangos\n grapes\n watermelon\n";
        } else {
            std::cout << "For excessive protien?\n";
            if (yesNoQuestion() == 'y') {
                std::cout << "Did you know that ramen noodles is pretty filling?\n";
            } else {
                std::cout << "\nHere are meal suggestions: \n";
                foodMaking();
            }
        }
    }
}

void pessimistic() {
    std::cout << "Expect better things\n";
}

void sad() {
    std::cout << "What are you sad about?\n";
    std::cout << "\n1 Feelings of worthlessness\n2 Feelings of hopelessness\n3 Feelings of regret \n\nAnswer: ";
    
    int t;
    
    std::cin >> t;
    
    switch (t) {
        case 1:
            std::cout << "Soooo many people like me. I have positively influenced over 100 lives.\n";
            break;
        case 2:
            std::cout << "I can do anything I need to with the help of Jesus Christ and his grace\n";
            break;
        case 3:
            std::cout << "Isaiah 1:18: “Come now, let us reason together, says the Lord: though your sins are like scarlet, they shall be as white as snow; though they are red like crimson, they shall become like wool.\n";
        default:
            sad();
            break;
    }
    
}

void answers(int t) {
    std::cin >> t;
    switch (t) {
        case 1:
            intolerant();
            break;
        case 2:
            bored();
            break;
        case 3:
            stressed();
            break;
        case 4:
            unmotivated();
            break;
        case 5:
            nervous();
            break;
        case 6:
            sleepy();
            break;
        case 7:
            paranoid();
            break;
        case 8:
            hungry();
            break;
        case 9:
            pessimistic();
            break;
        case 10:
            sad();
            break;
        default:
            std::cout << "Pray about it\n";
            mainQuestion();
            break;
    }
}

void mainQuestion() {
    int t;
    std::cout << "How do you feel?\n";
    std::cout << "  1 intolerant\n  2 bored\n  3 stressed\n  4 unmotivated\n  5 nervous\n  6 sleepy\n  7 paranoid\n  8 hungry\n  9 pessimistic\n  10 sad\n\n Answer: ";

    answers(t);
    
    std::cout << "\n";
}
 
#endif /* Self_Help_h */
