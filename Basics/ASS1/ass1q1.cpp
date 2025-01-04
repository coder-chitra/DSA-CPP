/*
 Question :  Accept temperature in fahrenhit and display in celsius and kelvin (c = 5/9(f-32) and k c+ 273.15)
 */

#include<iostream>
using namespace std;

int main() {
 
 float fahTemp , celTemp, kelTemp;
 
 cout << "Enter Temperature in Fahrenhit : ";
 cin >> fahTemp;

 celTemp = (5.0/9.0)*(fahTemp - 32);
 kelTemp = celTemp + 273.15;
 
 cout << "Temperature in In celcius = " << celTemp << endl;
 cout << "Temperature in In kelvin = " << kelTemp << endl; 

 return 0;
}
