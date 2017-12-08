#include<iostream>
using namespace std;

void SwapRef(int &a, int &b) //to swap using call by reference
{
   int temp = a; 
   a = b;    
   b = temp;  
}

void SwapPoint(int *a, int *b) //to swap using pointters
{
   int temp = *a;   
   *a = *b;     
   *b = temp;   
}

void Print(int A[],int n) //to print the array
{
	cout<<"The array is ";
	for (int i=0;i<n;i++)
	{
		cout<<A[i]<<" ";
	}
	cout<<endl;
}

int SwapWithArray (int A[],int index1, int index2) //to swap indices of an array by passing it in the function
{
	int temp;   
	temp=*(A+index1);
	*(A+index1)=*(A+index2);
	*(A+index2)=temp;
}


int main ()
{
	int index1, index2, option, size, i;	
	cout<<"Enter the number of elements"<<endl;
	cin>>size;
	int *A = new int[size];
	cout<<"Enter the elements"<<endl;
	for (i=0;i<size;i++)
	  cin>>A[i];
	cout<<"Enter the indices to swap"<<endl;
	cin>>index1>>index2;
	cout<<"If you want to swap using call by reference, press 1. If you want to use pointers, press 2. To swap by passing the array in the function, press 3"<<endl;
	cin>>option;
	switch (option)
	{
		case 1: Print (A, size);
			SwapRef(index1, index2); 
			Print (A, size);
			break;
		case 2: Print (A, size);
			SwapPoint(&index1, &index2); 
			Print (A, size);
			break;
		case 3: Print (A, size);
			SwapWithArray(A,index1,index2);
			Print (A, size);
			break;

	}
}


