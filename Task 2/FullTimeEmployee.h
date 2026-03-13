#include "Employee.h"

class FullTimeEmployee : public Employee
{
    int salary;
   public:
        FullTimeEmployee(int salary=0);
       void calculateSalary();
};

void FullTimeEmployee :: calculateSalary()
{
    cout << "Full Time Employee Salary:"<< salary << " pkr" << endl;
}    
FullTimeEmployee :: FullTimeEmployee(int salary): salary(salary){}