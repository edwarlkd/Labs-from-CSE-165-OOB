#include <iostream>

using namespace std;

class LinkedList
{
	public:
		struct Link{
			double data;
			Link *next;
		
			void initialize(double *dat, Link* nxt)
			{
				data = *dat;
				next = nxt;
			}		
		}* head;

	LinkedList(double *num, Link* link){
		head = new Link();
		head->initialize(num, NULL);
	}

	void add(Link* l, int n)
	{
		Link *copy = l;
		double d = 0;
		for(int i = 0; i < n; i++)
		{
	//create new link for last->next
	//then make it l
	//append it
			copy->next = new Link();
			copy = copy->next;	
			copy->initialize(&d, NULL);			
			d++;
		}
//		copy->next = NULL; //last one

	}

	void print()
	{
		Link *temp = head;
		while(temp != NULL)
		{
			cout << temp->data << endl;
			temp = temp->next;	
		}
		//after can't use this since it's nUll.
//		cout << (temp->data) << endl;
//		cerr << "print success!" << endl;
	}
	
	void cleanup()
	{
		Link *temp; //'temp' not null, but 'temp->next' sure is
		while(temp != NULL)
		{					
			delete &head->data;

			temp = head;
			delete temp;

			temp = temp->next;			
		}


	}
	
/*
	void output() //output check
	{
		Link *bs = head;
		cout << "Fine Data: ";
		while(bs != NULL)
		{
			cout << bs->data << "  ";
			bs = bs->next;
		}
	}


*/




};











