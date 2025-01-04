/*
  Question : A cashier has currency notes of denomination 1,5 and 10.
  accept the amount to be withdrwan from the user and print the total number of currency notes of each.
  denomination the cashier will have to give.
  (find min number of notes the cashier have to give)
 */

#include<iostream>
using namespace std;

int main() {

 int amount;

 cout << "Enter  Amount : ";
 cin >> amount;
 
 cout << "Number of 10rs Notes : " << amount/10 << endl;
 cout << "Number of 5rs Notes : " << (amount%10)/5 << endl;
 cout << "Number of 1rs Notes : " << (amount%10)%5 << endl;
 
 return 0;
}
