// executed yes
// submitted yes
// link: https://www.hackerrank.com/challenges/camelcase/problem


#include <bits/stdc++.h>
using namespace std;

int findNum(string s, int length)
{
    int count=1;
    for (int i=0; i<length; i++)
    {
        if (s[i]>='A' && s[i]<='Z')
        {
            count++;
        }
    }
    return count;
}


int main(){
    string s; int count;
    cin >> s;
    int length= s.length();
    count=findNum(s,length);    
    cout<<count;
    return 0;
}

