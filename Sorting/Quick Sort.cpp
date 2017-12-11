#include <iostream>
using namespace std;

void SwapRef(int &a, int &b) //to swap using call by reference
{
   int temp = a; 
   a = b;    
   b = temp;  
}

void print(int A[],int n) //to print the array
{
	cout<<"The array is ";
	for (int i=0;i<n;i++)
	{
		cout<<A[i]<<" ";
	}
	cout<<endl;
}

int partitionEnd(int A[], int start, int end)
{
	int pivot =A[end]; 
	int pIndex=start;
	for (int i=start;i<end; i++) //to check each value with respect to pivot
	{
		if(A[i]<=pivot) //if a value is less than pivot, swap it with the pIndex element. 
		{
			swap (A[i], A[pIndex]);
			pIndex++;
		}						//now the array has values less than pivot till pIndex element
	}
	swap (A[pIndex],A[end]);  //putting the pivot element in place
	return pIndex;
}

int partitionStart(int A[], int start, int end)
{
	int pivot =A[start];
	int pIndex=start+1;
	for (int i=start+1;i<=end; i++)
	{
		if(A[i]<=pivot)
		{
			swap (A[i], A[pIndex]);
			pIndex++;
		}
	}
	swap (A[pIndex-1],A[start]);
	return pIndex;
}

quickSort(int A[], int start, int end)
{
	if (start<end)
	{
		int pInd=partitionEnd(A,start,end); //getting the index of pivot element
		quickSort(A,start, pInd-1); //sorting array before pivot	
		quickSort(A, pInd+1, end);	//sorting array after pivot	
	}
}

int main()
{
	int i,size;
	cout<<"Enter the number of elements"<<endl;
	cin>>size;
	int A[size]; // initializing a dynamic array of size 'size'
	cout<<"Enter the elements"<<endl;
	for (i=0;i<size;i++) //taking the array as input
	{
		cin>>A[i];
	}
	print(A,size);
	quickSort(A,0,size-1); cout<<"yo";
	print(A,size);
}
