// executed yes
// submitted yes
// link: https://www.hackerrank.com/challenges/migratory-birds/problem

#include <bits/stdc++.h>

using namespace std;

int findMax (vector <int> A)
{
    int max=A[0]; int c;
    for (int i=1; i<5; i++)
    {  
        if (A[i]>max)
        {
            max=A[i];
            c=i+1;
        }
            
    }
    return c;
}

int migratoryBirds(int n, vector <int> ar) {
    int type1=0, type2=0, type3=0, type4=0, type5=0;
    for (int i=0;i<n;i++)
    {
        if (ar[i]==1)
            type1++;
        if (ar[i]==2)
            type2++;
        if (ar[i]==3)
            type3++;
        if (ar[i]==4)
            type4++;
        if (ar[i]==5)
            type5++;
    }
    vector <int> type(5);
    type[0]=type1; type[1]=type2, type[2]=type3, type[3]=type4, type[4]=type5;
    int result= findMax( type);
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = migratoryBirds(n, ar);
    cout << result << endl;
    return 0;
}

