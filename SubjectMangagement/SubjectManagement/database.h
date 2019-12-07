#include"Course.h"
#include"User.h"
#include "student.h"
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
	static User GetUserByID(int userID);
	static User GetUserByUsername(string username);
	static vector<User> GetUsers(int Role);
	static vector<student> ViewStudentsInCourse(int CourseID);
	
};

