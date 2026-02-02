#include "voice_login.h"
#include <iostream>

bool voice_login() {
    std::cout << "[*] say your username: ";
    std::string user; std::cin >> user;
    std::cout << "[*] say your password: ";
    std::string pass; std::cin >> pass;
    // Simulated single admin user
    return (user == "admin" && pass == "password");
}
