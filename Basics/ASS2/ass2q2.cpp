/*
  Question : Income Tax Calculation Program 

  a. Basic < 150000 Tax = 0
  b. Basic > 150000 to 300000 Tax = 20%
  c. > 300000 Tax = 30%
 */

#include<iostream>
using namespace std;

int main() {

  int salary , tax, taxAmount;
  
  cout << "Enter Salary  : ";
  cin >> salary;

  if(salary <= 150000 ){
    tax = 0;
  }
  else if(salary > 150000 && salary <= 300000) {
   taxAmount = salary - 150000;
   tax = (taxAmount/100)*20;
  }
  else if(salary > 300000) {
   taxAmount = salary - 150000;
   tax = (150000/100)*20;
   taxAmount = salary - 150000;
   tax += (taxAmount/100)*30;
  } 
  else {
   cout << "Invalid Salary Entered ! ";
  }

  cout << "Income Tax Based on your salary = " << tax << endl;

  return 0;
}
