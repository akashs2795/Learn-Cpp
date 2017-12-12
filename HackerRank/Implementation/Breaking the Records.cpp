// executed: yes
// submitted: yes
// link: https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem

#include <bits/stdc++.h>
using namespace std;

vector < int > getRecord(vector < int > s, int n){
    int max=s[0]; int min=s[0]; int maxcount=0; int mincount=0;
    for (int i=0;i<n;i++)
    {
        if (s[i]> max)
        {
            max=s[i];
            maxcount++;
        }
        if (s[i]< min)
        {
            min=s[i];
            mincount++;
        }            
    }
    vector <int> temp;
    temp.push_back(maxcount);
    temp.push_back(mincount);
    return temp;

}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    vector < int > result = getRecord(s,n);
    string separator = "", delimiter = " ";
    for(auto val: result) {
        cout<<separator<<val;
        separator = delimiter;
    }
    cout<<endl;
    return 0;
}

