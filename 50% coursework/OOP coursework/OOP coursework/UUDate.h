//Author: james campbell//
//start date: 25/10/2018//
//name: COM 325 assignment//
//"UUDate.h"//
#pragma once

#include <string>
//You can include addition non-date/time related headers

class UUDate
{

private:
	//Date data
	int day_;
	int month_;
	int year_;

public:
	UUDate(); //Default constructor sets date to 1/1/2000
	
	//Non default constructors - remeber to validate input
	UUDate(int day, int month, int year);

	UUDate(std::string date); //Should accept "2/8/2018" or "02/08/2018

	int Between(UUDate date); //Return # days between object and date
	std::string GetDate(); //Return date as a string in correct format

	//Getters and Setters, remember to validate input to setters
	void SetDay(int day);
	int GetDay() const;
	void SetMonth(int month);
	int GetMonth() const;
	void SetYear(int year);
	int GetYear() const;

	void IncrementDate();//Increment the current date by one day

};