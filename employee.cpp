#include <iostream>
using namespace std;

class Employee
{
protected:
    // Private attribute
    int salary;

public:
    // Setter
    void setSalary(int s)
    {
        salary = s;
    }
    // Getter
    int getSalary()
    {
        return salary;
    }
};

// Derived class
class Programmer : public Employee
{
public:
    int bonus;
    void setSalary(int s)
    {
        salary = s;
    }
    int getSalary()
    {
        return salary;
    }
};

int main()
{
    Employee myObj;
    myObj.setSalary(50000);
    cout << myObj.getSalary();

    Programmer programmerObj;
    programmerObj.setSalary(50000);
    programmerObj.bonus = 15000;
    cout << "Salary: " << programmerObj.getSalary() << "\n";
    cout << "Bonus: " << programmerObj.bonus << "\n";
    return 0;
}