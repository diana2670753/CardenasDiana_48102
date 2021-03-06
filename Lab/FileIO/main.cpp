/* 
 * File:   main.cpp
 * Author: Cardenas, Diana
 * Created on October 13, 2016, 11:27 AM
 * Purpose: Save/Open Files
 */

//System Libraries Here
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//User Libraries Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    ifstream in;
    ofstream out;
    int rows, cols;
    string line;
    
    //Input or initialize values Here
    in.open("map.dat");
    in>>rows>>cols;
    cout<<"rows = "<<rows<<" cols = "<<cols<<endl;
    
    //Output Located Here
    getline(in, line);
    for(int row=1;row<=rows;row++){
        getline(in,line);
        cout<<row<<" "<<line<<endl;
    }
    cout<<" ";
    for(int col=1;col<=cols;col++){
        cout<<col;
    }
    cout<<endl;

    //Where do you want to place the player
    int prow,pcol;
    cout<<"Where to position the player in row and column"<<endl;
    cin>>prow>>pcol;
    cout<<"Player position in Y = "<<prow<<" Player position in X = "<<pcol<<endl;
    
    //Read Back in the file
    in.close();
    in.clear();
    
    //Input values
    in.open("map.dat");
    in>>rows>>cols;
    cout<<"rows = "<<rows<<" cols = "<<cols<<endl;
    
    //Display Output
    out.open("player.dat");
    getline(in,line);
    for(int row=1;row<=rows;row++){
        getline(in,line);
        if(row==prow&&line[pcol-1]=='o')line[pcol-1]='P';
        cout<<row<<" "<<line<<endl;
        cout<<line;
    }
    cout<<" ";
    for(int col=1;col<=cols;col++){
        cout<<col;
    }
    cout<<endl;
    
    //close the file
    in.close();
    out.close();
    
    //Exit
    return 0;
}

