#include <iostream>
 
using namespace std;
 
int main(){
 
    char ch;
 
    //Reading an alphabet from user
    cout<<"Enter any alphabet: ";
    cin>>ch;
 
    // checking vowel and consonant
 
    switch(ch)
    {
        case 'a': cout<<"vowel";
            break;
        case 'e': cout<<"vowel";
            break;
        case 'i': cout<<"vowel";
            break;
        case 'o': cout<<"vowel";
            break;
        case 'u': cout<<"vowel";
            break;
        case 'A': cout<<"vowel";
            break;
        case 'E': cout<<"vowel";
            break;
        case 'I': cout<<"vowel";
            break;
        case 'O': cout<<"vowel";
            break;
        case 'U': cout<<"vowel";
            break;
        default: cout<<"consonant";
    }
 
    return 0;
 
 
}
 