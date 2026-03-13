#include "Employee.h"

class PartTimeEmployee : public Employee
{
    int hourlyRate;
    int hoursWorked;
   public:
       void calculateSalary();
       PartTimeEmployee(int hourlyRate=0, int hoursWorked=0);
};

void PartTimeEmployee :: calculateSalary()
{
   cout << "Part Time Employee Salary:"<< hourlyRate * hoursWorked << " pkr" << endl;
}
PartTimeEmployee :: PartTimeEmployee(int hourlyRate, int hoursWorked): hourlyRate(hourlyRate), hoursWorked(hoursWorked){}