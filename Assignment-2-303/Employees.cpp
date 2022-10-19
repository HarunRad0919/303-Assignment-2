#pragma once
using namespace std;
#include "Employees.h"

Employee::Employee(){
  
}
//Default constructor
void Employee::getData(){
    
}
//Virtual function to get data
void Employee::getSalary(){
    
}
//Virtual function to get salary
float Employee::getVacation(){
    
}
//Virtual function to get vacation
int Employee::getInsurance(){
    
}
//Virtual function to get insurance
void Professional::getData(){
  cout << "Enter the numbers of days you have worked: \n";
  cin >> days;
}
//Professional function to get data
float Professional::getVacation(){
    float vacation;
    float vacationCalc = .15;
    vacation = days * vacationCalc;
    cout << "Professional Vacation : " << vacation <<  endl;
    return vacation;
  }
//Professional function to get vacation time
int Professional::getInsurance(){
    int insurance;
    insurance = days * 50;
    cout << "Professional Insurance : " << insurance << endl;
    return insurance;
  }
//Professional function to get insurance amount
void Professional::getSalary(){
    cout << "Weekly salary is : " << days*salaryperDay << endl;
  }
//Professional function to get salary
void Nonprofessional::getData(){
    cout << "Enter the numbers of hours you have worked: \n";
    cin >> hours;
  }
//Nonprofessional function to get data
float Nonprofessional::getVacation(){
    float vacation;
    float vacationCalc = .0001;
    vacation = hours * vacationCalc;
    cout << "Nonprofessional Vacation : " << vacation << endl;
    return vacation;
  }
//Nonprofessional function to get vacation time
int Nonprofessional::getInsurance(){
    int insurance;
    insurance = hours * 10;
    cout << "Nonprofessional Insurance : " << insurance << endl;
    return insurance;
  }
//Nonprofessional function to get insurance amount
void Nonprofessional::getSalary(){
    cout << "Weekly salary is : " << hours*hourlyRate << endl;
  }
//Nonprofessional function to get salary


