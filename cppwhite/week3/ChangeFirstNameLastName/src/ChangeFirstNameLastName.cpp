//============================================================================
// Name        : ChangeFirstNameLastName.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <map>
#include <vector>



class Person {
public:


  void ChangeFirstName(int year, const string& first_name) {

	  mfirst_name[year] = first_name;

    // добавить факт изменения имени на first_name в год year
  }
  void ChangeLastName(int year, const string& last_name) {
    // добавить факт изменения фамилии на last_name в год year

	  mlast_name[year] = last_name;

  }
  string GetFullName(int year) {
    // получить имя и фамилию по состоянию на конец года year

	  string allname;

	  unsigned int count = 0;

	  for(int i = year; i > 0; i--)
	  {
		  unsigned int msize = mfirst_name[i].size();
		  if(msize)
		  {
			  allname += mfirst_name[i];
			  count ++;
			  break;
		  }
	  }

	  for(int i = year; i > 0; i--)
	  {
		  unsigned int msize = mlast_name[i].size();
		  if(msize)
		  {
			  if(count == 1)
			  {
				  allname += " ";
			  }
			   allname += mlast_name[i];
		  	   count += 2;
		  	   break;
		  }
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
private:

  map <int ,string> mfirst_name;
  map <int ,string> mlast_name;



  // приватные поля
};

