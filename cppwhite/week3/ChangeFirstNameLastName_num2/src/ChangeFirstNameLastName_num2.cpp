
#include <iostream>
using namespace std;
#include <map>
#include <vector>



class Person {
public:



	Person (const string & _firstname,const string & _lastname,const int _birthyear)
{

		birthyear = _birthyear;
		ChangeFirstName(_birthyear, _firstname);
		ChangeLastName(_birthyear, _lastname);
}




  void ChangeFirstName(int year, const string& first_name) {

	  if (year >= birthyear)
	  mfirst_name[year] = first_name;

    // добавить факт изменения имени на first_name в год year
  }
  void ChangeLastName(int year, const string& last_name) {
    // добавить факт изменения фамилии на last_name в год year

	  if (year >= birthyear)
	  mlast_name[year] = last_name;
  }

  string FindNameByYearWithHistory (map <int ,string> mname, int year) const
  {
	  string name;

	  string tempname;

	  int tempyear;

	  string history;


	  for (int i = year; i >= 0; i--) {
	    // если очередной год не больше данного, обновляем имя
	    if (mname[i].size())
	    	{
	      name = mname[i];
	      tempyear = i;
	      tempname = name;
	      break;
	    	}
	  }

	  for (int i = tempyear - 1; i >= 0; i --)
	  {
		  if ((mname[i].size()) && (tempname != mname[i]))
		  {

			  if (history.size())
			  {
				 history += ", ";
				 history += mname[i];
				 tempname = mname[i];
			  }
			  else
			  {
			  history += mname[i];
			  tempname = mname[i];
			  }
		  }
	  }

	  if (history.size())
	  {
		  name += " (";
		  name += history;
		  name += ")";
		  return name;
	  }
	  else
	  {
		  return name;
	  }

  }



  string GetFullName(int year) const
  	  {
    // получить имя и фамилию по состоянию на конец года year


	  if (year < birthyear)
	  {
		  return "No person";
	  }

	  string allname;

	  string tempname;

	  unsigned int count = 0;

	  for (const auto & item : mfirst_name)
	  {
		  if (item.first <= year)
		  {
		  allname = item.second;
		  }
	  }

	  if (allname.size())
		  count++;

	  for (const auto & item : mlast_name)
	  	  {
	  		  if (item.first <= year)
	  		  {
	  		  tempname = item.second;
	  		  }
	  	  }


	  	  if(tempname.size())
	  	  {
	  		  count +=2;
		  allname += " ";
		  allname += tempname;
	  	  }

	  if (count == 0)
	  {
		  allname = "Incognito";
	  }
	  else if (count == 1)
	  {
		  allname += " with unknown last name";
	  }
	  else if(count == 2)
	  {
		  allname += " with unknown first name";
	  }

	  return allname;
  }

  bool Incognito (map <int ,string> mname, int year) const
  {

	  for(int i = year; i >= 0; i--)
	  {
		  unsigned int msize = mname[i].size();
		  if(msize)
		  {
			  return false;
		  }
	  }
	  return true;
  }

  string GetFullNameWithHistory(int year) const
  {

	  if (year < birthyear)
	  {
	  return "No person";
	  }


	  string allname;

	  if (Incognito(mfirst_name,year) && Incognito(mlast_name,year))
	  {
		  allname = "Incognito";
	  }

	  else if (Incognito(mlast_name,year))
	  {
		  allname = FindNameByYearWithHistory(mfirst_name, year);
		  allname += " with unknown last name";
	  }

	  else if (Incognito(mfirst_name,year))
	  {
		  allname += FindNameByYearWithHistory(mlast_name, year);
		  allname += " with unknown first name";
	  }
	  else
	  {
		  allname += FindNameByYearWithHistory(mfirst_name, year);
		  allname += " ";
		  allname += FindNameByYearWithHistory(mlast_name, year);
	  }

	  return allname;

    // получить все имена и фамилии по состоянию на конец года year
  }

private:

  map <int ,string> mfirst_name;
  map <int ,string> mlast_name;
  int birthyear;



  // приватные поля
};

int main() {
  Person person("Polina", "Sergeeva", 1960);
  for (int year : {1959, 1960}) {
    cout << person.GetFullNameWithHistory(year) << endl;
  }

  person.ChangeFirstName(1965, "Appolinaria");
  person.ChangeLastName(1967, "Ivanova");
  for (int year : {1965, 1967}) {
    cout << person.GetFullNameWithHistory(year) << endl;
  }

  return 0;
}

