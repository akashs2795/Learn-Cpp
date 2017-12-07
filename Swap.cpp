#include<iostream>
using namespace std;

void SwapRef(int &a, int &b) 
{
   int temp;
   temp = a; 
   a = b;    
   b = temp; 
     
   return;
}

void SwapPoint(int *a, int *b)
{

   int temp;
   temp = *a;   
   *a = *b;     
   *b = temp;   
  
   return;
}

int Func (int A[],int n)
{
	int i;
	for (i=0;i<n;i++)
	 cout<<*(A+i)<<" ";
	
}


int main ()
{
	int a, b, o, A[20],n,i;
	cout<<"enter the number of elements"<<endl;
	cin>>n;
	cout<<"Enter the numbers"<<endl;
	for (i=0;i<n;i++)
	  cin>>A[i];
	cout<<"Enter the numbers to swap"<<endl;
	cin>>a>>b;
	cout<<"If you want to swap using call by reference, press 1. If you want to use pointers, press 2. To print the array, press 3"<<endl;
	cin>>o;
	switch (o)
	{
		case 1: SwapRef(a, b); cout<<"switched";break;
		case 2: SwapPoint(&a, &b); cout<<"switched"<<endl;break;
		case 3: Func(A,n);break;

	}
}


