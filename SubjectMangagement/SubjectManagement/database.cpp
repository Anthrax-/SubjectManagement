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

User Database::GetUserByID(int userID)
{
	for (int i = 0; i < Users.size; i++)
	{
		if (userID == Users[i].ID)
			return Users[i];
		else return;
	}
}
User Database::GetUserByUsername(string username)
{
	for (int i = 0; i < Users.size; i++)
	{
		if (username == Users[i].Username)
			return Users[i];
		else return;
	}
}
vector<User> Database::GetUsers(int Role)//samir
{
		//this function should return all the users with the role in parameters.
}

vector<Course> Database::GetPreRequiredCourses(Course course)//farah
{
	//this function should take a course return a vector that countains all the pre-required courses 
	//it should use the GetCourse Function
}



Database::~Database()
{
}
