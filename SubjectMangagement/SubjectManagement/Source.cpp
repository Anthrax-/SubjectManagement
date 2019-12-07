#include<iostream>
#include "Course.h"
#include<string>
#include "student.h"
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
	
	return 0;
}
