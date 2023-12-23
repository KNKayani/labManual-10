/*____________________________________________________
.Write a structure to store the names, salary,
 and hours of work per day of 10 employees in a company. 
 Write a program to increase the salary depending on the
 number of hours of work per day as follows and then
 print the name of all the employees along
 with their final salaries.
KASHIF NADEEM KAYANI      456 466          ME 15 A
*/

#include <iostream>
#include <string>

using namespace std;

// Define a structure to store employee information
struct Employee {
    string name;
    double salary;
    int hoursWorked;
};

// Function to calculate the increase in salary based on hours of work per day
double calculateSalaryIncrease(int hoursWorked) {
    if (hoursWorked >= 12) {
        return 150.0;
    } else if (hoursWorked >= 10) {
        return 100.0;
    } else if (hoursWorked >= 8) {
        return 50.0;
    } else {
        return 0.0;
    }
}

int main() {
    const int numEmployees = 10;
    Employee employees[numEmployees];

    // Input employee information
    for (int i = 0; i < numEmployees; ++i) {
        cout << "Enter name of employee " << i + 1 << ": ";
        cin >> employees[i].name;

        cout << "Enter salary of employee " << i + 1 << ": ";
        cin >> employees[i].salary;

        cout << "Enter hours of work per day for employee " << i + 1 << ": ";
        cin >> employees[i].hoursWorked;
    }

    // Increase salary based on hours of work per day
    for (int i = 0; i < numEmployees; ++i) {
        double increase = calculateSalaryIncrease(employees[i].hoursWorked);
        employees[i].salary += increase;
    }

    // Display employee names and final salaries
    cout << "\nEmployee Information:\n";
    for (int i = 0; i < numEmployees; ++i) {
        cout << "Name: " << employees[i].name << "\tFinal Salary: $" << employees[i].salary << endl;
    }

    return 0;
}

