#pragma once
#include <string>
#include <vector>
using namespace std;
class Course
{
	string Name;
	string Code;
	int MaxNumOfStudents;
	int Hours;
	vector<string> PreRequiredCourses;
	static vector<Course> LoadCourses();
};

