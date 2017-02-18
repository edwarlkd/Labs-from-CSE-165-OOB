#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;

struct Stack {
	void (*deletecb) (void * pt);
	void setDeleteCallback( void (*delcb) (void * pt) )
	{
		//so delete_func() in main is gonna be the parameter
		// void delete_func(void *pt){}
		deletecb = delcb;
		
	}


	struct Link {
		void* data;
		Link* next;
		
		void initialize(void* dat, Link* nxt){
			data = dat;
			next = nxt;
		}
	}* head;
	
	void initialize(){
		head = 0;
	}
	
	void push(void* dat){
		Link* newLink = new Link;
		newLink->initialize(dat, head);
		head = newLink;
	}
	
	void* peek(){
		if (head == 0){
			std::cout << "Stack is empty";
		}
	//	cout << "peek2(): " << *(double*)(head->data) << endl;
					
		return head->data;
	}
	
	//now change this to updated pop
	void cleanup(){
	    
	    while (head != 0)
            {
		void *res = head->data;
	        deletecb(res);
	        head = head->next;
            }
      		

	}
	
	//this is for test. 
	void output()
	{
		Link *temp = head;
		int i = 1; //just a counter
		cout << "Data Stored..... " << endl;
		while(temp->next != NULL)
		{	
			std::cout << "	" << *(double*)temp->data << std::endl;
			temp = temp->next;		
			i++;
		}
			std::cout << "	" << *(double*)temp->data << std::endl;
	
		cout << "Total amount of data was " << i << endl << endl;
	}


};
#endif
