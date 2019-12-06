#pragma once
#include <string>
#include <vector>
using namespace std;
class Course
{
	string Name;
	int Code;
	int MaxNumOfStudents;
	int Hours;
	vector<Course> PreRequiredCourses;
};

