#include <iostream>
#include "Stash.h"

using namespace std;

int main()
{

	/*
Instructions

Download the file Stash.h. This file contains the Stash data structure from Chapter 4 of the textbook. Your task is to write a program that declares an instance of Stash, fills it up with double numbers and then prints out the numbers. You have to use the Stash member functions to complete this exercise.

The first line of input contains an integer N. This is followed by N lines, each containing a double value. Read in these values, store them in yourclefefe Stash object and print out the values.

After the double values have been printed out, use the appropriate member function of Stash to free up the memory your object occupied.
5
1.1
2.2
3.3
4.4
5.5
Free memory..
	*/

	Stash s1;
	//size of double: 8 byte
	s1.initialize(8);
	
//	cout << "s1.f(0) = " << s1.fetch(0) << "  ::: " << dd << endl;	
	int n;
	cin >> n;
	for(int i = 0 ; i < n ; i++)
	{
		double d;
		cin >> d;
		int index = s1.add(&d);		
		cout << "d: " << d << "  &d: " << &d << endl;
//		cout << "*(float*)s1.fetch(index) = " << *(double*)s1.fetch(index) << endl;
	}
	
	for(int i = 0; i < n ; i++)
	{
		cout <<" sizeof(s1.f()): " << sizeof(s1.fetch(i)) << "  " << endl;
		cout << *(double*)s1.fetch(i) << "   " << s1.fetch(i) << endl;
	
	}
	s1.cleanup();

	return 0;
}	
