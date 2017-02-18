#include <iostream>
#include <string>
#include "Stack.h"

using namespace std;

int main()
{
	//
/*The first line of input contains an integer N. This is followed by N lines, each containing a double value. Read in these values, store them in your Stack object and print out the values in the reverse order without deleting them from the stack. After the double values have been printed out, free the Stack by removing all elements with the pop() function. When the stack is empty, call the cleanup() function.
*/
	Stack s;
	s.initialize();
	
	int n;
	cin >> n;	
	double x;

	for (int i =0 ; i < n; i++)
	{	
		//same address going to it, therefore last value applies for all values in stack
		
		cin >> x;
		s.push(new double(x));		

//		cout << "&x: " << &x << "  " << *(&x) << endl;
		//cout << "*s.peek(): " << *(double*)(s.peek()) << endl;;	
//		s.pop();
		//s.peek();
	}

	for(int i =0 ; i < n ; i++)
	{
		cout << *(double*)s.peek() << endl;
		s.head = s.head->next;
	}

	for(int i = 0 ; i < n ; i++)
	{
		s.pop();
	}
//		s.output();
//		s.peek();
		s.cleanup();





	/*
		&x is pushed. 
		
	

	Stack tmp;
	tmp.initialize();
	tmp.head = s.head;
	cout << "size of void* : " << sizeof(void*) << endl;
	cout << "size of doub* : " << sizeof(double*) << endl;
	cout << "size of doub : " << sizeof(double) << endl;	
	cout << "size of float: " << sizeof(float) << endl;

	double* d;
	for(int i = 0; i < n; i++)
	{	//head and pop() return void* variable
		cout << "1: " << *(double*)s.head->data << endl;		
		cout << "2: " << (double*)s.peek() << endl;
		cout << "3: " << *(int*)s.peek() << endl;
		cout << "4: " << *(double*)s.pop() << endl << endl;
	}

	s.cleanup();	
*/
	return 0;
}
