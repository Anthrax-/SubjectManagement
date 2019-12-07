#include "Database.h"



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
	//if not found return null
}

User Database::GetUserByID(int userID)//samir
{
	//this function should return user with the id in parameters
	//if not found return null
}
User Database::GetUserByUsername(string username)//samir
{
	//this function should return user with the username
	//if not found return null
}
vector<User> Database::GetUsers(int Role)//samir
{
		//this function should return all the users with the role in parameters.
}

vector<student> Database::ViewStudentsInCourse(int CourseID)
{

}

vector<Course> Database::GetPreRequiredCourses(Course course)//farah
{
	//this function should take a course return a vector that countains all the pre-required courses 
	//it should use the GetCourse Function
}



Database::~Database()
{
}
