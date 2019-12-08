#pragma once
#include"Course.h"
#include"User.h"
#include"vector"
class student : public User  
	
{
public:
	student(int userID);
	int Academicyear;
	vector<string> FinishedCourses,CoursesInProgress;
	void Editdata();
	bool CanTakeCourse(Course course);
	bool HaveCourseInProgress(string courseid);
	bool HaveFinishedCourse(string courseid);
	void viewcourses();
	void registerforacourse();
	void viewcoursedetails();
	void viewavailablecourses();
	static vector<student> LoadStudents();
	student();
	~student();
};