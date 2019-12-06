#include<iostream>
#include"CSVFile.h"
using namespace std;
int main()
{
	string t = "1,2,3,4,5,4,3asfasd,2";
	auto res = CSVFile::ParseLine(t);
	
	return 0;
}