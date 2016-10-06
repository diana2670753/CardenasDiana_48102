/* 
 * File:   main.cpp
 * Author: Cardenas, Diana
 * Created on October 6, 2016, 9:07 AM
 * Purpose:  Play Rock, Paper, Scissors
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>    //Random Numer Generator
#include <ctime>      //Time
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int> (time(0)));
    
    //Declare all Variables Here
    char comptr;      //Computer's choice
    char rPlay;       //Our Rock/Paper/Scissors
    
    //Input Computer Values Here
    comptr=rand()%4+80;
    while(comptr=='Q') {
        comptr=rand()%4+80;
    }
    
    //Input Our Rock/Paper/Scissors
    cout<<"Input your choice R-Rock, P-Paper, S-Scissors"<<endl;
    cin>>rPlay;
    switch(rPlay){
        case 'r':
        case 'R':rPlay='R';break;
        
        case 's':
        case 'S':rPlay='S';break;
        
        default: rPlay='P';break;
    }
    
    //Output Located Here
    cout<<"The computer generated a "<<comptr<<endl;
    cout<<"The player types in a    "<<rPlay<<endl;
    cout<<endl;
    
    //Determine the winner and display
    if(comptr==rPlay) {
        cout<<"Draw"<<endl;
    }
    else if(comptr=='P') {
        if(rPlay=='S') cout<<"The player wins!"<<endl;
        else cout<<"The computer wins!"<<endl;
    }
    else if(comptr=='S') {
        if(rPlay=='R') cout<<"The player wins!"<<endl;
        else cout<<"The computer wins!"<<endl;
    }
    else if(comptr=='R') {
        if(rPlay=='P') cout<<"The player wins!"<<endl;
        else cout<<"The computer wins!"<<endl;
    }
    

    //Exit
    return 0;
}

