// executed: yes
// submitted: yes
// link: https://www.hackerrank.com/challenges/staircase/problem

#include <bits/stdc++.h>
using namespace std;

void staircase(int n)
{
    for (int i=0; i<n; i++)
    {
        int j,k;
        for (j=0; j<n-i-1; j++)
        {
            cout<<" ";
        }
        for (k=0; k<i+1; k++)
        {
            cout<<"#"; 
        }        
        cout<<endl;
    }
}


int main(){
    int n;
    cin >> n;
    staircase(n);
    return 0;
}

