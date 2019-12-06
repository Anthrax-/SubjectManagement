#pragma once
#include"Course.h"
#include"user.h"
#include"vector"
class student : public user  
	
{
public:
	long ID;
	int Academicyear;
vector<Course> finishedcourses,coursesinprogress;
	void Editdata();
	void viewcourses();
	void registerforacourse();
	void viewcoursedetails();
	void viewavailablecourses();


	student();
	~student();
};

