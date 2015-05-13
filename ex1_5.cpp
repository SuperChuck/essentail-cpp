#include<iostream>
//#include<string>
#include<cstring>
#include<iomanip>
using namespace std;

int main()
{
	/*
	string name;
	cout << "Pls input your name: ";
	cin >> name;
	switch(name.size())
	{
		case 0:
				cout<<"Ah "
				    <<"Well, ok, hi, user with no name"<<endl;
			    break;
	    case 1:
				cout<<"name length shoulfd not be less than 1"<<endl;
				break;
	    default:
				cout<<"hello, "<<name 
					<<"yo whs up"<<endl; 		
	}
	*/
	
	const int nm_size = 128;
	char user_name[nm_size];
	cout << "Pls enter your name: ";
	cin >> setw(nm_size) >>  user_name;
	
	switch(strlen(user_name))
	{
		case 127:
			cout << "that is a very long name indeed----"
				 << "we may need a shorter one.\n"
				 << "In any case\n";
			break;
	    default:
			cout << "hello, " << user_name
				 << " What's up!\n"; 		
	}
	
	return 0;	
}