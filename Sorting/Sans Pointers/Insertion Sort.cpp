#include <iostream>
using namespace std;

void Print(int A[],int n) // function to print the array
{
	cout<<"The array is ";
	for (int i=0;i<n;i++)
	{
		cout<<A[i]<<" ";
	}
	cout<<endl;
}

void InsertionSort(int A[ ], int n) 
{
	int i,j, value, hole;
	for (i=1;i<n;i++)
	{
		value=A[i]; //creating variables to have the value of A[i] and i
		hole=i;
		while ((hole>0) && (A[hole-1]>value)) //checking if there is an element of greater value
		{
			A[hole]=A[hole-1]; //if so, shift the greater element to the hole
			hole--; //check the next element
		}
		A[hole]=value; //fil the hole element
		cout<<A[hole]<<endl;
		
	}
}

int swap(int &a, int &b)
{
	int temp=a;
	a=b;
	b=temp;
}

int main()
{
	int i,size;
	cout<<"Enter the number of elements"<<endl;
	cin>>size;
	int *A = new int[size]; // initializing a dynamic array of size 'size'
	cout<<"Enter the elements"<<endl;
	for (i=0;i<size;i++)
	{
		cin>>A[i];
	}
	InsertionSort(A,size); //calling the sorting function
	cout<<"The insertion sorted array in increasing order is "<<endl;
    Print(A,n);
}