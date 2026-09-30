#include <iostream>
#include <string>
#include <print>

int main() {
    std::string input;
    std::getline(std::cin, input); // read the username
    if (input.empty()) {
        std::println("Refuse: le pseudo est vide");
    } else if (input.size() < 3) {
        std::println("Refuse: trop court, 3 caracteres minimum");
    } else if (input.size() > 16) {
        std::println("Refuse: trop long, 16 caracteres maximum");
    } else if (input.find(" ") != std::string::npos) {
        std::println("Refuse: pas d'espace dans un pseudo.");
    } else {
        std::println("Bienvenue, {}", input);
    }



    return 0;

}