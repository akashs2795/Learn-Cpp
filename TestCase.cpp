#include<iostream>
using namespace std;

void Print();
int FibonacciSum();
int SumOfTwo();

int a,b,c, F;
char m,p,s,I;

int main ()
{
	switch(m)
	{
		cout<<" If you want to print, press P. For the sum of two numbers, press S. For Fibonacci, press F."<<endl;
		
		case p: Print();
		case s: SumOfTwo();
		case i: FibonacciSum();
		
	}
}

void print()
{
	cout<<"Hello Code :P"<<endl;
}

int SumOfTwo()
{
	cout<<"Enter two numbers "<<endl;
	cin>>a>>b;
	c=a+b;
	cout<<c<<endl;
}

int FibonacciSum()
{
	cout<<"Enter the number"<<endl;
	cin>>i;
	if (i<2)
	 F=i;
	else
	 F=F(i-1)+F(i-2);
	cout<<F;
}
