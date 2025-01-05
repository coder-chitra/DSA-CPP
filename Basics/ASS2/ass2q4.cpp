/*
  Question : Quadratic Equation Program 
*/

#include<iostream>
#include<math.h>
using namespace std;

int main() {

 // ax^2 + bx + c (std format)
 // b^2-4ac > 0  -b +- root(b^2-4ac)/ 2a
 // b^2-4ac =  0  -b / 2a
 // b^2-4ac <  0  Complex root
 
 int a,b,c,det,root1,root2;

 cout << "STD Equation : ax^2 + bx + c \n";
 cout << "Enter cofficient Value of a,b,c respectively : ";
 cin >> a >> b >> c;

 det = ((b*b) - 4 * a * c) / (2*a);
 if(det > 0) {
  root1 = (-b + sqrt(det)) / (2*a);
  root2 = (-b - sqrt(det)) / (2*a);
  cout << "Roots are real and distinct : " << root1 << " , " << root2 << endl;
 }
 else if(det == 0) {
  root1 = (-b ) / (2*a);
  cout << "Roots are real and euqal : " << root1 << endl;
 }
 else {
  cout << "Roots are complex ";
 }
 return 0;
}
