#pragma once
#include <vector>
#include"Course.h"
#include"User.h"
#include "student.h"
class Database
{
	public:
	static vector<Course*> Courses;
	static vector<User*> Users;
	static vector<student*>Students;


	Database();
	~Database();
	static void load();
	static void Save();
	static vector<Course> GetPreRequiredCourses(Course course);
	static Course GetCourse(string courseID);
	static User GetUserByID(int userID);
	static User GetUserByUsername(string username);
	static vector<User> GetUsers(int Role);	
};

