/*
  Question : Check whether entered character is digit , uppercase letter or lower case letter by there ASCII value ..
 */ 

#include<iostream>
using namespace std;

int main() {
 
 char ch;

 cout << "Enter a Character : ";
 cin >> ch;

 // check of digit 
 if(ch >= 48 && ch <= 58) {
  cout << "Entered Charcter is Digit \n";
 }
 else if(ch >= 65 && ch <=90) {
  cout << "Entered Charcter is an Uppercase Letter  \n";
 }
 else if(ch >= 97  && ch <=122) {
  cout << "Entered Charcter is a Lowercase Letter  \n";
 }
 else {
  cout << "Special Character is Entered !\n";
 }

 return 0;
}
