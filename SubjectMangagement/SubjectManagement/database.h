#include"Course.h"
#include"User.h"
class database
{
	static vector<Course> courses;
	static vector<User> users;

public:
	database();
	static void load();
	~database();
};

