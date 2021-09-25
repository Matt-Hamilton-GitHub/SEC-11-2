
  
#include <iostream>
#include "dateType.h"

using namespace std;
 
 void dateType::setIsDateValid(bool param){
	 isDateValid = param;
 } 
  
  
 
void dateType::setDate(int month, int day, int year)
{
	

  if (month <= 12 && month > 0 && day <= 31 && day > 0 && year > 0){
	  //first test where we check if the month, day, and year are valid 

    if(month == 4 && day > 30){
		// April always has maximum of 30 days 
		setIsDateValid(false);
	}
	else if(month == 2 && day > 29){
		//the program checks if February has less than 29 days 
		//if it is more than 29, it means that the data is NOT valid
		setIsDateValid(false);
	}else{
		
		//If the data passes all the validations, it means it is valid and we can store it
		//	if the date is valid we store the date into the member variables and set data to be valid
      dMonth = month;
      dDay = day;
      dYear = year;
	
      setIsDateValid(true); 
		}

	}else{
		setIsDateValid(false);
	}
	
		
	
}

int dateType::getDay() const 
{ 
    return dDay;
}

int dateType::getMonth() const 
{
    return dMonth;
}

int dateType::getYear() const 
{
    return dYear;
}

void dateType::printDate() const
{
    cout << dMonth << "-" << dDay << "-" <<dYear;
}

bool dateType::isLeapYear() const {
	
//----------------------------------------------------------------------------
//	To determine whether a year is a leap year, we follow these steps:
//
//1.If the year is evenly divisible by 4, go to step 2. Otherwise, go to step 5.
//2.If the year is evenly divisible by 100, go to step 3. Otherwise, go to step 4.
//3.If the year is evenly divisible by 400, go to step 4. Otherwise, go to step 5.
//4.The year is a leap year (it has 366 days).
//5.The year is not a leap year (it has 365 days).
//----------------------------------------------------------------------------	
	
//Thus, If we test our program for 20th century, every year that can be divisible by 4,
//is a leap year + 1900, because it divides by 100 (Examples: 1900,1904,1908,1940,1960,1964,1988,... ect.)
//Not leap years are years that cannot be divided by 4, 100, or 400 (Examples:1901,1913,1957,1987,1999,... ect)
	
	
   if((dYear % 4 == 0) && (dYear % 100 != 0)){
	   return true;
   }else if((dYear % 4 == 0) && (dYear % 100 == 0) && (dYear % 400 == 0)){
	   return true;
}

	return false;
}


	//constructor with parameter
dateType::dateType(int month, int day, int year) 
{ 
	
  if (month <= 12 && month > 0 && day <= 31 && day > 0 && year > 0){
	  //first test where we check if the month, day, and year are valid 

    if(month == 4 && day > 30){
		// April always has maximum of 30 days 
		setIsDateValid(false);
	}
	else if(month == 2 && day > 29){
		//the program checks if February has less than 29 days 
		//if it is more than 29, it means that the data is NOT valid
		setIsDateValid(false);
	}else{
		
		//If the data passes all the validations, it means it is valid and we can store it
		//	if the date is valid we store the data into the member variables and set data to be valid
      dMonth = month;
      dDay = day;
      dYear = year;
	
      setIsDateValid(true); 
		}

	}else{
		setIsDateValid(false);
	}
}
