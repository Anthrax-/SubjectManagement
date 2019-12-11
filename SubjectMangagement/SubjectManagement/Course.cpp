#include "Course.h"
#include "CSVFile.h"
#include "Database.h"

vector<Student> Course::GetStudents()
{
	vector<Student> result;
	for (int i = 0; i < Database::Students.size(); i++)
	{
		Student s = Database::Students[i];
		if (s.HaveCourseInProgress(Code))
			result.push_back(s);
	}
	return result;
}
vector<string> Course::GetCoursesLines()//yong
{
	//loop in all the elements in the database::courses and generate a string line that contains the data comma separated
	//see the loadcourses function to know the order of the data
	//ex : code,name,hours,maxnumberofstudents,---------------------------------------------------------------------------,prerequiredcourse2,......
}
vector<Course> Course::LoadCourses()
{
	vector<Course> Result;
	CSVFile CoursesFile("courses.csv");
	auto lines = CoursesFile.Load();
	for (auto line : lines)
	{
		auto parsedLine = CSVFile::ParseLine(line);
		Course course;
		course.Code = parsedLine[0];
		course.Name = parsedLine[1];
		course.Hours = stoi(parsedLine[2]);
		course.MaxNumOfStudents = stoi(parsedLine[3]);
		vector<string> PreCourses;
		for (int i = 4; i < parsedLine.size(); i++)
			PreCourses.push_back(parsedLine[i]);
		course.PreRequiredCourses = PreCourses;
		Result.push_back(course);
	}
	return Result;
}