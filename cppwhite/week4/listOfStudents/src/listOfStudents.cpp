//============================================================================
// Name        : listOfStudents.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <vector>



struct Student
	{
	public:
		Student()
	{
			firstname = "";
			lastname = "";
			day = 0;
			month = 0;
			year = 0;

	}

		Student (string newfirstname, string newlastname, int newday, int newmonth, int newyear)
	{
			firstname = newfirstname;
			lastname = newlastname;
			day = newday;
			month = newmonth;
			year = newyear;
	}

		string firstname;
		string lastname;
		int day;
		int month;
		int year;

	};

int main() {



	int numberOfStudents;
	cin >> numberOfStudents;

	vector <Student> students;

	for (int i = 0; i < numberOfStudents; i++)
	{
		string firstname;
		string lastname;
		int day;
		int month;
		int year;

		cin >> firstname >> lastname >> day >> month >> year;

		students.push_back({firstname,lastname,day,month,year});
	}

	int requests;

	cin >> requests;

	for (int i = 0; i < requests; i++)
	{
		string newrequest;
		int newnumber;

		cin >> newrequest >> newnumber;

		if(newnumber <= 0 || newnumber > numberOfStudents)
		{
			cout << "bad request" << endl;
		}

		else if (newrequest == "name")
		{
			cout << students[newnumber-1].firstname << " " << students[newnumber-1].lastname << endl;
		}

		else if (newrequest == "date")
		{
			cout << students[newnumber-1].day << "." << students[newnumber-1].month << "." << students[newnumber-1].year << endl;
		}

		else
		{
			cout << "bad request" << endl;
		}
	}






	return 0;
}




