#include "Student.h"
#include "database.h"
#include "CSVFile.h"
#include"Course.h"
Student::Student(int userID)
{
	auto user = Database::GetUserByID(userID);
	User::Name = user.Name;
	User::Username = user.Username;
	User::Password = user.Password;
	User::ID = user.ID;
	User::Role = user.Role;
}





bool Student::CanTakeCourse(Course c)
{
	for (int i = 0; i < c.PreRequiredCourses.size(); i++)
	{
		string courseid = c.PreRequiredCourses[i];
		if (HaveFinishedCourse(courseid) == false)
			return false;
	} 
	return true;
}

bool Student::HaveCourseInProgress(string courseid)
{
	for (auto course : CoursesInProgress)
	{
		if(course == courseid)
			return true;
	}
	return false;
}

bool Student::HaveFinishedCourse(string courseid)
{
	for (auto course : FinishedCourses)
	{
		if(course == courseid)
			return true;
	}
	return false;
}

vector<Student> Student::LoadStudents()
{
	vector<Student> result;
	CSVFile StudFile("Students.csv");
	auto lines = StudFile.Load();
	for (auto line : lines)
	{
		vector<string> parsedLine = CSVFile::ParseLine(line);
		Student std(stoi(parsedLine[0]));
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

Student::Student()
{
}


Student::~Student()
{
}
