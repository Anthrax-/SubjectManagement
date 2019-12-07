#pragma once
#include <string>
#include <vector>
using namespace std;
class User
{
	public:
	void Login();
	string Name;
	string Password;
	int ID;
	int Role;
	static vector<User> LoadUsers();
};

