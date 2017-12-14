// executed yes
// submitted yes
// link: https://www.hackerrank.com/challenges/time-conversion/problem



#include <bits/stdc++.h>
using namespace std;

string addTwelve ( string a ) { 

string r = "  "; //two spaces long string 

int val = 10*(a[0] - '0') + a[1] - '0' ;

// char a - '0' gives the int value for single digits numbers 

val += 12 ; 

r[0] = val/10 + '0' ;
r[1] = val%10 + '0' ;

return r ;

}

string timeConversion(string s) {
    string res;
    if (s[8]=='A')
    {
        if(s[0]=='1' && s[1]=='2')
        {
            s[0]='0'; s[1]='0';
        }
        res= s.substr (0,8);
    }
    else 
    {
        if (s[0]=='1' && s[1]=='2')
        {
           res= s.substr (0,8);
        }
        else{
        string a= s.substr (0,2);
        string r= addTwelve (a);
        s[0]=r[0];
        s[1]=r[1];
        res= s.substr (0,8);
        }
        
    }
  //  s[8]='\0'; s[9]='\0';
    return res;
}

int main() {
    string s;
    cin >> s;
    string result = timeConversion(s);
    cout << result << endl;
    return 0;
}

