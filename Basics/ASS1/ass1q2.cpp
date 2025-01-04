/*
 Question : accept character and prints its next and previous character  
 */

#include<iostream>
using namespace std;

 int main() {
 char c , next , prev;
 cout << "Enter a Character : ";
 cin >> c;
 cout << "\nprevious chracter = " << char(c-1);
 cout << "\nnext chracter = " << char(c+1) << endl;
 return 0;
}
