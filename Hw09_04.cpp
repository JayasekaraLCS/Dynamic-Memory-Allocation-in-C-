// JAYASEKARA LCS   IM/2019/043  
/*question 03-Write a program in C to find the largest element using Dynamic Memory Allocation 
Test Data :  
Input total number of elements(1 to 100): 5  
Number 1: 5  
Number 2: 7  
Number 3: 2  
Number 4: 9  
Number 5: 8 
Expected Output : 
The Largest element is :  9.00 
*/
 
#include<iostream>
using namespace std;
int main(void){
	
	int elements;
	cout<<"How many number of elements you want: ";
	cin>>elements;
	
	int *number = new int[elements];
	int max;
	
	for(int x=0;x<=elements-1;x++){
		cout<<"Enter the "<<x+1<<" number: ";
		cin>>number[x];
		
		if(max<number[x]){
			max=number[x];
		}
	}
	
	cout<<"\nLargest element is: "<<max;
	
	
	
	
	
	
}
