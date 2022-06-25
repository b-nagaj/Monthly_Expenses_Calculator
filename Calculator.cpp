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

void Calculator::CalculateExpense(double expenseType) {

    std::ifstream inputFile(expenseFilename);
    if (!inputFile) {
        std::cerr << "\nCould not open the " + expenseName + " data file!\n\n";
    }
    else {
        int index = 0;
        while (!inputFile.eof()) {
            std::getline(inputFile, expenseArray[index]);
            expenseType += std::stod(expenseArray[index]);
            index += 1;
        }
        inputFile.close();
    }

    std::ofstream outputFile(reportFilename);
    if (outputFile.is_open()) {
        outputFile << std::fixed;
        outputFile << std::setprecision(2);
        outputFile << expenseType;
        outputFile.close();
        std::cout << "\n\n" + expenseName + " ✅";
    }
    else {
        std::cerr << "\nCould not open the " + expenseName + " data file!\n\n";
    }

}

void Calculator::Groceries() {

    expenseName = "groceries";
    expenseFilename = "/home/bryce/Documents/Monthly_Expenses/Data/" + month + "_2022/" + month + "_2022_Groceries.txt"; 
    reportFilename = "/home/bryce/Documents/Monthly_Expenses/Reports/" + month + "_2022_Report.txt";

    CalculateExpense(groceries);

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