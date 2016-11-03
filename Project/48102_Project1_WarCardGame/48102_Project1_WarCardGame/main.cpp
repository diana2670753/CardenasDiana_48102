
/* 
 * File:   main.cpp
 * Author: Cardenas, Diana
 * Created on October 23, 2016, 7:37 PM
 * Purpose: Create 'War' game with C++
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <string>
#include <cstdlib>
#include <ctime>      //Random for Card Values

using namespace std;  //Name-space used in the System Library

//Function prototypes
void playGame();
void gameRule();

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    char menuItm;
    
    //Input values
    cout<<"   'War' Card Game"<<endl;
    cout<<"----------------------"<<endl;
    cout<<"Welcome to 'War'! With this program, you will be able to play 'War' with your computer"<<endl;
    do{
        //Prompt User to Exit or Stay
        cout<<"Type 'P' to play 'War'"<<endl;
        cout<<"Type 'R' on how this game is played"<<endl;
        cout<<"Type 'Exit' to exit from the game"<<endl;
        cin>>menuItm;
        
        //Go to Menu Option
        switch (menuItm){
            case 'P': playGame();break;
            case 'p': playGame();break;
            case 'R': gameRule();break;
            case 'r': gameRule();break;
            case 'exit': exit(0);break;
            case 'Exit': exit(0);
        }  //End switch/case
    }while((menuItm=='P')||(menuItm=='p')||(menuItm=='R')||(menuItm=='r'));
    
    //Exit Program
    return 0;
}

void gameRule(){
    cout<<"Objective: Win the most cards"<<endl;
    cout<<endl;
    cout<<"Rules: ‘War’ is a card game where the deck is divided evenly  to the two players, \n"<<
    "giving each person a stack of cards. In unison, each player reveals the top card of their \n"<<
    " deck and enters into 'battle,' where the player with the higher card takes both of n\""<<
    "the cards played and moves them to their stack. Aces are high, and suits are ignored."<<endl;
    cout<<endl;
    cout<<"When both players have the same card, the two go into 'war.' In war, the two players \n"<<
    "draw another 3 card, the first two face down the third one, face up. Whoever has the higher card at \n"<< 
    "the last draw wins all the cards of that 'war'"<<endl;
    cout<<endl;
}

void playGame(){
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declaration of Variables
    char gamePly, play, leave,war;     //Choose whether player wants to draw or quit game
    int rounds;
    int cCard, cPoints=0, cWin; //Computer card, total points, and points won in a battle or war
    int pCard, pPoints=0, pWin; //Player card, total points, and points won in a battle or war
    
    cout<<"Press 'D' to deal the deck"<<endl;
    cout<<"Press 'Q' to quit this game"<<endl;
    cin>>gamePly;

    //Display Game Play
    if(gamePly=='D'||gamePly=='d'){
        cout<<"How Many Rounds Would you Like to Play?"<<endl;
        cin>>rounds;
        
        for(int a=1; a<=rounds; a++){
            //Play this Round or Quit
            cout<<"Press 'P' to play this round"<<endl;
            cout<<"Or press 'Q' to quit"<<endl;
            cin>>play;
            
            if(play=='p'||play=='P'){
                //Input Random Card Value for Computer
                cCard=rand()% (12+1)+2;   //range 2-14

                //"Draw the card picture for computer
                switch(cCard){
                    case 2:{
                    cout<<"The Computer draws "<<cCard<<endl;
                    cout<<"__________"<<endl;
                    cout<<"|2   *    |"<<endl;
                    cout<<"|         |"<<endl;
                    cout<<"|         |"<<endl;
                    cout<<"|         |"<<endl;
                    cout<<"|    *   2|"<<endl;
                    cout<<"__________"<<endl;
                    cout<<endl;
                    };break;    
                    case 3:{ 
                    cout<<"The Computer draws "<<cCard<<endl;
                    cout<<"__________"<<endl;
                    cout<<"|3   *    |"<<endl;
                    cout<<"|         |"<<endl;
                    cout<<"|    *    |"<<endl;
                    cout<<"|         |"<<endl;
                    cout<<"|    *   3|"<<endl;
                    cout<<"__________"<<endl;
                    cout<<endl;
                    };break;
                    case 4:{
                    cout<<"The Computer draws "<<cCard<<endl;
                    cout<<"__________"<<endl;
                    cout<<"|4 *   *  |"<<endl;
                    cout<<"|         |"<<endl;
                    cout<<"|         |"<<endl;
                    cout<<"|         |"<<endl;
                    cout<<"|  *   * 4|"<<endl;
                    cout<<"__________"<<endl;
                    cout<<endl;
                    };break;
                    case 5:{
                    cout<<"The Computer draws "<<cCard<<endl;
                    cout<<"__________"<<endl;
                    cout<<"|5 *   *  |"<<endl;
                    cout<<"|         |"<<endl;
                    cout<<"|    *    |"<<endl;
                    cout<<"|         |"<<endl;
                    cout<<"|  *   * 5|"<<endl;
                    cout<<"__________"<<endl;
                    cout<<endl;
                    };break;
                    case 6:{
                    cout<<"The Computer draws "<<cCard<<endl;
                    cout<<"__________"<<endl;
                    cout<<"|6 *   *  |"<<endl;
                    cout<<"|         |"<<endl;
                    cout<<"|  *   *  |"<<endl;
                    cout<<"|         |"<<endl;
                    cout<<"|  *   * 6|"<<endl;
                    cout<<"__________"<<endl;
                    cout<<endl;
                    };break;
                    case 7:{
                    cout<<"The Computer draws "<<cCard<<endl;
                    cout<<"__________"<<endl;
                    cout<<"|7 *   *  |"<<endl;
                    cout<<"|    *    |"<<endl;
                    cout<<"|  *   *  |"<<endl;
                    cout<<"|         |"<<endl;
                    cout<<"|  *   * 7|"<<endl;
                    cout<<"__________"<<endl;
                    cout<<endl;
                    };break;
                    case 8:{
                    cout<<"The Computer draws "<<cCard<<endl;
                    cout<<"__________"<<endl;
                    cout<<"|8 *   *  |"<<endl;
                    cout<<"|    *    |"<<endl;
                    cout<<"|  *   *  |"<<endl;
                    cout<<"|    *    |"<<endl;
                    cout<<"|  *   * 8|"<<endl;
                    cout<<"__________"<<endl;
                    cout<<endl;
                    };break;
                    case 9:{
                    cout<<"The Computer draws "<<cCard<<endl;
                    cout<<"___________"<<endl;
                    cout<<"|9 *   *  |"<<endl;
                    cout<<"|  *   *  |"<<endl;
                    cout<<"|    *    |"<<endl;
                    cout<<"|  *   *  |"<<endl;
                    cout<<"|  *   * 9|"<<endl;
                    cout<<"___________"<<endl;
                    cout<<endl;
                    };break;
                    case 10:{
                    cout<<"The Computer draws "<<cCard<<endl;
                    cout<<"__________"<<endl;
                    cout<<"|10* * *  |"<<endl;
                    cout<<"|  *   *  |"<<endl;
                    cout<<"|         |"<<endl;
                    cout<<"|  *   *  |"<<endl;
                    cout<<"|  * * *10|"<<endl;
                    cout<<"__________"<<endl;
                    cout<<endl;
                    };break;
                    case 11:{
                    cout<<"The Computer draws Jack "<<endl;
                    cout<<"__________"<<endl;
                    cout<<"|J  wwwww |"<<endl;
                    cout<<"|  {| 00) |"<<endl;
                    cout<<"|  }| ^ ) |"<<endl;
                    cout<<"|  ^^^^^^ |"<<endl;
                    cout<<"| ////// J|"<<endl;
                    cout<<"__________"<<endl;
                    cout<<endl;
                    };break;
                    case 12:{
                    cout<<"The Computer draws Queen "<<endl;
                    cout<<"__________"<<endl;
                    cout<<"|Q  /____ |"<<endl;
                    cout<<"|  /|u u) |"<<endl;
                    cout<<"| / | - ) |"<<endl;
                    cout<<"|  VVVVVV |"<<endl;
                    cout<<"| ////// Q|"<<endl;
                    cout<<"__________"<<endl;
                    cout<<endl;
                    };break;
                    case 13:{
                    cout<<"The Computer draws King "<<endl;
                    cout<<"__________"<<endl;
                    cout<<"|K  WWWWW |"<<endl;
                    cout<<"|  {| --) |"<<endl;
                    cout<<"|  }| ^ ) |"<<endl;
                    cout<<"|  mmmmmm |"<<endl;
                    cout<<"| ////// K|"<<endl;
                    cout<<"__________"<<endl;
                    cout<<endl;
                    };break;
                    case 14:{
                    cout<<"The Computer draws an Ace "<<endl;
                    cout<<"__________"<<endl;
                    cout<<"|A        |"<<endl;
                    cout<<"|         |"<<endl;
                    cout<<"|    *    |"<<endl;
                    cout<<"|         |"<<endl;
                    cout<<"|        A|"<<endl;
                    cout<<"__________"<<endl;
                    cout<<endl;
                    };break;
                }
                //Input random card value for player
                pCard=rand()% (12+1)+2;   //range 2-14

                //picture output for player
                switch(pCard){
                    case 2:{
                    cout<<"The Player draws "<<pCard<<endl;
                    cout<<"__________"<<endl;
                    cout<<"|2   *    |"<<endl;
                    cout<<"|         |"<<endl;
                    cout<<"|         |"<<endl;
                    cout<<"|         |"<<endl;
                    cout<<"|    *   2|"<<endl;
                    cout<<"__________"<<endl;
                    cout<<endl;
                    };break;    
                    case 3:{
                    cout<<"The Player draws "<<pCard<<endl;
                    cout<<"__________"<<endl;
                    cout<<"|3   *    |"<<endl;
                    cout<<"|         |"<<endl;
                    cout<<"|    *    |"<<endl;
                    cout<<"|         |"<<endl;
                    cout<<"|    *   3|"<<endl;
                    cout<<"__________"<<endl;
                    cout<<endl;
                    };break;
                    case 4:{
                    cout<<"The Player draws "<<pCard<<endl;
                    cout<<"__________"<<endl;
                    cout<<"|4 *   *  |"<<endl;
                    cout<<"|         |"<<endl;
                    cout<<"|         |"<<endl;
                    cout<<"|         |"<<endl;
                    cout<<"|  *   * 4|"<<endl;
                    cout<<"__________"<<endl;
                    cout<<endl;
                    };break;
                    case 5:{
                    cout<<"The Player draws "<<pCard<<endl;
                    cout<<"__________"<<endl;
                    cout<<"|5 *   *  |"<<endl;
                    cout<<"|         |"<<endl;
                    cout<<"|    *    |"<<endl;
                    cout<<"|         |"<<endl;
                    cout<<"|  *   * 5|"<<endl;
                    cout<<"__________"<<endl;
                    cout<<endl;
                    };break;
                    case 6:{
                    cout<<"The Player draws "<<pCard<<endl;
                    cout<<"__________"<<endl;
                    cout<<"|6 *   *  |"<<endl;
                    cout<<"|         |"<<endl;
                    cout<<"|  *   *  |"<<endl;
                    cout<<"|         |"<<endl;
                    cout<<"|  *   * 6|"<<endl;
                    cout<<"__________"<<endl;
                    cout<<endl;
                    };break;
                    case 7:{
                    cout<<"The Player draws "<<pCard<<endl;
                    cout<<"__________"<<endl;
                    cout<<"|7 *   *  |"<<endl;
                    cout<<"|    *    |"<<endl;
                    cout<<"|  *   *  |"<<endl;
                    cout<<"|         |"<<endl;
                    cout<<"|  *   * 7|"<<endl;
                    cout<<"__________"<<endl;
                    cout<<endl;
                    };break;
                    case 8:{
                    cout<<"The Player draws "<<pCard<<endl;
                    cout<<"__________"<<endl;
                    cout<<"|8 *   *  |"<<endl;
                    cout<<"|    *    |"<<endl;
                    cout<<"|  *   *  |"<<endl;
                    cout<<"|    *    |"<<endl;
                    cout<<"|  *   * 8|"<<endl;
                    cout<<"__________"<<endl;
                    cout<<endl;
                    };break;
                    case 9:{
                    cout<<"The Player draws "<<pCard<<endl;
                    cout<<"___________"<<endl;
                    cout<<"|9 *   *  |"<<endl;
                    cout<<"|  *   *  |"<<endl;
                    cout<<"|    *    |"<<endl;
                    cout<<"|  *   *  |"<<endl;
                    cout<<"|  *   * 9|"<<endl;
                    cout<<"___________"<<endl;
                    cout<<endl;
                    };break;
                    case 10:{
                    cout<<"The Player draws "<<pCard<<endl;
                    cout<<"__________"<<endl;
                    cout<<"|10* * *  |"<<endl;
                    cout<<"|  *   *  |"<<endl;
                    cout<<"|         |"<<endl;
                    cout<<"|  *   *  |"<<endl;
                    cout<<"|  * * *10|"<<endl;
                    cout<<"__________"<<endl;
                    cout<<endl;
                    };break;
                    case 11:{
                    cout<<"The Player draws Jack"<<endl;
                    cout<<"__________"<<endl;
                    cout<<"|J  wwwww |"<<endl;
                    cout<<"|  {| 00) |"<<endl;
                    cout<<"|  }| ^ ) |"<<endl;
                    cout<<"|  ^^^^^^ |"<<endl;
                    cout<<"| ////// J|"<<endl;
                    cout<<"__________"<<endl;
                    cout<<endl;
                    };break;
                    case 12:{
                    cout<<"The Player draws Queen"<<endl;
                    cout<<"__________"<<endl;
                    cout<<"|Q  /____ |"<<endl;
                    cout<<"|  /|u u) |"<<endl;
                    cout<<"| / | - ) |"<<endl;
                    cout<<"|  VVVVVV |"<<endl;
                    cout<<"| ////// Q|"<<endl;
                    cout<<"__________"<<endl;
                    cout<<endl;
                    };break;
                    case 13:{
                    cout<<"The Player draws King"<<endl;
                    cout<<"__________"<<endl;
                    cout<<"|K  WWWWW |"<<endl;
                    cout<<"|  {| --) |"<<endl;
                    cout<<"|  }| ^ ) |"<<endl;
                    cout<<"|  mmmmmm |"<<endl;
                    cout<<"| ////// K|"<<endl;
                    cout<<"__________"<<endl;
                    cout<<endl;
                    };break;
                    case 14:{
                    cout<<"The Player draws an Ace"<<endl;
                    cout<<"__________"<<endl;
                    cout<<"|A        |"<<endl;
                    cout<<"|         |"<<endl;
                    cout<<"|    *    |"<<endl;
                    cout<<"|         |"<<endl;
                    cout<<"|        A|"<<endl;
                    cout<<"__________"<<endl;
                    cout<<endl;
                    };break;
                }

                //Determine Winner

                if(cCard>pCard){
                    cout<<"The Computer Won the Battle"<<endl;
                    cout<<"The Computer Takes Your Card"<<endl;
                    cWin=1;
                    pWin=0;
                }
                else if(pCard>cCard){
                    cout<<"You Won the Battle"<<endl;
                    cout<<"You take the Computer's Card"<<endl;
                    pWin=1;
                    cWin=0;
                }
                else{
                    do{
                        cout<<"Prepare for War"<<endl;
                        cout<<"Gear Up and Type 'F' to start the fight"<<endl;
                        cout<<"Type 'L' to accept defeat"<<endl;
                        cin>>war;
                        
                        if(war=='f'||war=='F'){
                            cCard=rand()% (12+1)+2;   //range 2-14

                            //"Draw the card picture for computer
                            switch(cCard){
                                case 2:{
                                cout<<"The Computer draws "<<cCard<<endl;
                                cout<<"__________"<<endl;
                                cout<<"|2   *    |"<<endl;
                                cout<<"|         |"<<endl;
                                cout<<"|         |"<<endl;
                                cout<<"|         |"<<endl;
                                cout<<"|    *   2|"<<endl;
                                cout<<"__________"<<endl;
                                cout<<endl;
                                };break;    
                                case 3:{ 
                                cout<<"The Computer draws "<<cCard<<endl;
                                cout<<"__________"<<endl;
                                cout<<"|3   *    |"<<endl;
                                cout<<"|         |"<<endl;
                                cout<<"|    *    |"<<endl;
                                cout<<"|         |"<<endl;
                                cout<<"|    *   3|"<<endl;
                                cout<<"__________"<<endl;
                                cout<<endl;
                                };break;
                                case 4:{
                                cout<<"The Computer draws "<<cCard<<endl;
                                cout<<"__________"<<endl;
                                cout<<"|4 *   *  |"<<endl;
                                cout<<"|         |"<<endl;
                                cout<<"|         |"<<endl;
                                cout<<"|         |"<<endl;
                                cout<<"|  *   * 4|"<<endl;
                                cout<<"__________"<<endl;
                                cout<<endl;
                                };break;
                                case 5:{
                                cout<<"The Computer draws "<<cCard<<endl;
                                cout<<"__________"<<endl;
                                cout<<"|5 *   *  |"<<endl;
                                cout<<"|         |"<<endl;
                                cout<<"|    *    |"<<endl;
                                cout<<"|         |"<<endl;
                                cout<<"|  *   * 5|"<<endl;
                                cout<<"__________"<<endl;
                                cout<<endl;
                                };break;
                                case 6:{
                                cout<<"The Computer draws "<<cCard<<endl;
                                cout<<"__________"<<endl;
                                cout<<"|6 *   *  |"<<endl;
                                cout<<"|         |"<<endl;
                                cout<<"|  *   *  |"<<endl;
                                cout<<"|         |"<<endl;
                                cout<<"|  *   * 6|"<<endl;
                                cout<<"__________"<<endl;
                                cout<<endl;
                                };break;
                                case 7:{
                                cout<<"The Computer draws "<<cCard<<endl;
                                cout<<"__________"<<endl;
                                cout<<"|7 *   *  |"<<endl;
                                cout<<"|    *    |"<<endl;
                                cout<<"|  *   *  |"<<endl;
                                cout<<"|         |"<<endl;
                                cout<<"|  *   * 7|"<<endl;
                                cout<<"__________"<<endl;
                                cout<<endl;
                                };break;
                                case 8:{
                                cout<<"The Computer draws "<<cCard<<endl;
                                cout<<"__________"<<endl;
                                cout<<"|8 *   *  |"<<endl;
                                cout<<"|    *    |"<<endl;
                                cout<<"|  *   *  |"<<endl;
                                cout<<"|    *    |"<<endl;
                                cout<<"|  *   * 8|"<<endl;
                                cout<<"__________"<<endl;
                                cout<<endl;
                                };break;
                                case 9:{
                                cout<<"The Computer draws "<<cCard<<endl;
                                cout<<"___________"<<endl;
                                cout<<"|9 *   *  |"<<endl;
                                cout<<"|  *   *  |"<<endl;
                                cout<<"|    *    |"<<endl;
                                cout<<"|  *   *  |"<<endl;
                                cout<<"|  *   * 9|"<<endl;
                                cout<<"___________"<<endl;
                                cout<<endl;
                                };break;
                                case 10:{
                                cout<<"The Computer draws "<<cCard<<endl;
                                cout<<"__________"<<endl;
                                cout<<"|10* * *  |"<<endl;
                                cout<<"|  *   *  |"<<endl;
                                cout<<"|         |"<<endl;
                                cout<<"|  *   *  |"<<endl;
                                cout<<"|  * * *10|"<<endl;
                                cout<<"__________"<<endl;
                                cout<<endl;
                                };break;
                                case 11:{
                                cout<<"The Computer draws Jack "<<endl;
                                cout<<"__________"<<endl;
                                cout<<"|J  wwwww |"<<endl;
                                cout<<"|  {| 00) |"<<endl;
                                cout<<"|  }| ^ ) |"<<endl;
                                cout<<"|  ^^^^^^ |"<<endl;
                                cout<<"| ////// J|"<<endl;
                                cout<<"__________"<<endl;
                                cout<<endl;
                                };break;
                                case 12:{
                                cout<<"The Computer draws Queen "<<endl;
                                cout<<"__________"<<endl;
                                cout<<"|Q  /____ |"<<endl;
                                cout<<"|  /|u u) |"<<endl;
                                cout<<"| / | - ) |"<<endl;
                                cout<<"|  VVVVVV |"<<endl;
                                cout<<"| ////// Q|"<<endl;
                                cout<<"__________"<<endl;
                                cout<<endl;
                                };break;
                                case 13:{
                                cout<<"The Computer draws King "<<endl;
                                cout<<"__________"<<endl;
                                cout<<"|K  WWWWW |"<<endl;
                                cout<<"|  {| --) |"<<endl;
                                cout<<"|  }| ^ ) |"<<endl;
                                cout<<"|  mmmmmm |"<<endl;
                                cout<<"| ////// K|"<<endl;
                                cout<<"__________"<<endl;
                                cout<<endl;
                                };break;
                                case 14:{
                                cout<<"The Computer draws an Ace "<<endl;
                                cout<<"__________"<<endl;
                                cout<<"|A        |"<<endl;
                                cout<<"|         |"<<endl;
                                cout<<"|    *    |"<<endl;
                                cout<<"|         |"<<endl;
                                cout<<"|        A|"<<endl;
                                cout<<"__________"<<endl;
                                cout<<endl;
                                };break;
                            }
                            //Input random card value for player
                            pCard=rand()% (12+1)+2;   //range 2-14

                            //picture output for player
                            switch(pCard){
                                case 2:{
                                cout<<"The Player draws "<<pCard<<endl;
                                cout<<"__________"<<endl;
                                cout<<"|2   *    |"<<endl;
                                cout<<"|         |"<<endl;
                                cout<<"|         |"<<endl;
                                cout<<"|         |"<<endl;
                                cout<<"|    *   2|"<<endl;
                                cout<<"__________"<<endl;
                                cout<<endl;
                                };break;    
                                case 3:{
                                cout<<"The Player draws "<<pCard<<endl;
                                cout<<"__________"<<endl;
                                cout<<"|3   *    |"<<endl;
                                cout<<"|         |"<<endl;
                                cout<<"|    *    |"<<endl;
                                cout<<"|         |"<<endl;
                                cout<<"|    *   3|"<<endl;
                                cout<<"__________"<<endl;
                                cout<<endl;
                                };break;
                                case 4:{
                                cout<<"The Player draws "<<pCard<<endl;
                                cout<<"__________"<<endl;
                                cout<<"|4 *   *  |"<<endl;
                                cout<<"|         |"<<endl;
                                cout<<"|         |"<<endl;
                                cout<<"|         |"<<endl;
                                cout<<"|  *   * 4|"<<endl;
                                cout<<"__________"<<endl;
                                cout<<endl;
                                };break;
                                case 5:{
                                cout<<"The Player draws "<<pCard<<endl;
                                cout<<"__________"<<endl;
                                cout<<"|5 *   *  |"<<endl;
                                cout<<"|         |"<<endl;
                                cout<<"|    *    |"<<endl;
                                cout<<"|         |"<<endl;
                                cout<<"|  *   * 5|"<<endl;
                                cout<<"__________"<<endl;
                                cout<<endl;
                                };break;
                                case 6:{
                                cout<<"The Player draws "<<pCard<<endl;
                                cout<<"__________"<<endl;
                                cout<<"|6 *   *  |"<<endl;
                                cout<<"|         |"<<endl;
                                cout<<"|  *   *  |"<<endl;
                                cout<<"|         |"<<endl;
                                cout<<"|  *   * 6|"<<endl;
                                cout<<"__________"<<endl;
                                cout<<endl;
                                };break;
                                case 7:{
                                cout<<"The Player draws "<<pCard<<endl;
                                cout<<"__________"<<endl;
                                cout<<"|7 *   *  |"<<endl;
                                cout<<"|    *    |"<<endl;
                                cout<<"|  *   *  |"<<endl;
                                cout<<"|         |"<<endl;
                                cout<<"|  *   * 7|"<<endl;
                                cout<<"__________"<<endl;
                                cout<<endl;
                                };break;
                                case 8:{
                                cout<<"The Player draws "<<pCard<<endl;
                                cout<<"__________"<<endl;
                                cout<<"|8 *   *  |"<<endl;
                                cout<<"|    *    |"<<endl;
                                cout<<"|  *   *  |"<<endl;
                                cout<<"|    *    |"<<endl;
                                cout<<"|  *   * 8|"<<endl;
                                cout<<"__________"<<endl;
                                cout<<endl;
                                };break;
                                case 9:{
                                cout<<"The Player draws "<<pCard<<endl;
                                cout<<"___________"<<endl;
                                cout<<"|9 *   *  |"<<endl;
                                cout<<"|  *   *  |"<<endl;
                                cout<<"|    *    |"<<endl;
                                cout<<"|  *   *  |"<<endl;
                                cout<<"|  *   * 9|"<<endl;
                                cout<<"___________"<<endl;
                                cout<<endl;
                                };break;
                                case 10:{
                                cout<<"The Player draws "<<pCard<<endl;
                                cout<<"__________"<<endl;
                                cout<<"|10* * *  |"<<endl;
                                cout<<"|  *   *  |"<<endl;
                                cout<<"|         |"<<endl;
                                cout<<"|  *   *  |"<<endl;
                                cout<<"|  * * *10|"<<endl;
                                cout<<"__________"<<endl;
                                cout<<endl;
                                };break;
                                case 11:{
                                cout<<"The Player draws Jack"<<endl;
                                cout<<"__________"<<endl;
                                cout<<"|J  wwwww |"<<endl;
                                cout<<"|  {| 00) |"<<endl;
                                cout<<"|  }| ^ ) |"<<endl;
                                cout<<"|  ^^^^^^ |"<<endl;
                                cout<<"| ////// J|"<<endl;
                                cout<<"__________"<<endl;
                                cout<<endl;
                                };break;
                                case 12:{
                                cout<<"The Player draws Queen"<<endl;
                                cout<<"__________"<<endl;
                                cout<<"|Q  /____ |"<<endl;
                                cout<<"|  /|u u) |"<<endl;
                                cout<<"| / | - ) |"<<endl;
                                cout<<"|  VVVVVV |"<<endl;
                                cout<<"| ////// Q|"<<endl;
                                cout<<"__________"<<endl;
                                cout<<endl;
                                };break;
                                case 13:{
                                cout<<"The Player draws King"<<endl;
                                cout<<"__________"<<endl;
                                cout<<"|K  WWWWW |"<<endl;
                                cout<<"|  {| --) |"<<endl;
                                cout<<"|  }| ^ ) |"<<endl;
                                cout<<"|  mmmmmm |"<<endl;
                                cout<<"| ////// K|"<<endl;
                                cout<<"__________"<<endl;
                                cout<<endl;
                                };break;
                                case 14:{
                                cout<<"The Player draws an Ace"<<endl;
                                cout<<"__________"<<endl;
                                cout<<"|A        |"<<endl;
                                cout<<"|         |"<<endl;
                                cout<<"|    *    |"<<endl;
                                cout<<"|         |"<<endl;
                                cout<<"|        A|"<<endl;
                                cout<<"__________"<<endl;
                                cout<<endl;
                                };break;
                            }

                            if(cCard>pCard){
                                cout<<"The Computer Won the War"<<endl;
                                cout<<"It Takes 4 of Your Cards"<<endl;
                                cWin=4;
                                pWin=0;
                            }
                            else if(pCard>cCard){
                                cout<<"You Won the War"<<endl;
                                cout<<"You Take 4 of Its' Cards"<<endl;
                                pWin=4;
                                cWin=0;
                            }
                        }
                        else{
                            cout<<"Computer Wins"<<endl;
                            cout<<"It takes 1 of your Cards"<<endl;
                            cWin=1;
                            pWin=0;
                            cCard=2, pCard=1;
                        }
                    }while(cCard==pCard);
                }
            }
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
            else{
                cout<<"Final Score"<<endl;
                cout<<"Computer: "<<cPoints<<" Cards"<<endl;
                cout<<"Player  : "<<pPoints<<" Cards"<<endl;
                
                if(cPoints>pPoints){
                    cout<<"The Computer Won the Game"<<endl;
                }
                else if(pPoints>cPoints){
                    cout<<"You Won the Game"<<endl;
                }
                else{
                    cout<<"This War is at a Stand Still"<<endl;
                }
                
                cout<<endl;
                cout<<"Press any key to exit"<<endl;
                cin>>leave;
                
                exit(0);
            }
            
            //Adds up final points after each round
            pPoints=pPoints+pWin;
            cPoints=cPoints+cWin;
            
        }
        
        cout<<"Final Score"<<endl;
        cout<<"Computer: "<<cPoints<<" Cards"<<endl;
        cout<<"Player  : "<<pPoints<<" Cards"<<endl;

        if(cPoints>pPoints){
            cout<<"The Computer Won the Game"<<endl;
        }
        else if(pPoints>cPoints){
            cout<<"You Won the Game"<<endl;
        }
        else{
            cout<<"This War was at a Stand Still"<<endl;
        }
    }
    else{
        exit(0);
    }
}
