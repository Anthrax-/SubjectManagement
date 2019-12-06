#pragma once
#include <string>
#include <iostream>
#include "User.h"
using namespace std;
class Admin : public User
{
public:
	void AddNewStudent();
	void AddNewCourse();
	void EnterCoursePrerequisite();
	void VLOASiSC();
	void VLOACOSS();
	void EACD();
};


