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
  cout << "Distiction " << endl;
 }
 else if(avg >= 60) {
  cout << "Class I " << endl;
 }
 else if(avg >= 50 && avg <= 59) {
  cout << "Class II " << endl;
 }
 else if(avg >= 35 && avg <= 49) {
  cout << "Pass Class" << endl;
 }
 else {
  cout << "Fail" << endl;
 }
}
