#include <iostream>
#include <string>

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
