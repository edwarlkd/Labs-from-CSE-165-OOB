#include <iostream>

using namespace std;

/*

char 1
shot 2
int 2 or 4
int, long, float 4
double 8
long double 10

*/

struct s1
{
	char a;
	double c3;	
};

struct s2
{
	char a,d;
	double c3;	
};


struct s3
{
	char a,b,d;
	double c3;	
};

struct s4
{
	char a,b,c,d;
	double c3;	
};

struct s5
{	
};


struct s6
{
	char a;
	int c;
	char b;	
};

struct s7
{
	char a,b;
	int c;	
};

int main()
{
//	cout << sizeof(aye) << endl;

//	cout << " ========" << endl;
	cout << sizeof(s1) << endl;
	cout << sizeof(s2) << endl;
	cout << sizeof(s3) << endl;
	cout << sizeof(s4) << endl;
	cout << sizeof(s5) << endl;
	cout << sizeof(s6) << endl;
	cout << sizeof(s7) << endl;


	return 0;
}
