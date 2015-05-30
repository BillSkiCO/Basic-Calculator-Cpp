/*
Basic Calculator Application in C++ demonstrating switch usage
Author: Bill Golembieski
Date: 5/29/2015
*/

#include "stdafx.h"
#include <iostream>

using namespace std;

float DivideByZeroCheck(float a, float b){
	if (b == 0){
		cout << "Cannot Divide"<< a << " by Zero" << endl;
	}
	else
		return (a / b);
}

int _tmain(int argc, _TCHAR* argv[])
{
	//Variable definitions
	float inputa;
	float inputb;
	float answer;
	char operation;


	cout << " Simple Calculator Program by Bill Golembieski" << endl;
	cout << "Enter a Number" << endl;
		cin >> inputa;
		cout << "Enter an operation (+ , - , / , *)" << endl;
		cin >> operation;
	cout << "Enter another number" << endl;
		cin >> inputb;

	switch (operation){

	case '+':
		answer = (inputa + inputb);
		break;

	case '-':
		answer = (inputa - inputb);
		break;

	case '/':
		DivideByZeroCheck(inputa, inputb);

	case '*':
		answer = (inputa * inputb);

	default:
		cout << "Enter a valid operator next time" << endl;
		return EXIT_FAILURE;
	}

	cout << answer << endl;
	return EXIT_SUCCESS;
}

