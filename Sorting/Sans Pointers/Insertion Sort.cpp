#include <iostream>
using namespace std;

int A[50],i,j,n,a,b,t;

void InsertionSort(int A[ ], int n)
{
//	int i,j,n;
	for (i=0;i<n;i++)
	{
		for (j=i+1;j<n;j++)
		{
			if (A[i]>A[j])
			{
				swap (A[j],A[i]);
			}
		}
	}
}

int swap(int a, int b)
{
	//int a,b,t;
	t=a;
	a=b;
	b=t;
}

int main()
{
	int A[50],i,j,n;
	cout<<"Enter the number of elements (less than 50)"<<endl;
	cin>>n;
	cout<<"Enter the elements"<<endl;
	for (i=0;i<n;i++)
	{
		cin>>A[i];
	}
	InsertionSort(A,n);
	cout<<"The insertion sorted array in increasing order is "<<endl;
	for (i=0;i<n;i++)
	{
		cout<<A[i]<<" ";
	}
	return 0;
}


