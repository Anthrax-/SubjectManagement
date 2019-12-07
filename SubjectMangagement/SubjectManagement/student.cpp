#include "student.h"
#include "database.h"
#include "CSVFile.h"

student::student(int userID)
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

vector<student> student::LoadStudents()
{
	vector<student> result;
	CSVFile StudFile("Students.csv");
	auto lines = StudFile.Load();
	for (auto line : lines)
	{
		auto parsedLine = CSVFile::ParseLine(line);
		student std(stoi(parsedLine[0]));
		std.Academicyear = stoi(parsedLine[1]);
		auto numFinished = stoi(parsedLine[2]);
		auto numProgrs = stoi(parsedLine[3]);
		for(int i=4 ; i<= numFinished +3 ;i++)
		std.FinishedCourses.push_back(parsedLine[i]) ;
		for(int i = 4 + numFinished; i <= 4 + numFinished + numProgrs;i++)
		std.CoursesInProgress.push_back(parsedLine[i]);
		result.push_back(std);
	}

	return result;
}

student::student()
{
}


student::~student()
{
}
