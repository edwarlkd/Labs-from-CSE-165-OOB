#include <iostream>
#include "LinkedList.h"

using namespace std;
int main(int argc, const char * argv[])
{
	LinkedList * linkedList = new LinkedList(new double(47.1), NULL);
	linkedList->add(linkedList->head, 5);
	linkedList->add(linkedList->head->next->next, 5);
	linkedList->print();    		
	//cout << "my output is following " << endl;
	//linkedList->output();
	linkedList->cleanup();
		
	return 0;
}

