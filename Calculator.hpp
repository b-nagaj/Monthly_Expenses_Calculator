#include <iostream>
#include <string>

class Calculator {

public: 

    std::string month;
    std::string expenseFilename;
    std::string reportFilename;
    std::string expenseName;
    std::string expenseArray [20];
    double groceries;
    double eatingOut;
    double gas;
    double rent;
    double electricity;
    double water;
    double car;

    bool Prompt();
    void CalculateExpense(double expenseType);
    void Groceries();
    void EatingOut();
    void Gas();
    void Other();
    void Report();
    void Calculate();

};