#include <iostream>
#include <string>
//#include "Entry.h"
using namespace std;

class Entry
{
	private:
		string name, lastname, email;
	
	public:
		void setName(string s)
		{
			name = s;	

		}			

		void setLastname(string s)
		{
			lastname = s;
		}		

		void setEmail(string s)
		{
			email = s;
		}

		string getName()
		{
			return name;
		}
		string getLastName()
		{
			return lastname;
		}
		
		string getEmail()
		{		
			return email;
		}

		void output()
		{
			cout << "First Name: " << getName() << endl;
			cout << "Last Name: " << getLastName() << endl;
			cout << "Email: " << getEmail() << endl;
		}

};

class AddressBook: public Entry
{
	public:	
		AddressBook *next = NULL;
		//constructor
		AddressBook(string n, string l, string e)
		{
			setName(n);
			setLastname(l);
			setEmail(e);
		}		
	
		void add(AddressBook *addr)
		{
			//get to end. 
			AddressBook *temp = this;
			while(temp->next != NULL)
			{
				temp = temp->next;
			}				
			temp->next = addr;
		}
			
		void print()
		{
/*			AddressBook *temp = this;
	output();
	next->output();
	next->next->output();
	cout << "================" << endl;
	temp->output();
	temp->next->output();
	cout << "         ;;;;;;;;;;;; "<< endl;
	this->output();
	this->next->output();
*/
			AddressBook *aye = this;
			while( aye->next != NULL)
			{
				//aye->output() << endl;	
			cout << "First Name: " << aye->getName() << endl;
			cout << "Last Name: " << aye->getLastName() << endl;
			cout << "Email: " << aye->getEmail() << endl << endl;
				
				aye = aye->next;	
			}
//				aye->output() << endl;				
			cout << "First Name: " << aye->getName() << endl;
			cout << "Last Name: " << aye->getLastName() << endl;
			cout << "Email: " << aye->getEmail() << endl << endl;

		}




};
