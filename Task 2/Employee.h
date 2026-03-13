#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<iostream>
using namespace std;

class Employee
{
   public:
       virtual void calculateSalary() = 0;   
};

#endif