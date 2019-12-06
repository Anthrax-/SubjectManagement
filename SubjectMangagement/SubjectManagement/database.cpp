#include "database.h"



database::database()
{
}
void database::load() {
	database:: courses = Course::LoadCourses();
	database::users = User::LoadUsers();

}

database::~database()
{
}
