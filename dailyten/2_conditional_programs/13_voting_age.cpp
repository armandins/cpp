#include<iostream>
using namespace std;


int main()
{
    int Candiateage;

    cout << "Input the age of the candidate :"<<endl;
    cin >> Candiateage;

    if (Candiateage < 18)
    {
        cout << "Sorry, You are not eligible to caste your vote." <<endl;
        cout << "You would be able to caste your vote after " << 18-Candiateage << " year" <<endl;
    }
    else
    {
         cout << "Congratulation! You are eligible for casting your vote." << endl ;
    }
    return 0;

}