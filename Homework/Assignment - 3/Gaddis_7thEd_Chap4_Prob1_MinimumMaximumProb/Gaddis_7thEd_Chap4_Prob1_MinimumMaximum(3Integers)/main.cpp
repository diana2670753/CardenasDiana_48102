
/* 
 * File:   main.cpp
 * Author: Cardenas, Diana
 * Created on October 4, 2016, 11:14 AM
 * Purpose: 
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int a, b, c;
    
    //Input values
    cout<<"This program orders three integers from smallest to largest"<<endl;
    cout<<"Please enter three integers (all with different values)"<<endl;
    cin>>a>>b>>c;
    
    //Process values -> Map inputs to Outputs
    if((a<b)&&(b<c)) {
        cout<<"Order: "<<a<<", "<<b<<", "<<c<<endl;
    }
    if((b<c)&&(c<a)) {
        cout<<"Order: "<<b<<", "<<c<<", "<<a<<endl;
    }
    if((c<a)&&(a<b)) {
        cout<<"Order: "<<c<<", "<<a<<", "<<b<<endl;
    }
    if((c<b)&&(b<a)) {
        cout<<"Order: "<<c<<", "<<b<<", "<<a<<endl;
    }
    if((b<a)&&(a<c)) {
        cout<<"Order: "<<b<<", "<<a<<", "<<c<<endl;
    }
    if((a<c)&&(c<b)) {
        cout<<"Order: "<<a<<", "<<c<<", "<<b<<endl;
    }
    else
        cout<<"All numbers must have different values"<<endl;

    //Exit Program
    return 0;
}

