#include "Employee.h"

template <typename T>
class FullTimeEmployee : public Employee<T>
{
    int salary;
   public:
        FullTimeEmployee(int salary=0);
       void calculateSalary();
};

template <typename T>
void FullTimeEmployee<T> :: calculateSalary()
{
    cout << "Full Time Employee Salary:"<< salary << " pkr" << endl;
}    
template <typename T>
FullTimeEmployee <T> :: FullTimeEmployee(int salary): salary(salary){}