#include <iostream>
using namespace std;
//void BubbleSort(int A[]);
//int swap (int,int);

int A[50],i,j,n,a,b,t;

void BubbleSort(int A[ ], int n)
{
//	int i,j,n;
	for (i=0;i<n;i++)
	{
		for (j=0;j<n-i-1;j++)
		{
			if (A[j]>A[j+1])
			{
				swap (A[j],A[j+1]);
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
	BubbleSort(A,n);
	cout<<"The bubble sorted array in increasing order is "<<endl;
	for (i=0;i<n;i++)
	{
		cout<<A[i]<<" ";
	}
	return 0;
}


