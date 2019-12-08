#include "Course.h"
#include "CSVFile.h"
#include "Database.h"

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

vector<student> Course::GetStudents()
{
	vector<student> result;
	for (auto stud : Database::Students)
	{
		if (stud.HaveCourseInProgress(Code))
			result.push_back(stud);
	}
	return result;
}
