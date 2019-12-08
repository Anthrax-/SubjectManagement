#pragma once
#include <string>
#include <vector>
#include "student.h"
using namespace std;
class Course
{
	public:
	string Name;
	string Code;
	int MaxNumOfStudents;
	int Hours;
	vector<string> PreRequiredCourses;
	static vector<Course> LoadCourses();
	vector<student> GetStudents();
};

