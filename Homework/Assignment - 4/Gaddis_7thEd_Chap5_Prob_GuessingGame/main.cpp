/* 
 * File:   main.cpp
 * Author: Cardenas, Diana
 * Created on October 13, 2016, 12:24 AM
 * Purpose: Guessing Game
 */

//System Libraries Here
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;


//Program Execution Begins Here
int main(int argc, char** argv) {
    //Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    int range,nGuess;
    int number,answer;
    
    //Input or initialize values Here
    cout<<"This is the Guessing Game"<<endl;
    cout<<"Choose a range for the number to guess"<<endl;
    cin>>range;
    
    //Process/Calculations Here
    nGuess=log(range)/log(2)+1;
    cout<<"You have "<<nGuess<<" guesses to fine the random number"<<endl;
    number=rand()%(range+1);
    
    //Display results of each guess
    for(int guess=1;guess<=nGuess;guess++){
        cout<<"Input your guess"<<endl;
        cin>>answer;
        if(answer>number)cout<<"Guess too high"<<endl;
        else if(answer<number)cout<<"Guess too low"<<endl;
        else{
            cout<<"You guessed the number"<<endl;
            exit(1);
        }
    }
    cout<<"Sorry. You ran out of guesses"<<endl;
    

    //Exit
    return 0;
}

