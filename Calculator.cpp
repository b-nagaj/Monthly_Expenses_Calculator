#include <iostream>
#include <string>
#include "Calculator.hpp"

bool Calculator::Prompt() {

}

void Calculator::Groceries() {

}
    
void Calculator::EatingOut() {

}

void Calculator::Gas() {

}

void Calculator::Other() {

}

void Calculator::Report() {

}

bool Calculator::Check() {

}

void Calculator::Calculate() {

    Prompt();

    if (Check() == true) {
            std::cout << "\nExpense report saved to " << month << ".txt\n\n";
        }

}