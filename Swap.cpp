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

int main ()
{
	int a, b, o;
	cout<<"Enter the numbers"<<endl;
	cin>>a>>b;
	cout<<"If you want to swap using call by reference, press 1. If you want to use pointers, press 2."<<endl;
	cin>>o;
	switch (o)
	{
		case 1: SwapRef(a, b); cout<<"switched"<<endl;
		case 2: SwapPoint(&a, &b); cout<<"switched"<<endl;

	}
}


