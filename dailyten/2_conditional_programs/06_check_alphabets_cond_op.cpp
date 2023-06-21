#include<iostream>
using namespace std;

// Btw what an abomination of a code this one is
// really pointless and depressing

int main()
{
    char ch;

    cout<<"Enter any character: ";
    cin>> ch;

    cout << "It is " <<(((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')) ? "albhabet" : "not albhabet");

    return 0;

}