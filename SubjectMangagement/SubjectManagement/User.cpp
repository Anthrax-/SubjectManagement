#include "User.h"
#include "CSVFile.h"

bool User::Login(string password)
{
	return Password == password;
}

vector<User> User::LoadUsers()
{
	vector<User> Result;
	CSVFile UsersFile("users.csv");
	auto lines = UsersFile.Load();
	for (auto line : lines)
	{
		auto parsedLine = CSVFile::ParseLine(line);
		User u;
		u.ID = stoi(parsedLine[0]);
		u.Name = parsedLine[1];
		u.Password = parsedLine[2];
		u.Role = stoi(parsedLine[3]);
		Result.push_back(u);
	}
	return Result;
}
