
/* 
 * File:   main.cpp
 * Author: Cardenas,Diana
 * Created on October 11, 2016, 12:15 PM
 * Purpose: Display Ascii codes 32 through 127
 */

//System Libraries Here
#include <iostream>
using namespace std;

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    
    //Process/Calculations Here
    for(int ascii=32; ascii<=127; ascii++){
        cout<<static_cast<char>(ascii)<<endl;
        if(ascii%16==15){
            cout<<endl;
        }
        
    }
    
    //Process/Calculations Here
    
    //Output Located Here

    //Exit
    return 0;
}

