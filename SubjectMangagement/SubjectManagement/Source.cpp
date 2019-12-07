#include<iostream>
#include"CSVFile.h"

using namespace std;
string fun(vector<string>v)
{
	string w;

	for (int i = 0; i < v.size(); i++)
	{
		 w += v[i];
		if (i != (v.size() - 1))
			w += ",";

	}
	return w;
}

vector<string> ParseLine(string line)
{
	vector<string> strings;
	string s;
	for (int i = 0; i < line.size(); i++)
	{
		s += line[i];
		if (line[i] == ',')
		{
			s.pop_back();
			strings.push_back(s);
			s = "";
		}
	}
	strings.push_back(s);
	return strings;
}
int main()
{
	string t = "1,2,3,4,5,4,3asfasd,2";
	auto res = ParseLine(t);
	
	return 0;
}
