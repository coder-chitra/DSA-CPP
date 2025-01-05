/*
 Question : Grade Calculation on marks 
*/

#include<iostream>
using namespace std;

int main() {

 float sub1 , sub2, sub3 , avg = 0;

 cout << "Enter marks of 3 subject out of 100 for each : ";
 cin >> sub1 >> sub2 >> sub3;

 avg = (sub1 + sub2 + sub3) / 3.0;

 if(avg >= 75) {
  cout << "Distiction ";
 }
 else if(avg >= 60) {
  cout << "Class I ";
 }
 else if(avg >= 59 && avg <= 50) {
  cout << "Class II ";
 }
 else if(avg >= 60) {
  cout << "Class I ";
 }
}
