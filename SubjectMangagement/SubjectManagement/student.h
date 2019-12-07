#pragma once
#include"Course.h"
#include"user.h"
#include"vector"
class student : public User  
	
{
public:
	int Academicyear;
	vector<Course> FinishedCourses,CoursesInProgress;
	void Editdata();
	bool CanTakeCourse(Course course);
	void viewcourses();
	void registerforacourse();
	void viewcoursedetails();
	void viewavailablecourses();
	student();
	~student();
};