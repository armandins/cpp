#include<iostream>
using namespace std;

int main()
{

   int length, breadth, area;

   cout << "Enter Length: ";
   cin >> length;
   
   cout << "Enter Breadth: ";
   cin >> breadth;

   area = length * breadth;
   
   cout << "Area of rectangle is: " << area << endl;
   
   return 0;
}