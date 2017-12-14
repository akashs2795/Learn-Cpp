// executed yes
// submitted yes
// link: https://www.hackerrank.com/challenges/reduced-string/problem

#include <bits/stdc++.h>

using namespace std;

string super_reduced_string(string s){
    int i=0;
    while(!s.empty() && i< s.length()-1)
    {
        if(s[i]==s[i+1])
        {
            s.erase(i,2);
            i=0;
        }
        else
        {
            i++;
        }
    }
    return s;
}

int main() {
    string s;
    cin >> s;
    string result = super_reduced_string(s);
   // cout<<result.length();
    if (result.empty())
    {
        cout<<"Empty String"<<endl;
    }
    else 
     cout << result << endl;
    return 0;
}

