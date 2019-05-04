#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n, a, sum = 0;
    bool userquit = false;
    
    do
    {
    	 cout << "Enter a positive integer: " ;
   		 cin >> n;

   		if ( n <= 0 ) 
   		 	{
			cout << "Thank you!" << endl;
   		 	userquit = true;
			}
   		else
   		{
   		 for(a=1; a <= n; ++a)
   		{
        	sum += a;   
   		}

   		cout << "The sum of all whole numbers from 1 to " << n << " is " << sum << "." << endl;
   		sum = 0;
   		}

	} while (!userquit);
   
	getch ();
    return 0;
}
