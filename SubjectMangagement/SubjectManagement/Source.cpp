#include<iostream>
#include"CSVFile.h"
#include "Course.h"
#include<fstream>
#include <string>
using namespace std;
string fun(vector<string>v)	
{	
	string word;	

	for (int i = 0; i < v.size(); i++)	
	{	
		word += v[i];	
		if (i != (v.size() - 1))	
			word += ",";	

	}	
	return word;	
}
int main()
{
	Course S;
	S.GetStudents();
	return 0;
}
