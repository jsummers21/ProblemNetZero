// ProblemNetZero.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	double dblnumber = 0.0;

	cout << "Input a number: " << endl;
	cin >> dblnumber;

	if (dblnumber > 0) {
		cout << "Number is positive" << endl;
	}
	else if (dblnumber < 0) {
		cout << "Number is Negative" << endl;
	}
	else if (dblnumber == 0) {
		cout << "Number is 0" << endl;
	}
    return 0;
}

