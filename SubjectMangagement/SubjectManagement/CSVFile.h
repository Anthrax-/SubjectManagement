#include <string>
#include <fstream>
#include <vector>
#pragma once
using namespace std;
class CSVFile
{
	public:
	CSVFile(string path);
	vector<string> Load();
	static vector<string> ParseLine(string line);
	void Save(vector<string> Lines);
	~CSVFile();
	private:
	fstream Stream;
	string Path;
};

