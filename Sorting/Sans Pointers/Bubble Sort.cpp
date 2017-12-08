#include <iostream>
using namespace std;


void BubbleSort(int A[ ], int n)
{
    int i,j;
	for (i=0;i<n;i++) //counts the number of passes. i is the number of sorted elements.
	{
		for (j=0;j<n-i-1;j++) //for swapping 
		{
			if (A[j]>A[j+1]) //checks the element and its adjacent to swap
			{
				swap (A[j],A[j+1]);
			}
		}
	}
}

int swap(int &a, int &b) // swapping two elements using call by reference and a temporary variable
{
	int temp;
	temp=a;
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
	for (i=0;i<size;i++) //taking the array as input
	{
		cin>>A[i];
	}
	BubbleSort(A,size); // calling the BubbleSort function
	cout<<"The bubble sorted array in increasing order is "<<endl;
	for (i=0;i<size;i++) // printing the sorted array
	{
		cout<<A[i]<<" ";
	}
	return 0;
}


