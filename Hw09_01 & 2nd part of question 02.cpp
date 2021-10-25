/*question 01,

1st part- Declare two (type double) pointer variables named d_var and d_array. Write C++ 
statements to dynamically create a double-precision floating-point variable and store its 
address in d_var. Also dynamically create an array of 10 double-precision floating-point 
values and store its address in d_array: 
2nd part- Write C++ statements to input a value for d_var (i.e., a value that d_var points to) from the 
console and then display it:

double *d_var, *d_array;

d_var= new double;
d_array= new double[10];

*/

// question 02;
#include<iostream>
using namespace std;
int main(void){
	double *d_var = new double; // only one memory location allocated
	while(true){
		cout<<"Enter a value: ";
	    cin>> *d_var;
    	cout<<"Entered value is: "<<*d_var;	
    	cout<<"\n";
	}
	delete d_var;

	// make sure to analize that, what is the distingush between create an array using with dynamic memory locations and this question
	 
} 


