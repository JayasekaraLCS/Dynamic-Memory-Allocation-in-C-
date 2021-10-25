// JAYASEKARA LCS  IM/2019/043  

/* question- A user-defined structure named Timer has two integer parameters to initialize hour and 
minute members. Write a single C++ statement to create an object of the Timer structure 
using dynamic memory allocation and assign it to a pointer variable named timePtr. Assign 
values of 10 and 20 for hour and minute respectively. 
*/

#include<iostream>
using namespace std;

struct Timer{  // create a structure called as Timer;
	int hour;
	int minutes;
};


int main(void){
	Timer *timeptr = new Timer(); // create a pointer variable as *timeptr;
	
	(*timeptr).hour=10;
	(*timeptr).minutes=20;
	
	cout<<"hour:    "<<(*timeptr).hour<<"\n";
	cout<<"minutes: "<<(*timeptr).minutes<<"\n";
	
	
}
