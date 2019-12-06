#include "CSVFile.h"
CSVFile::CSVFile(string path)
{
	Path = path;
	Stream.open(Path);
}