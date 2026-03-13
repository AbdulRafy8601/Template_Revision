#include "FullTimeEmployee.h"
#include "PartTimeEmployee.h"
int main()
{
    Employee<int> *emp1 = new FullTimeEmployee<int>(1000);
    Employee<int> *emp2 = new PartTimeEmployee<int>(10,8);
    emp1->calculateSalary();
    emp2->calculateSalary();
    return 0;
}