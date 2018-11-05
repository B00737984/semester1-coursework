//Author: james campbell//
//start date: 25/10/2018//
//name: COM 325 assignment//
//"UUDate.cpp"//

#include "UUDate.h"
#include <string>

UUDate::UUDate() {
	//Initialise the date to 01/01/2000
	day_ = 1;
	month_ = 1;
	year_ = 2000;
	std::string date = day_ << "/" << month_ << "/" << year_;
	//TODO - Add your implementation here
}

UUDate::UUDate(int day, int month, int year) 
	//TODO - Add your implementation here
	:day_{ day }, month_{ month }, year_{ year } {
	

	
}

UUDate::UUDate(std::string date) {
	//TODO - Add your implementation here
}

void UUDate::IncrementDate() {
	//TODO - Add your implementation here
}

int UUDate::Between(UUDate date) {
	//TODO - Add your implementation here
}

void UUDate::SetDay(int day) {
	day_ = day;
	//TODO - Add your implementation here
}

int UUDate::GetDay() const {
	//TODO - Add your implementation here
	return day_;
}

void UUDate::SetMonth(int month) {
	month_ = month;
	//TODO - Add your implementation here
}

int UUDate::GetMonth() const {
	//TODO - Add your implementation here
	return month_
}

void UUDate::SetYear(int year) {
	year_ = year;
	//TODO - Add your implementation here
}

int UUDate::GetYear() const {
	//TODO - Add your implementation here
	return year_;
}


std::string UUDate::GetDate() {
	//TODO - Add your implementation here
}