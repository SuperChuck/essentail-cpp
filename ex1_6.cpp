#include<iostream>
//#include<vector>
using namespace std;

int main()
{
	/*
 	vector<int> ivec;
  	int ival;
	int sum = 0;
     	while(cin >> ival)
 	{
		sum += ival;
		ivec.push_back(ival);
	}
	int avg = sum / ivec.size();
    	cout << "sum is " << sum
	       << " avg is " << avg << endl;
	*/
                const int array_size = 128;
	int ia[array_size];
                
                int sum = 0;
	int num = 0;
	int ival;
                while(cin >> ival)
	{
		sum += ival;
		ia[num++] = ival;
	}
                cout << " sum is " << sum
	       << " avg is " << sum/num <<endl;
	return 0;
}