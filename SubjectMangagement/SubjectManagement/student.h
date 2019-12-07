#pragma once
#include"Course.h"
#include"User.h"
#include"vector"
class student : public User  
	
{
public:
	student(int userID);
	int Academicyear;
	vector<Course> FinishedCourses,CoursesInProgress;
	void Editdata();
	bool CanTakeCourse(Course course);
	void viewcourses();
	void registerforacourse();
	void viewcoursedetails();
	void viewavailablecourses();
	vector<student> LoadStudents();
	student();
	~student();
};