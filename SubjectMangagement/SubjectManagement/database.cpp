#include "Database.h"
vector<Course> Database::Courses; // to prevent linking error
vector<User> Database::Users; // to prevent linking error

Database::Database()
{
}
void Database::load() {
	Database:: Courses = Course::LoadCourses();
	Database::Users = User::LoadUsers();

}
Course Database::GetCourse(string courseID) //farah
{
	//this function should loop through courses vector and return the course with the courseid.
	Course c;
	return c;
}

User Database::GetUserByID(int userID)
{
	for (int i = 0; i < Users.size(); i++)
	{
		if (userID == Users[i].ID)
			return Users[i];
	}
	return User();
}
User Database::GetUserByUsername(string username)
{
	for (int i = 0; i < Users.size(); i++)
	{
		if (username == Users[i].Username)
			return Users[i];
	}
	return User();
}
vector<User> Database::GetUsers(int Role)
{
	vector<User> Result;
	for (int i = 0; i < Users.size(); i++)
		if (Role == Users[i].Role)
			Result.push_back(Users[i]);
	return Result;
	
}

vector<student> Database::ViewStudentsInCourse(int CourseID)
{
	return vector<student>();
}

vector<Course> Database::GetPreRequiredCourses(Course course)//farah
{
	//this function should take a course return a vector that countains all the pre-required courses 
	//it should use the GetCourse Function
		return vector<Course>();

}



Database::~Database()
{
}
