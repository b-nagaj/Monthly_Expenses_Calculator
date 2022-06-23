#include <iostream>
#include <string>
#include "Calculator.hpp"

bool Calculator::Prompt() {

    std::string choice;

    std::cout << "\n<><><><><><><><><><><><><><><><><><><><><>"
              << "\n<><><><>Monthly Expense Calculator<><><><>"
              << "\n<><><><><><><><><><><><><><><><><><><><><>"
              << "\n\nMonth: ";
    std::cin >> month;

    std::cout << "\nMake an expense report for " << month << "?" << "(Y/N) ";
    std:: cin >> choice;

    if (choice == "Y"){
        return true;
    }
    else {
        return false;
    }

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

}