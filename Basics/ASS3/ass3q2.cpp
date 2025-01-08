/*
 Question : Accept 2 Numbers in variable x and y and perform following operations on them using operation choice.
*/

#include<iostream>
using namespace std;

int main () {

 int x , y , choice;

 cout << "Enter your choice\n";
 cout << "1. Equality\n
	  2. Less than\n
	  3. Quotient and remainder\n
	  4. Range \n
	  5. Swap\n";
 cin >> choice;
 switch() {
  case 1 : cout << "Enter number 1 and 2 " ;
	   cin >> x >> y;
	   if(x == y) {
	    cout << "\nX and Y are Equal\n";
	   }
	   break;
   case 2 : 
 }
 return 0;
}
