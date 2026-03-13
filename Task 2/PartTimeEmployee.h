#include "Employee.h"
template <typename T>
class PartTimeEmployee : public Employee<T>
{
    int hourlyRate;
    int hoursWorked;
   public:
       void calculateSalary();
       PartTimeEmployee(int hourlyRate=0, int hoursWorked=0);
};
template <typename T>
void PartTimeEmployee<T> :: calculateSalary()
{
   cout << "Part Time Employee Salary:"<< hourlyRate * hoursWorked << " pkr" << endl;
}

template <typename T>
PartTimeEmployee<T> :: PartTimeEmployee(int hourlyRate, int hoursWorked): hourlyRate(hourlyRate), hoursWorked(hoursWorked){}