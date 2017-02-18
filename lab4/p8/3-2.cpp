#include <iostream>
#include <vector>
#include <string>
using namespace std;



int main()
{
    char c;
    int x;

    while(cin >> c >> x && x != -2)
    {
        if(x != -1)
        {
            for(int i = 0; i < x; i ++)
            {
                cout << c;
            }
            cout << endl;
        }
        else
        {
            cout << endl;
        }
    }


    return 0;
}
