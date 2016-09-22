
/* 
 * File:   main.cpp
 * Author: Cardenas, Diana
 * Created on September 12, 2016, 7:55 PM
 * Purpose: Create a diamond pattern
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

int main(int argc, char** argv) {
    //Declaration of Variables
    char c='*';
    char s=' ';
    
    //Display Output
    cout<<s<<s<<s<<c<<s<<s<<s<<endl;
    cout<<s<<s<<c<<c<<c<<s<<s<<endl;
    cout<<s<<c<<c<<c<<c<<c<<s<<endl;
    cout<<c<<c<<c<<c<<c<<c<<c<<endl;
    cout<<s<<c<<c<<c<<c<<c<<s<<endl;
    cout<<s<<s<<c<<c<<c<<s<<s<<endl;
    cout<<s<<s<<s<<c<<s<<s<<s<<endl;

    //Exit Program
    return 0;
}
