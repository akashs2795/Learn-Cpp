#include<iostream>
using namespace std;

int fibonacciRecursive (int n)
{
		if ( n == 0 )
         return 0;
        else if ( n == 1 )
         return 1;
        else
         {
		 	return ( fibonacciRecursive(n-1) + fibonacciRecursive(n-2) );
		 }



}

int fibonacciIterative(int n)
{
	int a , b , i , c ;
	i = 2 ;
	a = 0 ; 
	b = 1 ;
	if(n==1) //n=1 and n=2 are given cases
	{
		cout<<a;
	}
	else if(n==2)
	{
		cout<<a<<" "<<b;
	}
	else 
	{
		cout<<a<<" "<<b<<" ";
		while(i<=(n-1) && i>0) 
		{
			c = a+b ; 
			cout<<c<<" ";
			a = b ; //shifting the values to find the next element
			b = c ; 
			i++ ; 
		}		
	}
}

int main()
{
	int n,option, element;
	cout<<"Enter the number of elements"<<endl;
	cin>>n;
	cout<<"If you want to print Fibonacci series using iterative method, press 1. If you want to print recursively, press 2."<<endl;
	cin>>option;
	switch (option)
	{
		case 1: cout<<"The series for "<<n<<" is ";
			fibonacciIterative(n); break;
		case 2: cout<<"The "<<n<<"th element is ";
			element=fibonacciRecursive(n);
			cout<<element; break;
	
	}
}
