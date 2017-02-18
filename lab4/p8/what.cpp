#include <iostream>
#include <cassert>
#include <string>
#include <cstring>
#include <vector>

using namespace std;


struct Stash {
	
public:
	int inflaterate;
	int nofreallo;
	
	int size;      // Size of each space
	int quantity;  // Number of storage spaces
	int next;      // Next empty space
  		
	// Dynamically allocated array of bytes:
	unsigned char* storage;
  
	// Functions!
	void initialize(int sz, int x){
		size = sz;
		inflaterate = x;
		quantity = 0;
		storage = 0;
		next = 0;
	}
  
	void cleanup(){
		if(storage != 0) {
		  std::cout << "freeing storage" << std::endl;
		  delete []storage;
		}
	}
  
	int add(const void* element){
		//const void* element
		
		
		if(next >= quantity) // Enough space left?
		{
			nofreallo++;
			inflate(inflaterate); // this 100 gotta change
		}		
		
		// Copy element into storage,
		// starting at next empty space:
		int startBytes = next * size;
		unsigned char* e = (unsigned char*)element;

				//charsize
		for(int i = 0; i < size; i++)
		  storage[startBytes + i] = e[i];
		next++;
				
		return(next - 1); // Index number
	}

	void* fetch(int index){
		// Check index boundaries:
		assert(0 <= index);
  
		if(index >= next)
			return 0; // To indicate the end
  				           
		// Produce pointer to desired element:
		return &(storage[index * size]);
	}
  
	int count() {
		return next; // Number of elements in CStash
	}
  
	void inflate(int increase){
		assert(increase > 0);
		
		int newQuantity = quantity + increase;
		int newBytes = newQuantity * size;
		int oldBytes = quantity * size;
		unsigned char* b = new unsigned char[newBytes];
		
			for(int i = 0; i < oldBytes; i++)
			b[i] = storage[i]; // Copy old to new
		
		delete []storage; // Old storage
		storage = b; // Point to new memory
		quantity = newQuantity;
	}
	
	void output(int index)
	{
//		cout << "inside output(), index: " << index << endl;
		for(int i = 0; i < index; i++)
		{		
		cout << *(char*)fetch(i);				
		}

		cout << nofreallo << endl;		
		cout << (inflaterate * nofreallo) << endl;
	}	
}; 

int main()
{
	//first input is an integer; how much the stash should increment
	int x;
	cin >> x;
	
	//next input is a pair (C, n) ; If n is negative, skip line after.
	char c;
	int n;	
	
	Stash s;
	s.initialize(sizeof(char*), x);
	
	int index = 0;
	vector<int> vec;
	//input until (& 99)
	while(cin >> c >> n && (c != '&' && n != 99) )
	{
		
		int posN = n;
		if(n < 0)
		{
			posN = n * -1;
		}		

		for(int i = 0; i< posN; i++)
		{
//		s.push(new double(x));		
			char cc = c;
			s.add(new char(cc));	
			index++;	
		}
		
		if(n < 0)
		{	s.add(new char('\n'));
			index++;
		}
	}	

	s.output(index);	

	return 0;

}
