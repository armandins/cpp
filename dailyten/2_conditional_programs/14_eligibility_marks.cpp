#include<iostream>
using namespace std;

int main()
{

    int p, c, m, t, mp;

    cout << "Eligibility Criteria for an engineering:" <<endl;
    cout << "Marks in Mathematics >= 65" <<endl;
    cout << "Marks in Physics >= 55" <<endl;
    cout << "Marks in Chemestry >= 50" <<endl;
    cout << "Total in all three subject >= 180" <<endl;
    cout << "or Total in Maths and Physics >= 140" <<endl;
    cout << "-------------------------------------" <<endl;

    cout << "Input the marks obtained in Physics :" <<endl;
    cin >> p;
    cout << "Input the marks obtained in Chemistry :" <<endl;
    cin >> c;
    cout << "Input the marks obtained in Mathematics :" <<endl;
    cin >> m;
    cout << "Total marks of Mathematics, Physics and Chemistry :" << m + p + c << endl;
    cout << "Total marks of Maths and  Physics :" << m + p;

    if (m>=65)

        if(p>=55)

            if(c>=50)

                if((m + p + c) >= 180 || (m + p) >= 140)
                    cout << "The  candidate is eligible for admission." <<endl;

                else
                    cout << "The candidate is not eligible." <<endl;
            else
                cout << "The candidate is not eligible."<<endl;
        else
            cout << "The candidate is not eligible."<<endl;
    else
        cout << "The candidate is not eligible."<<endl;

}