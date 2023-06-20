#include <iostream>
using namespace std;

int main()
{
	char charType;
    short shortType;
    int intType;
    long longType;
    float floatType;
    double doubleType;

    cout << "Size of Char is :" << sizeof(charType) << "bytes." << endl;
    cout << "Size of Short is :" << sizeof(shortType) << "bytes." << endl;
    cout << "Size of int is :" << sizeof(intType) << "bytes." << endl;
    cout << "Size of long is :" << sizeof(longType) << "bytes." << endl;
    cout << "Size of float is :" << sizeof(floatType) << "bytes." << endl;
    cout << "Size of double is :" << sizeof(doubleType) << "bytes." << endl;

    return 0;
}