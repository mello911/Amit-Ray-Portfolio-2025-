#include <iostream>
#include <string>
#include <iomanip> // For formatting output

using namespace std;

class ElectricityBill {
private:
    // Attributes
    string customerName;
    double unitsConsumed;
    double perUnitCost;

public:
    // Constructor to initialize attributes
    ElectricityBill(string name, double units, double cost) {
        customerName = name;
        unitsConsumed = units;
        perUnitCost = cost;
    }

    // Function to calculate total bill amount
    double calculateBill() {
        return unitsConsumed * perUnitCost;
    }

    // Function to display the bill details
    void displayBill() {
        double totalAmount = calculateBill();

        cout << "\n-----------------------------" << endl;
        cout << "   ELECTRICITY BILL RECEIPT   " << endl;
        cout << "-----------------------------" << endl;
        cout << "Customer Name : " << customerName << endl;
        cout << "Units Consumed: " << unitsConsumed << endl;
        cout << "Cost per Unit : $" << fixed << setprecision(2) << perUnitCost << endl;
        cout << "-----------------------------" << endl;
        cout << "TOTAL AMOUNT  : $" << fixed << setprecision(2) << totalAmount << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {
    string name;
    double units, cost;

    // Taking user input
    cout << "Enter Customer Name: ";
    getline(cin, name);

    cout << "Enter Units Consumed: ";
    cin >> units;

    cout << "Enter Cost per Unit: ";
    cin >> cost;

    // Creating an object of the class
    ElectricityBill bill(name, units, cost);

    // Displaying the calculated bill
    bill.displayBill();

    return 0;
}
