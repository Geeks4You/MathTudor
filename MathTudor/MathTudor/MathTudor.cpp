// Week 1: Individual Math Tutor Program
// PRG/410: C++ Programming I
// September 26, 2016
// Marcia L. Allen
// Write a program that can be used as a math tutor for a young student. The program
// should display two random numbers to be added. The program should then pause while 
// the student works on the problem. When the student is ready to check the answer, 
// he or she can press a key and the program will display the correct solution.

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <ctime>
using namespace std;

int _tmain(int argc, _TCHAR* argv[]) {

	// Declare variables needed for program
	double X, Y, Z;

	unsigned seed = time(0);
	srand(seed);

	// Add a welcome to the program and display instructions to the student.
	cout << "Welcome to Student Math Tutor! " << endl;
	cout << "You will learn addition today! " << "\n\n";
	cout << "Two random numbers will be displayed, please try and solve the problem. " << endl;

	// Define Variable values: Determine two random numbers & Solve the problem.
	X = 1 + rand() % 350;
	Y = 1 + rand() % 350;
	Z = X + Y;

	// Display the two random numbers to be solved.
	cout << "\n";
	cout << X << " + " << Y << " = " << endl;

	// Pause to allow student an opportunity to solve the problem.
	system("pause");

	// Display the answer to the problem.
	cout << X << " + " << Y << " = " << Z << endl;
	return 0;
}