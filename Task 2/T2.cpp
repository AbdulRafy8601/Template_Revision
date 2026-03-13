#include "FullTimeEmployee.h"
#include "PartTimeEmployee.h"
int main()
{
    Employee *emp1 = new FullTimeEmployee(1000);
    Employee *emp2 = new PartTimeEmployee(10,8);
    emp1->calculateSalary();
    
    emp2->calculateSalary();
    return 0;
}
