/*
  Question : Swap 2 numbers 
 */

#include<iostream>
using namespace std;

int main() {

 int num1, num2 , temp;

 cout << "Enter number 1 : ";
 cin >> num1;
 cout << "Enter number 2 : ";
 cin >> num2;

 // logic of swap 
 temp = num1;
 num1 = num2;
 num2 = temp;

 cout << "Number 1 = " << num1 << endl;
 cout << "Number 2 = " << num2 << endl;

 return 0;
}
