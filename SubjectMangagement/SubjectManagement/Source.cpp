#include<iostream>
#include"CSVFile.h"
#include<string>
using namespace std;

int main()
{
	CSVFile UsersFile("users.csv");
	auto lines = UsersFile.Load();
	auto parsed = CSVFile::ParseLine(lines[0]);
	return 0;
}
