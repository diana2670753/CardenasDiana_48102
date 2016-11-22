/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Cardenas, Diana
 * Created on November 22, 2016, 11:27 AM
 * Purpose: Find Object's kinetic energy
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cmath>      //POW

using namespace std;  //Name-space used in the System Library

//Function prototypes
float kinetic (float, float);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float mass,velocity;
    
    //Input values
    cout<<"This Program Calculates an Objects Kinetic Energy"<<endl;
    cout<<"Input the Object's Mass (in Kilograms): ";
    cin>>mass;
    cout<<"Input the Object's Velocity (meters per second): ";
    cin>>velocity;
    
    //Display Output
    cout<<"The Objects Kinetic Energy is "<<kinetic(mass,velocity)<<endl;

    //Exit Program
    return 0;
}

float kinetic(float mass, float velocity){
    float KE; //Kinetic Energy
    KE=(.5*mass)*(pow(velocity,2));
    return KE;  //Return Value to Main
}