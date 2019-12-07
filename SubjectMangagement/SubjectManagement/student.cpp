#include "student.h"
#include "Database.h"


student::student(int userID) : User()
{
	auto user = Database::GetUserByID(userID);
	User::Name = user.Name;
	User::Username = user.Username;
	User::Password = user.Password;
	User::ID = user.ID;
	User::Role = user.Role;
}

void student::Editdata()
{
}

bool student::CanTakeCourse(Course course)//godzilla
{
	//check the course pre-required courses and check if the student have studed them or no 
	//if he has studed them return yes else return no
	return false;
}

student::student()
{
}


student::~student()
{
}
