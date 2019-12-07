#include "CSVFile.h"
CSVFile::CSVFile(string path)
{
	Path = path;
	Stream.open(Path);
}
CSVFile::~CSVFile()
{
	Stream.close();
}
vector<string> CSVFile::Load()
{
	vector<string> result;
	Stream.seekg(0);
	string line;
	while (getline(Stream, line))
	{
		result.push_back(line);
	}
	return result;
}
void CSVFile::Save(vector<string> Lines)
{
	Stream.seekp(0);
	for (int i = 0; i < Lines.size(); i++)
	{
		Stream << Lines[i] << endl;
	}
}
