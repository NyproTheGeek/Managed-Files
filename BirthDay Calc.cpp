#include <stdio.h>
#include <time.h>
#include <iostream>
#include <limits>
using namespace std;

int main ()
{
	time_t now = time(0); // time(0) is a function from "time.h" and it returns the number of seconds elapsed since January 1, 1970.
	                      // and then the result of that is assigned to variable "now" which is of type "time_t"

	tm *locTime = localtime (&now); // tm is a "struct" from "time.h"
	                                // a struct is almost like a class, but it is not a class.
	                                // So, we create a pointer variable from the struct and we call that variable *locTime
		                            // And then we call function localtime() from "time.h", which we pass our earlier variable "now"
	                                // the function formats the content of "now" and returns a tm variable pointer which represent our current timezone
	                                // that is localtime formats the current time to Central West Africa timezone, 
	                                // finally the result is assigned to *locTime
	
	// tm_year, tm_mon,... are all members of struct "tm" and so we use it to access needed values of current time
	int currentYear = 1900 + locTime->tm_year; // because the time we get is relative to January 1, 1970, we need to add 1900 to it to get currentYear
	int currentMonth = 1 + locTime->tm_mon; // also we need to add 1 to the month because tm starts January to December from 0;
	int currentDay = locTime->tm_mday; // nothing much to do here
	
	int birthYear, birthMonth, birthDay; // this will be used to store user's birthYear, birthMonth, birthDay
		

	// this loop goes on forever because the condition is always true unless it is stopped by a break; statement
	// check the code, there is a break statement in it.
	// if there is no way of stopping the loop, then the loop will go on forever until we forcefully close the application
	while (true){ 
		cout << "\n|******* BIRTHDAY CALCULATOR *******| ";
		cout << "\nBirth Year:  "; 
		cin >> birthYear; 
		if (cin.fail () || birthYear < 1900 || birthYear > currentYear ){ // cin.fail() returns true if the failbit is set to 1 which means the inputted birthYear is not an integer; it also returns true if birthYear is lower than 1990 or greater than currentYear
			// if any of the above conditions is met, which means there is an invalid input
			cin.clear(); // failbit is currently true (1), this function resets the failbit back to false (0) // So that it can check for failure again
			cin.ignore (numeric_limits<streamsize>::max (), '\n'); // when the user enteed the values, those values are currently in the input stream, 
			                                                       // we need to clear those values from the stream, to allow other inputs.
			                                                       // we clear up the stream up to its maximum size
			cerr << "Invalid Input!"; // then finally we print the error message to the console, "cerr" is similar to "cout", except that it is meant for errors
			continue;; // we continue the loop by skipping to the next iteration
		}
		cout << "\nBirth Month:  ";
		cin >> birthMonth;
		if (cin.fail () || birthMonth < 1 || birthMonth > 12){// cin.fail() returns true if the failbit is set to 1 which means the inputted birthMonth is not an integer; it also returns true if birthMonth is lower than 1 or greater than 12
			cin.clear (); // failbit is currently true (1), this function resets the failbit back to false (0) // So that it can check for failure again
			cin.ignore (numeric_limits<streamsize>::max (), '\n'); // when the user enteed the values, those values are currently in the input stream, 
			                                                       // we need to clear those values from the stream, to allow other inputs.
			                                                       // we clear up the stream up to its maximum size
			cerr << "Invalid Input!"; // then finally we print the error message to the console, "cerr" is similar to "cout", except that it is meant for errors
			continue;; // we continue the loop by skipping to the next iteration
		}
		cout << "\nBirth Day:  ";
		cin >> birthDay;
		if (cin.fail () || birthDay < 1 || birthDay > 31){// cin.fail() returns true if the failbit is set to 1 which means the inputted birthDay is not an integer; it also returns true if birthDay is lower than 1 or greater than 31
			cin.clear (); // failbit is currently true (1), this function resets the failbit back to false (0) // So that it can check for failure again
			cin.ignore (numeric_limits<streamsize>::max (), '\n'); // when the user enteed the values, those values are currently in the input stream, 
			                                                       // we need to clear those values from the stream, to allow other inputs.
			                                                       // we clear up the stream up to its maximum size
			cerr << "\nInvalid Input!"; // then finally we print the error message to the console, "cerr" is similar to "cout", except that it is meant for errors
			continue; // we continue the loop by skipping to the next iteration
		}
		

		/* 
		 * I cannot explain the following section much cos it is not entirely straightforward
		 * and there is a lot of thinking that went into it
		*/
		// Estimating age
		if(currentMonth < birthMonth && currentDay < birthDay){ 
		// if currentMonth is lesser than birthMonth, then it means the user is about to be (currentYear - birthYear) years old
		// currentMonth have to equal birthMonth or be greater than it for him to be (currentYear - birthYear) years old.
		// For example, if currentYear is 2016 and user birthYear is 1990. The user is meant to be 26 years old.
		// however, if currentMonth (lets say June) is lesser than birthMonth (lets say October), then the user is not yet 26 years old.
		// he is about to become 26 years old. So he is still ((currentYear - birthYear) - 1) 25 years old with some months and days added.
		// Also if currentDay is lesser than birthDay, then the user hasn't reached his birhtDay and is still a few days behind.
		// For example, if a user was born in December 20, 1996. If current date is December 5, 2016, then he is still days behind, before 
		// he can be (currentYear - birthYear) years old.
		// This is where I will stop it for today.
			cout << "\nYou are " << (currentYear - birthYear) - 1 << " years, "
			          << ((12 - birthMonth) + currentMonth) - 1 << " months and "
			          << (30 - birthDay) + currentDay << " days old." << endl; 
		}
		else if (currentMonth < birthMonth && currentDay >= birthDay){
			cout << "\nYou are " << (currentYear - birthYear) - 1 << " years, "
			          << (12 - birthMonth) + currentMonth << " months and "
			          << currentDay - birthDay << " days old." << endl; 
		}
		else if (currentMonth >= birthMonth && currentDay < birthDay){
			cout << "\nYou are " << currentYear - birthYear << " years, "
			          << (currentMonth - birthMonth) - 1 << " months and "
			          << (30 - birthDay) + currentDay << " days old." << endl; 
		}
		else if (currentMonth >= birthMonth && currentDay >= birthDay){
			cout << "\nYou are " << currentYear - birthYear << " years, "
			          << currentMonth - birthMonth << " months and "
			          << currentDay - birthDay << " days old." << endl; 
		}
		
		
		// Estimating time to next birthday
		if(currentMonth <= birthMonth && currentDay <= birthDay){
			cout << "\nYour birthday is in " << birthMonth - currentMonth
			          << " months and " << birthDay - currentDay << " days." << endl; 
		}
		else if (currentMonth <= birthMonth && currentDay > birthDay){
			cout << "\nYour birthday is in " << (birthMonth - currentMonth) - 1
			          << " months and " << (30 - currentDay) + birthDay << " days." << endl; 
		}
		else if (currentMonth > birthMonth && currentDay <= birthDay){
			cout << "\nYour birthday is in " << (12 - currentMonth) + birthMonth
			          << " months and " << birthDay - currentDay << " days." << endl; 
		}
		else if (currentMonth > birthMonth && currentDay > birthDay){
			cout << "\nYour birthday is in " << ((12 - currentMonth) + birthMonth) - 1
			          << " months and " << (30 - currentDay) + birthDay << " days." << endl; 
		}
		
		int progress;
		cout << "\nPlease enter (1) to continue; Enter (0) to stop: "; 
		cin >> progress;
		if(progress == 0){
			break; // if progress is 0, then the loop stops
		}
		
	}
	
	cout << "\n|******* THANKS! *******| " << endl;
	
	return 0;
}