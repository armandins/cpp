#include<iostream>
#define PI 3.141
using namespace std;

int main()
{
    float radius, area;
    cout << "Enter Radius: ";
    
    cin >> radius;
    area = PI * radius * radius;
    
    cout << area;
    return 0;
}