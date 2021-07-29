//============================================================================
// Name        : firstExam.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// –еализуйте функции и методы классов и при необходимости добавьте свои

#include <iostream>
#include <exception>
using namespace std;
#include <map>
#include <set>
#include <sstream>
#include <iomanip>

class Date {
public:

	Date (int newYear, int newMonth, int newDay)
{
		if (newMonth < 1 || newMonth > 12)
		{
		throw out_of_range ("Month value is invalid: " + to_string(newMonth));
		} else if (newDay < 1 || newDay > 31)
		{
		throw out_of_range ("Day value is invalid: " + to_string(newDay));
		}

	Year = newYear;
	Month = newMonth;
	Day = newDay;
}

  int GetYear() const
  {
	  return Year;
  }
  int GetMonth() const
  {
	  return Month;
  }
  int GetDay() const
  {
	  return Day;
  }

private:
  int Year;
  int Month;
  int Day;
};

bool operator<(const Date& lhs, const Date& rhs)
{
	if ((lhs.GetYear() == rhs.GetYear()) && (lhs.GetMonth() == rhs.GetMonth()))
	{
		return lhs.GetDay() < rhs.GetDay();
	}
	else if (lhs.GetYear() == rhs.GetYear())
	{
		return lhs.GetMonth() < rhs.GetMonth();
	}
	else
		return lhs.GetYear() < rhs.GetYear();
}

ostream& operator << (ostream & stream, const Date & date)
{
		stream << setfill('0') << setw(4);
		stream << to_string(date.GetYear());
	    stream << "-";

	    stream << setfill('0') << setw(2);
	    stream << to_string(date.GetMonth());
	    stream << "-";

	    stream << setfill('0') << setw(2);
	    stream << to_string(date.GetDay());

	    return stream;
}

Date Parse (string & date)
{


	    istringstream stream(date);
	    bool flagIsValidDate = true;

	    int Year;
	    flagIsValidDate = flagIsValidDate && (stream >> Year);
	    flagIsValidDate = flagIsValidDate && (stream.peek() == '-');
	    stream.ignore(1);

	    int Month;
	    flagIsValidDate = flagIsValidDate && (stream >> Month);
	    flagIsValidDate = flagIsValidDate && (stream.peek() == '-');
	    stream.ignore(1);

	    int Day;
	    flagIsValidDate = flagIsValidDate && (stream >> Day);
	    flagIsValidDate = flagIsValidDate && stream.eof();

	    if (!flagIsValidDate)
	    throw logic_error("Wrong date format: " + date);

	    return Date(Year, Month, Day);
}



class Database {
public:
  void AddEvent(const Date& date, const string& event)
  {
	  m[date].insert(event);
  }
  bool DeleteEvent(const Date& date, const string& event)
  {



	  int size = m[date].size();
	  if(size)
	  {
		  if(m[date].erase(event))
		  return true;
		  else
	      return false;
	  }
	  return false;
  }
  int  DeleteDate(const Date& date)
  {
	  int i = 0;
	  if (m.count(date) > 0)
	     {
	        i = m.at(date).size();
	        m.erase(date);
	     }
	  return i;
  }

  set <string> Find(const Date& date) const
  {
	  set<string> s;
	        if (m.count(date) > 0)
	        {
	            s = m.at(date);
	        }
	        return s;
  }

  void Print() const
  {
	  for (const auto & s : m)
	  {
		  for (auto a : s.second)
		  {
			  cout << s.first << " " << a << endl;
		  }
	  }
  }

private:

  map <Date, set<string>> m;

};

int main() {

	try
	{

  Database db;

  string command;
  while (getline(cin, command)) {
    // —читайте команды с потока ввода и обработайте каждую

	  if(command == "") continue;

	  stringstream input(command);

	  string request;
	  input >> request;

	  if (request == "Add")
	  {
		  string date;
		  input >> date;

		  string event;
		  input >> event;

		  db.AddEvent(Parse(date), event);
	  }

	  else if(request == "Del")
	  {
		  string date;
		  input >> date;

			if(input.eof())
			{
				const int count = db.DeleteDate(Parse(date));
				cout << "Deleted " << count << " events" << endl;


			}
			else
			{
				string event;
				input >> event;

				if(db.DeleteEvent(Parse(date), event))
				cout << "Deleted successfully" << endl;
				else
				cout << "Event not found" << endl;


			}

	  }
	  else if(request == "Find")
	  {
		  string date;
		  input >> date;

		  set <string> events = db.Find(Parse(date));

		  if (events.size() > 0)
		  {
		  for (const auto & s : events)
		  {
			  cout << s << endl;
		  }
		  }
	  }
	  else if(request == "Print")
	  {
		  db.Print();
	  }
	  else
	  {
		  cout << "Unknown command: " << request << endl;
	  }

  }
  }
  catch (exception& e)
     {
         cout << e.what() << endl;
     }

  return 0;
}
