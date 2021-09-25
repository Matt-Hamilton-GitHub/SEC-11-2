

//                                            ********* Writer: Matt Hamilton      *********
 //                                             ******** Class: CS 136             ******** 
 //                                              ******* Professor: Brian Dauzat   *******
 //                                                ***** Programming Exercise 11-2 *****
 //                                                 **** ========================= ****
 //                                                   **  *** *** *** *** *** *** **


#include <iostream>
#include "dateType.h"

using namespace std;

void testIt(int m, int d, int y){
	
	
	dateType myDate{m,d,y};
//	      	OR
	
//	dateType myDate;
//	myDate.setDate(m, d, y);
	
	if(myDate.isDateValid){
	    if(myDate.isLeapYear()){
			myDate.printDate();
			cout << "  is a leap year \n";
		}else{
			cout << myDate.getMonth() << "-" << myDate.getDay() <<"-" << myDate.getYear() << "  is NOT a leap year \n";
		}
		
		
    }else{
	cout << "---------------------------------------------------------------------------------------\n";
	cout << " " << m << "-" << d << "-" << y << endl;
	cout << "--------------------\n";
    cout << " The Date You Entered is Not Valid. Please Check Your Date and Try Again \n";
	cout << " NOTICE: Every year has a maximum of 12 months and the number of days can not be more than 31 \n" ;
	cout << " Also, February has a maximum of 29 days and April has a maximum of 30 days \n" ;
	cout << "---------------------------------------------------------------------------------------\n";
		}
		

	
}


  int main() {
    
	  int day {0};
	  int month{0};
	  int year{0};

      cout << "Format: month-day-year \n";
	  cout << "---------------------\n\n\n";

	  cout << "Date #: ";
	  cin >> month;
      cin.get();
	  cin >> day;
      cin.get();
      cin >> year;
	  
	  testIt(month, day, year);
	  
	  
	  
	  //Test it with default dates
	  
	  char input;
	  cout << "Test the program with default dates ? Y/N " ;
	  cin >> input;
	  
	  
	  if(input == 'Y' || input == 'y'){
	  cout << "\n\n--------------Test START----------------\n\n";
	  
	   testIt(04, 31, 2021); // ERROR, FEBRUARY HAS A MAX OF 29 DAYS NOT 30-31
	   testIt(02, 31, 2021); // ERROR, FABRUARY HAS MAX OF 29 DAYS NOT 30-31
	  
	  
	  for(int i{2060}; i >= 1900; i--){
		   testIt(04, 13, i);
	  }
	  
	   cout << "--------------Test END----------------\n\n";
	  }else{
		  cout << "Thank You" << endl;
	  }
	  
	system("pause");
	return 0;
	};





