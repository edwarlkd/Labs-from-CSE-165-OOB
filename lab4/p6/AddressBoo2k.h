#include <iostream>
#include <string>

using namespace std;

class AddressBook
{
	class Entry
	{
	private:
		string name, lastname, email;
	
	public:	
		Entry *next;				
		
		Entry()
		{

		}
		
		Entry(string s, string l, string e)
		{
			name = s;
			lastname = l;
			email = e;
			next = NULL;
		}

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
	}* Head;

	public:	
		Entry *temp;
		//constructor
		AddressBook(string n, string l, string e)
		{
			if( Head == NULL){
				Head = new Entry(n, l, e);
				cout << "New one!" << endl;			
			}			
			else
			{
				temp->setName(n);
				temp->setLastname(l);
				temp->setEmail(e);
			}	
						
		}		
	
		void add(AddressBook *addr)
		{
			//get to end of the list
			Entry *temp = Head;
			while( temp->next != NULL){
				temp = temp->next;		
				cout << "mew" << endl;	
			}
			temp = addr->temp;			
		}

		void print()
		{
			while( Head != NULL)
			{
				Head->output();
				Head = Head->next;
			}
	
		}

};
