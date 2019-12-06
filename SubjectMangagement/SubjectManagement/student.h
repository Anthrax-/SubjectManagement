#pragma once
#include"Course.h"
#include"user.h"
#include"vector"
class student : public User  
	
{
public:
	long ID;
	int Academicyear;
	vector<Course> FinishedCourses,CoursesInProgress;
	void Editdata();
	void viewcourses();
	void registerforacourse();
	void viewcoursedetails();
	void viewavailablecourses();


	student();
	~student();
};

