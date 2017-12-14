// executed: yes
// submitted: yes
// link: https://www.hackerrank.com/challenges/tutorial-intro/problem

#include <bits/stdc++.h>
using namespace std;


int main() {
    int i,n, V;
    cin>>V;
    cin>>n;
    int ar[n];
    for (i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    for (i=0;i<n;i++)
    {
        if (ar[i]==V)
        {
            cout<<i;
            break;
        }
    }
    return 0;
}

