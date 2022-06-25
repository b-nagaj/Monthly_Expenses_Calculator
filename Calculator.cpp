#include <iostream>
#include <string>
#include <filesystem>
#include <fstream>
#include <iomanip>
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

    expenseFilename = "/home/bryce/Documents/Monthly_Expenses/Data/" + month + "_2022/" + month + "_2022_Groceries.txt";
    std::ifstream inputFile(expenseFilename);
    if (!inputFile) {
        std::cerr << "\nCould not open the groceries data file!\n\n";
    }
    else {
        int index = 0;
        std::string groceriesArray [20];

        while(!inputFile.eof()){
        std::getline(inputFile, groceriesArray[index]);
        groceries += std::stod(groceriesArray[index]);
        index += 1;
        }
        inputFile.close();
    }
    
    reportFilename = "/home/bryce/Documents/Monthly_Expenses/Reports/May_2022_Report.txt";
    std::ofstream outputFile(reportFilename);
    if (outputFile.is_open()) {
        outputFile << std::fixed;
        outputFile << std::setprecision(2);
        outputFile << groceries;
        outputFile.close();
        std::cout << "\n\nGroceries ✅";
    }
    else {
        std::cerr << "\nCould not open the groceries data file!\n\n";
    }

}

void Calculator::EatingOut() {

}

void Calculator::Gas() {

}

void Calculator::Other() {

}

void Calculator::Report() {

}

void Calculator::Calculate() {

    if (Prompt()) {
        std::cout << "\nCreating expense report...";
        Groceries();
    }
    else {
        std::cout << "\nBye!\n\n";
    }

}