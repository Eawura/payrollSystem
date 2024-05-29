#include <iostream>
#include <string>
using namespace std;

int main() {
    // Define the pay rates for different roles
    double managerRate = 50.0;
    double engineerRate = 40.0;
    double administratorRate = 30.0;
    double workerRate = 20.0;

    // Declare variables
    string name;
    char gender;
    string role;
    double hoursWorked;
    double payRate;
    double grossPay;

    // Get input from the user
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your gender (M/F): ";
    cin >> gender;
    cout << "Enter your job role (Manager, Engineer, Administrator, or Worker): ";
    cin >> role;
    cout << "Enter the number of hours worked: ";
    cin >> hoursWorked;

    // Determine the pay rate based on gender and role
    if (gender == 'M') {
        if (role == "Manager") {
            payRate = managerRate;
        } else if (role == "Engineer") {
            payRate = engineerRate;
        } else if (role == "Administrator") {
            payRate = administratorRate;
        } else if (role == "Worker") {
            payRate = workerRate;
        } else {
            cout << "Invalid role. Please try again." << endl;
            return 1;
        }
    } else if (gender == 'F') {
        if (role == "Manager") {
            payRate = managerRate * 0.9;  // 10% less than male managers
        } else if (role == "Engineer") {
            payRate = engineerRate * 0.9;  // 10% less than male engineers
        } else if (role == "Administrator") {
            payRate = administratorRate * 0.95;  // 5% less than male administrators
        } else if (role == "Worker") {
            payRate = workerRate * 0.95;  // 5% less than male workers
        } else {
            cout << "Invalid role. Please try again." << endl;
            return 1;
        }
    } else {
        cout << "Invalid gender. Please try again." << endl;
        return 1;
    }

    // Calculate the gross pay
    grossPay = payRate * hoursWorked;

    // Print the results
    cout << "Name: " << name << endl;
    cout << "Gender: " << gender << endl;
    cout << "Role: " << role << endl;
    cout << "Hours Worked: " << hoursWorked << endl;
    cout << "Pay Rate: $" << payRate << "/hour" << endl;
    cout << "Gross Pay: $" << grossPay << endl;

    return 0;
}