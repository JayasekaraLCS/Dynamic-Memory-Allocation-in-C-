/* question 02-
1st part-  Write C++ statements to initialize the 10 double values in the dynamically allocated 
array to 1.0. Now write C++ statements to de-allocate the memory (i.e. using the delete operator) pointed by d_var and d_array:

2nd part- Write C++ statements to input a value for d_var (i.e., a value that d_var points to) from the 
console and then display it: 

*/

#include<iostream>
using namespace std;
int main(void){
	double *d_array = new double[10];
	while(true){
		for(int x=0;x<=9;x++){
		cout<<"Enter the "<<x+1<<" value: ";
		cin>>d_array[x];
    	}
	
	    cout<<"\n"; // creating a new line after print the output
	
    	for(int x=0;x<=9;x++){
		cout<<x+1<<" value is: "<<d_array[x]<<"\n";
    	}
    	cout<<"\n";	
	}
	delete [] d_array; // use this after the itteration part.
	
	
}
