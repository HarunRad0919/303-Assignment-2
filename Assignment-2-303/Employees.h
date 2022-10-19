#include <iostream>
using namespace std;
//Creating Employee Base Class
class Employee{
public:
  Employee(); //Default constructor
  virtual void getData(); //Virtual function to get employee data
  virtual void getSalary(); //Virtual function to get employee salary
  virtual float getVacation(); //Virutal function to get employee vacation
  virtual int getInsurance(); //Virtual function to get employee insurance
};
//Derived Professional Employee Class
class Professional:public Employee{
protected:
  int days; //Number of days worked
  int salaryperDay = 1600; //Amount paid at the end of the day
public:
  virtual void getData(); //Professional Function to get professional employee data
  virtual float getVacation(); //Professional function to get professional employee vacation
  virtual int getInsurance(); //Professional function to get professional employee insurance
  virtual void getSalary(); //Professional function to get professional employee salary
};
//Derived Nonprofessional Employee Class
class Nonprofessional:public Employee{
protected:
  int hours; //Number of hours worked
  int hourlyRate = 22; //Pay per hour
public:
  virtual void getData(); //Nonprofessional Function to get Nonprofessional employee data
  virtual float getVacation(); //Nonprofessional function to get Nonprofessional employee vacation
  virtual int getInsurance(); //Nonprofessional function to get Nonprofessional employee insurance
  virtual void getSalary(); //Nonprofessional function to get Nonprofessional employee salary
};


