#include <string>
#include <fstream>
#include <vector>
#pragma once
using namespace std;
class CSVFile
{
	public:
	CSVFile(string path);
	~CSVFile();
	vector<string> Load();
	void Save(vector<string> Lines);
	private:
	fstream Stream;
	string Path;
};

