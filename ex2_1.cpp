#include<iostream>
using namespace std;

bool fibon_elem(int pos, int & ele);

int main()
{
	bool more_tries = true;
	while( more_tries)
	{
		int pos;
		cout << "enter the position: ";
		cin >> pos;
		int element;
		if(fibon_elem(pos, element))
		{
			cout << "the element in #" 
			       << pos << " is "
			       << element << endl;
		}
		cout << "Want another try?(y/n): ";
  		char choice;
		cin >> choice;
		if( 'n' == choice || 'N' == choice)
		{
			more_tries = false;
		} 
	}	
	return 0;
}

bool fibon_elem(int pos, int & ele)
{
	if( pos <=0 || pos > 1000 )
	{
		cout << "posisition must be in 1 ~ 1000\n";
		return false;
	}
   	int n_1 = 1, n_2 = 1;
	for( int n = 3; n <= pos; ++n )
	{
		int temp = n_1 + n_2;
		n_1 = n_2;
		n_2 = temp;
	}
	ele = n_2;
	return true;
}
