#include <iostream>
#include <string>
#include "../includes/expense.h"

using std::string;

Expense::Expense(string eName, float eCost) {
    name = eName;
    cost = eCost;
}