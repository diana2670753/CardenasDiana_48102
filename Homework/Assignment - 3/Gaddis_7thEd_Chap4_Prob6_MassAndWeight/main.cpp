
/* 
 * File:   main.cpp
 * Author: Cardenas, Diana
 * Created on October 6, 2016, 1:30 PM
 * Purpose: 
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float mass, weight;
    
    //Input or initialize values Here
    cout<<"Enter the mass of the object (in Newtons)"<<endl;
    cin>>mass;
    
    //Process/Calculations Here
    weight=mass*9.8;

    //Output Located Here
    if(weight>1000) {
      cout<<"Object is Too Heavy"<<endl;  
    }
    
    if(weight<10) {
        cout<<"Object is Too Light"<<endl;
    }
    
    else cout<<"Weight of Object = "<<weight<<" Newtons"<<endl;
    
    //Exit
    return 0;
}
