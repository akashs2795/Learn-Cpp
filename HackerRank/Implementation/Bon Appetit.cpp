// executed yes
// submitted yes
// link: https://www.hackerrank.com/challenges/bon-appetit/problem

#include <bits/stdc++.h>
using namespace std;

int bonAppetit(int n, int k, int bCharged, vector <int> ar) {
    int total=0;
    for (int i=0;i<n;i++)
    {
        total+=ar[i];
    }
    int bActual= (total-ar[k])/2;
    int diff=abs(bActual-bCharged);
    if (diff==0)
    {
        cout<<"Bon Appetit"<<endl;
        return 0;
    }
    else
        return diff;
    
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int b;
    cin >> b;
    int result = bonAppetit(n, k, b, ar);
    if (result!=0)
     cout << result << endl;
    return 0;
}

