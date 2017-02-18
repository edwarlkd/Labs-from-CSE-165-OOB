#include <iostream>
#include <string>

using namespace std;

class Entry
{
	/*
	    myEntry.setName(name);
	    myEntry.setLastname(lastname);
	    myEntry.setEmail(email);   
	    myEntry.print();
	*/
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



		void print()
		{
			cout << "First Name: " << getName() << endl;
			cout << "Last Name: " << getLastName() << endl;
			cout << "Email: " << getEmail() << endl;
		}

};
