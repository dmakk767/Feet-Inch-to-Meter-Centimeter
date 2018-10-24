// Ch4Num4.cpp : Defines the entry point for the console application.
//
//this program takes in feet and inches and switches them to meters
//and centimeters and outputs the results.

//This program converts feet and inches to meters and centimeters


//include needed libraries
#include "stdafx.h"
#include <iostream>
#include <math.h>
//declare our namespace
using namespace std;
//predefine our functions
float getinfo(float& feet, float& inches);
void calcmeter(float& feet, float& inches);
void output(float meters, float centi);
//main code goes here/ function calls
int main()
{
	//define variables
	float feet = 0, inches = 0;
	char cont = 'n';
	//make loop to let user run more than once 
	do {
		//call get info func
		getinfo(feet, inches);
		// test line // cout << feet <0< " " << inches << endl;
		//call the calc func
		calcmeter(feet, inches);
		//allow user input to continue the program
		cout << "Enter 'Y' to continue, all other keys quit." << endl;
		cin >> cont;
		cont = toupper(cont);
	} while (cont == 'Y');
    return 0;
}

//define our functions
float getinfo(float& feet, float& inches) {
	//get info from user
	cout << "Please enter the feet." << endl;
	cin >> feet;
	cout << "Please enter the inches " << endl;
	cin >> inches;
	return feet, inches;
}

void calcmeter(float& feet, float& inches) {
//this func does the calc for the program
	// test line // cout << feet << "feet and inches " << inches << endl;
	float totalInches = feet * 12.0f;
	totalInches = totalInches + inches;
	// test line // cout << "total inches" << totalInches << endl;
	float totalCenti = totalInches * 2.54f;
	// test line // cout << "total centi" << totalCenti << endl;
	float meters = totalCenti / 100;
	float centi = fmod(totalCenti, 100); 
	//format our number by using floor
	meters = floor(meters);
	centi = floor(centi);
	//output to user test // cout << "The length is " << meters << " meters, and " << centi << "centimeters" << endl;
	//send info to output func to display to user
	output(meters, centi);
}

void output(float meters, float centi){
	//display the info to user 
	cout << "The length is " << meters << " meters, and " << centi << " centimeters\n" << endl;	
}

