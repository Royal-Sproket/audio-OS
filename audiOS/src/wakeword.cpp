#include "wakeword.h"
#include <iostream>

bool detect_wake_word() {
    std::cout << "[*] Type your wake word (default is 'computer'): ";
    std::string input; std::cin >> input;
    return input == "computer";
}
