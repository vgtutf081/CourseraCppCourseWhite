//============================================================================
// Name        : StructLectureTitle.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


struct Specialization
{
	string  value;

	explicit Specialization (string _specialization)
	{
		value = _specialization;
	}
};

struct Course
{
	string value;

	explicit Course (string _course)
	{
		value = _course;
	}
};

struct Week
{
	string value;

	explicit Week (string _week)
	{
		value = _week;
	}
};


struct LectureTitle {


  string specialization;
  string course;
  string week;

  LectureTitle (Specialization new_specialization, Course new_course, Week newweek)
  {
	  specialization = new_specialization.value;
	  course = new_course.value;
	  week = newweek.value;
  }
};

int main() {

	LectureTitle title(
	    Specialization("C++"),
	    Course("White belt"),
	    Week("4th")
	);

	return 0;
}
