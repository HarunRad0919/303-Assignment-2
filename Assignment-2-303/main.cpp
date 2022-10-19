#include <iostream>
#include "Employees.h"
using namespace std;

int main() {
  Employee *e;
  Professional p;
  Nonprofessional np;
  //Initializing Classes
  char userChoice;
  cout << "Are you a (P)rofessional or (N)onprofessional employee? \n";
  cin >> userChoice;
  //Getting users choice to decide if theyre professional or nonprofessional
  if (userChoice == 'P'){
    e = &p;
    //Making the employee a professional employee
    e->getData();
    e->getSalary();
    e->getVacation();
    e->getInsurance();
    //Printing the functions
  }
  else if (userChoice == 'N'){
    e = &np;
    //Making the employee a nonprofessional employee
    e->getData();
    e->getSalary();
    e->getVacation();
    e->getInsurance();
    //Printing the functions
  }
  return 0;
}