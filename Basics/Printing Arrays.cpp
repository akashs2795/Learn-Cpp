#include<iostream>
using namespace std;

void printIterative(int A[], int n)
{
	int i;
	cout<<" The array is "<<endl;
	for (i=0; i<n; i++)
	{
		cout<<A[i]<<" ";
	}
}

void printRecursive(int A[], int n, int i)
{
	if (i==n)
	{
		return;
	}
	else
	{
		cout<<A[i]<<" "; 
		return printRecursive(A, n, i+1);
		

	}
}

void printReverseIterative(int A[],int size)
{
	for (int i=size-1; i>=0; i--)
	{
		cout<<A[i]<<" ";
	}
}

void printReverseRecursive(int A[], int n)
{
	if (n==0)
	{
		return;
	}
	else
	{
		cout<<A[n-1]<<" ";
		return printReverseRecursive(A,n-1);
	}
}

int main()
{
	int size, i=0, option;
	cout<<"Enter the size of the array"<<endl;
	cin>>size;
	int* A=new int [size];
	cout<<"Enter the elements of the array"<<endl;
	for(i=0;i<size;i++)
	{
		cin>>A[i];
	}
	i=0;
	cout<<"If you want to print using iterative method, press 1. If you want to print recursively, press 2. To print the reverse array iteratively, press 3. To print the reverse array recursively, press 4"<<endl;
	cin>>option;
	switch (option)
	{
		case 1: printIterative(A,size); break;
		case 2: cout<<" The array is "<<endl;
			printRecursive(A,size,i); break;
		case 3: cout<<" The array is "<<endl;
			printReverseIterative(A,size); break;
		case 4: cout<<" The array is "<<endl;
			printReverseRecursive(A,size); break;

	}
	
}
