/* 
   File:   main
   Author: Cardenas, Diana
   Created on August 29, 2016, 9:41 AM
   Purpose: Find the total of the integers 62 and 99
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    char vari1=62;
    char vari2=99;
    unsigned char total;
    
    
    //Calculate the Sum
    total=vari1+vari2;
    
    //Display Output
    cout<<"The Sum of 62 and 99"<<endl;
    cout<<static_cast<int>(vari1)<<" + "<<static_cast<int>(vari2)<<" = ";
    cout<<static_cast<int>(total)<<endl;
    //Exit Program
    return 0;
}


