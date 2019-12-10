#pragma once
#include"User.h"
#include<vector>
class Course;
class Student : public User  
	
{
public:
	Student(int userID);
	int Academicyear;
	vector<string> FinishedCourses,CoursesInProgress;
	bool CanTakeCourse(Course c);
	bool HaveCourseInProgress(string courseid);
	bool HaveFinishedCourse(string courseid);
	static vector<Student> LoadStudents();
	Student();
	~Student();
};