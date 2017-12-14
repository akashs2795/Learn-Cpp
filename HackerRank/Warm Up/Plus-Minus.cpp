// executed: yes
// submitted: yes
// link: https://www.hackerrank.com/challenges/plus-minus/problem

#include <bits/stdc++.h>
using namespace std;

vector <double> findFraction(vector <int> A, int n)
{
    double positive=0, negative=0, zero=0;
    for (int i=0; i<n; i++)
    {
        if(A[i]>0)
        {
            positive++;
        }
        else if(A[i]<0)
        {
            negative++;
        }
        else if(A[i]==0)
        {
            zero++;
        }
    }
    double P, N, Z;
    P=(positive/n);
    N=(negative/n);
    Z=(zero/n);
    vector <double> temp;
    temp.push_back(P);
    temp.push_back(N);
    temp.push_back(Z);
    return temp;
}


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    vector < double > result=findFraction(arr,n);
    for (int i = 0; i < 3; i++) {
        cout << result[i]<<endl;// << (i != result.size() - 1 ? " " : "");

    }
}

