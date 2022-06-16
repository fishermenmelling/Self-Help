//
//  main.cpp
//  Self Help
//
//  Created by mark melling on 5/24/22.
//

#include <iostream>
#include "Self Help.h"

int main(int argc, const char * argv[]) {
    
    int number = 100;
    
    
    for (int i = 0; i < number; i++) {
        mainQuestion();
        char continue_or_not_answer = retryQuestion();
        
        if (continue_or_not_answer != 'y') {
            return 0;
        }
        std::cout << "\n";
    }
    return 0;
}





