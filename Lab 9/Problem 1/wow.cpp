

#include <iostream>
#include <string>
#include <vector>
#include <typeinfo>
#include "SomeHeader.h"

using namespace std;

int main(){
	//declare a vector type A
	vector<A*> vec;

	//use intit() to populate it
	initVec(vec);

/*
1A
1A
1B
1A
1B
1B*/
// In your .cpp file, simply iterate over your vector and 
//use typeid(...).name() to print out the name of each element in the vector.
	
	for(int i = 0; i < vec.size(); i++){
		A &a1 = *vec[i];

		cout << typeid(a1).name() << endl;
	}


	return 0;
}

