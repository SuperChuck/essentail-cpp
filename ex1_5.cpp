#include<iostream>
#include<string>
using namespace std;

int main()
{
	string name;
	cout<<"Pls input your name: ";
	cin>>name;
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
	return 0;	
}