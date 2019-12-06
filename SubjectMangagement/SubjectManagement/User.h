#pragma once
#include <string>
#include <vector>
#include "CSVFile.h"
using namespace std;
class User
{
	public:
	void Login();
	string Name;
	string Password;
	int ID;
	static vector<User> LoadUsers();
};

