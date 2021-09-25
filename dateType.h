
#ifndef date_H
#define date_H 
  
class dateType
{
public:

// ------------------ Extra ---------

     //I added the variable below and its accessor to display whether a date is valid or not
     bool isDateValid; // stores boolean variable that tells us if the data entered by a user is valid
	 
	 //if it returns false, it means that the data entered to the program is invalid
	 void setIsDateValid(bool param);

// ----------------------------------
	 
	 
	

    void setDate(int month, int day, int year);
      //Function to set the date.
      //The member variables dMonth, dDay, and dYear are set 
      //according to the parameters
      //Postcondition: dMonth = month; dDay = day;
      //               dYear = year 

    int getDay() const;
      //Function to return the day.
	  //Postcondition: The value of dDay is returned.

    int getMonth() const;
      //Function to return the month.  
	  //Postcondition: The value of dMonth is returned.

    int getYear() const;
      //Function to return the year.     
	  //Postcondition: The value of dYear is returned.

    void printDate() const;
      //Function to output the date in the form mm-dd-yyyy.

    dateType(int month = 1, int day = 1, int year = 1900);
      //Constructor to set the date
      //The member variables dMonth, dDay, and dYear are set 
      //according to the parameters
      //Postcondition: dMonth = month; dDay = day; 
      //               dYear = year
      //If no values are specified, the default values are 
      //used to initialize the member variables.

	bool isLeapYear() const;
     //if the year is a leap year, the function will return true, otherwise, it will return false
     //it does not change any values 
   
 
private:
    int dMonth;      //variable to store the month
    int dDay;        //variable to store the day
    int dYear;       //variable to store the year
};

#endif