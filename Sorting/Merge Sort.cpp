#include <iostream>
using namespace std;

void merge(int A[], int m, int l, int r)
{
	int i, j, k;
    int n1 = m+1-l; // (m+1) -l
    int n2 =  r-m; //r+1 -m+1
 
    int L[n1], R[n2]; //creating two temporary variables to store the subarrays
 
    for (i=0; i<n1; i++) //copying elements to left array
        L[i]=A[l+i];
    for (j=0; j<n2; j++) //copying elements to right array
        R[j]=A[m+1+j];
 
    i = 0; j = 0; // setting values to merge the subarrays back to the arrays
    k = l;
    
    while ((i<n1) && (j<n2)) //merging from both subarrays
    {
        if (L[i]<=R[j])
        {
            A[k]=L[i];
            i++;
        }
        else
        {
            A[k]=R[j];
            j++;
        }
        k++;
    }
    
    //copying, if any, from an array    
    while (i<n1)
    {
        A[k] = L[i];
        i++;
        k++;
    }
    
    while (j<n2)
    {
        A[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l<r)
    {
 		int m= ((l+r)/2); //middle value m
 		
        mergeSort(arr, l, m); //sorting left array
        mergeSort(arr, m+1, r); //sorting right array
        merge(arr, m, l, r); //merging both
    }
    
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

int main()
{
	int size;
	cout<<"Enter the size of the array"<<endl;
	cin>>size;
	int A[size];
	cout<<"Enter the elements of the array"<<endl;
	for (int i=0;i<size; i++)
	{
		cin>>A[i];
	}
	
	print (A,size);
	mergeSort(A,0,size-1);
	print (A,size);
	
	return 0;

	
}
