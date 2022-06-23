#include <iostream>
#include <string>
#include <filesystem>
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

    if (std::filesystem::exists(month + "_Groceries.txt") 
        && std::filesystem::exists(month + "_Eating_Out.txt")
        && std::filesystem::exists(month + "_Gas.txt")
        && std::filesystem::exists(month + "_Rent.txt")
        && std::filesystem::exists(month + "_Internet.txt")
        && std::filesystem::exists(month + "_Electricity.txt")
        && std::filesystem::exists(month + "_Water.txt")
        && std::filesystem::exists(month + "_Car.txt")) {
        return true;
    }
    else {
        return false;
    }

}

void Calculator::Calculate() {

    Prompt();

    if (Check() == true) {
            std::cout << "\nExpense report saved to " << month << ".txt\n\n";
        }

}