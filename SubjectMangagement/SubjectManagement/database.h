#include"Course.h"
#include"User.h"
class Database
{
	static vector<Course> Courses;
	static vector<User> Users;

public:
	Database();
	~Database();
	static void load();
	static vector<Course> GetPreRequiredCourses(Course course);
	static Course GetCourse(string courseID);
	static vector<User> GetUser(int userID);
	static vector<User> GetUsers(int Role);
	 
};

