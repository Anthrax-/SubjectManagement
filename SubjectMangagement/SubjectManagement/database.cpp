#include "Database.h"



Database::Database()
{
}
void Database::load() {
	Database:: Courses = Course::LoadCourses();
	Database::Users = User::LoadUsers();

}
Course Database::GetCourse(string courseID)
{
	//this function should loop through courses vector and return the course with the courseid.
}

vector<User> Database::GetUser(int userID)
{
	//this function should return user with the id in parameters
}

vector<User> Database::GetUsers(int Role)
{
		//this function should return all the users with the role in parameters.

}

vector<Course> Database::GetPreRequiredCourses(Course course)
{
	//this function should take a course return a vector that countains all the pre-required courses 
	//it should use the GetCourse Function
}



Database::~Database()
{
}
