#include <iostream>
using namespace std;

int FindMin(int A[], int i, int n) // Function to find the minimum value in an array
{
	int min=i;
	for (int j=i+1;j<n;j++) //loop to find the minimum element
	{
		if (A[min]>A[j])
		{
			min=j; //the minimum element checked so far
		}
		
	}
	return min; // the minimum of the whole checked array
}

void SelectionSort(int A[],int n)
{
	int i,j;
	for (i=0;i<n;i++)
	{
		j= FindMin(A,i,n); //finds the min value after A[i]
		swap (A[i],A[j]); //swaps with min value
	}
}

int swap(int &a, int &b)
{

	int temp=a;
	a=b;
	b=temp;
}

int main ()
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
	SelectionSort(A,size);// calling Selection Sort function
	cout<<"The selection sorted array in increasing order is "<<endl;
	for (i=0;i<size;i++)
	{
		cout<<A[i]<<" ";
	}
	return 0;

}


