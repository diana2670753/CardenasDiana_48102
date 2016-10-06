
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
    int a, b, c, d;
    
    //Input values
    cout<<"This program orders three integers from smallest to largest"<<endl;
    cout<<"Please enter four integers (all with different values)"<<endl;
    cin>>a>>b>>c>>d;
    
    //Process values -> Map inputs to Outputs
    if((a<b)&&(b<c)&&(c<d)) {                               //First Set (a,b,c,d)
        cout<<"Order: "<<a<<", "<<b<<", "<<c<<", "<<d<<endl;
    }
    if((b<c)&&(c<d)&&(d<a)) {
        cout<<"Order: "<<b<<", "<<c<<", "<<d<<", "<<a<<endl;
    }
    if((c<d)&&(d<a)&&(a<b)) {
        cout<<"Order: "<<c<<", "<<d<<", "<<a<<", "<<b<<endl;
    }
    if((d<a)&&(a<b)&&(b<c)) {
        cout<<"Order: "<<a<<", "<<b<<", "<<c<<", "<<d<<endl;
    }
    if((d<c)&&(c<b)&&(b<a)) {                               //Second Set (a,d,c,b)
        cout<<"Order: "<<d<<", "<<c<<", "<<b<<", "<<a<<endl;
    }
    if((c<b)&&(b<a)&&(a<d)) {
        cout<<"Order: "<<c<<", "<<b<<", "<<a<<", "<<d<<endl;
    }
    if((b<a)&&(a<d)&&(d<c)) {
        cout<<"Order: "<<b<<", "<<a<<", "<<d<<", "<<c<<endl;
    }
    if((a<d)&&(d<c)&&(c<b)) {
        cout<<"Order: "<<d<<", "<<c<<", "<<b<<", "<<a<<endl;
    }
    if((a<c)&&(c<b)&&(b<d)) {                               //Third Set (a,c,b,d)
        cout<<"Order: "<<a<<", "<<c<<", "<<b<<", "<<d<<endl;
    }
    if((c<b)&&(b<d)&&(d<a)) {
        cout<<"Order: "<<c<<", "<<b<<", "<<d<<", "<<a<<endl;
    }
    if((b<d)&&(d<a)&&(a<c)) {
        cout<<"Order: "<<b<<", "<<d<<", "<<a<<", "<<c<<endl;
    }
    if((d<a)&&(a<c)&&(c<b)) {
        cout<<"Order: "<<a<<", "<<c<<", "<<b<<", "<<d<<endl;
    }
    if((a<d)&&(d<b)&&(b<c)) {                               //Fourth Set (a,d,b,c)
        cout<<"Order: "<<a<<", "<<d<<", "<<b<<", "<<c<<endl;
    }
    if((d<b)&&(b<c)&&(c<a)) {                               
        cout<<"Order: "<<d<<", "<<b<<", "<<c<<", "<<a<<endl;
    }
    if((b<c)&&(c<a)&&(a<d)) {                               
        cout<<"Order: "<<b<<", "<<c<<", "<<a<<", "<<d<<endl;
    }
    if((c<a)&&(a<d)&&(d<b)) {                               
        cout<<"Order: "<<c<<", "<<a<<", "<<d<<", "<<b<<endl;
    }
    if((a<b)&&(b<d)&&(d<c)) {                               //Fifth Set (a,b,d,c)
        cout<<"Order: "<<a<<", "<<d<<", "<<b<<", "<<c<<endl;
    }
    if((b<d)&&(d<c)&&(c<a)) {                               
        cout<<"Order: "<<b<<", "<<d<<", "<<c<<", "<<a<<endl;
    }
    if((d<c)&&(c<a)&&(a<b)) {                               
        cout<<"Order: "<<d<<", "<<c<<", "<<a<<", "<<b<<endl;
    }
    if((c<a)&&(a<b)&&(b<d)) {                               
        cout<<"Order: "<<c<<", "<<a<<", "<<b<<", "<<d<<endl;
    }
    if((a<c)&&(c<d)&&(d<b)) {                               //Last Set (a,c,d,b)
        cout<<"Order: "<<a<<", "<<c<<", "<<d<<", "<<b<<endl;
    }
    if((c<d)&&(d<b)&&(b<a)) {                               
        cout<<"Order: "<<c<<", "<<d<<", "<<b<<", "<<a<<endl;
    }
    if((d<b)&&(b<a)&&(a<c)) {                               
        cout<<"Order: "<<d<<", "<<b<<", "<<a<<", "<<c<<endl;
    }
    if((b<a)&&(a<c)&&(c<d)) {                               
        cout<<"Order: "<<b<<", "<<a<<", "<<c<<", "<<d<<endl;
    }
    

    //Exit Program
    return 0;
}

