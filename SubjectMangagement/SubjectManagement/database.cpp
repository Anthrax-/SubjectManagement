#include "Database.h"
#include "CSVFile.h"
vector<Course> Database::Courses; // to prevent linking error
vector<User> Database::Users; 
vector<student> Database::Students; 
Database::Database()
{
}
void Database::Save()
{
	CSVFile CoursesFile("courses.csv");
	CSVFile UsersFile("users.csv");
	CSVFile StudFile("Students.csv");
	
}

void Database::load() 
{
	Database:: Courses = Course::LoadCourses();
	Database::Users = User::LoadUsers();
	Database::Students = student::LoadStudents();

}
Course Database::GetCourse(string courseID) //farah
{
	Course c;
	for (int i = 0; i < Courses.size(); i++)
	{
		if (courseID == Courses[i].Code) {
			
			return Courses[i];
		}
	}
	
	
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
vector<Course> Database::GetPreRequiredCourses(Course course)//farah
{

	vector<Course> r;
	for (int i = 0; i < course.PreRequiredCourses.size(); i++) 
	{
		r.push_back(GetCourse(course.PreRequiredCourses[i]));
	}
	return r;
}
Database::~Database()
{
}
