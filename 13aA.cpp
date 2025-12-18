#include <iostream>
using namespace std;

// Base class
class Company
{
public:
    void companyName()
    {
        cout << "Company: Duck Pvt Ltd" << endl;
    }
};

// Derived class
class Employee : public Company
{
public:
    void employeeDetails()
    {
        cout << "Employee Name: Maxi" << endl;
        cout << "Employee ID: 794" << endl;
    }
};

int main()
{
    Employee e;
    e.companyName();
    e.employeeDetails();

    return 0;
}
