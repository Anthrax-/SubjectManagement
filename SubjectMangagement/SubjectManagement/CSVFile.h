#include <string>
#include <fstream>
#pragma once
using namespace std;
class CSVFile
{
	public:
	CSVFile(string path);
	private:
	fstream Stream;
	string Path;
};

