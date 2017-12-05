#include <iostream>
using namespace std;
//int SelectionSort(int A[]);
//int swap (int,int);

int A[50],i,j,n,a,b,t;

int SelectionSort(int A[],n)
{
	cout<<"fudge";
	for (i=0;i<n;i++)
		{
			for (j=i+1;j<n;j++)
			{
				if (A[i]>A[j])
					swap(A[i],A[j]);
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

int main ()
{
	cout<<"Enter the number of elements (less than 50)"<<endl;
	cin>>n;
	cout<<"Enter the elements"<<endl;
	for (i=0;i<n;i++)
	{
		cin>>A[i];
	}
	cout<<"f";
	SelectionSort(A[n],n);
	cout<<"fu";
	cout<<"The selection sorted array in increasing order is "<<endl;
	for (i=0;i<n;i++)
	{
		cout<<A[i]<<" ";
	}
	return 0;

}



