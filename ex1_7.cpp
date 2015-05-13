#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	vector<string> wordVec;
	ifstream fin("words.txt");
	if (!fin)
	{
		cerr << " no such file \n";
		return -1;
	}
	ofstream fout("word_sorted.txt");
	if (! fout)
	{
		cerr << " unable to open file \n" ;
		return -2;
	}

	string sVal;
	while(fin >> sVal)
	{
		wordVec.push_back(sVal);
	}
	sort(wordVec.begin(), wordVec.end());
	for( int i=0; i< wordVec.size(); ++i)
	{
		cout << wordVec[i] << " ";
		fout << wordVec[i] << " ";
	} 
	cout << endl;
	fout << endl;
	return 0;
}