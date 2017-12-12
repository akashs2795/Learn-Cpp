// executed: yes
//submitted: yes
//link: https://www.hackerrank.com/challenges/mini-max-sum/problem

#include <bits/stdc++.h>
using namespace std;

vector <long> findMinMax(vector<long> A)
{
    int i; long sumtemp;
    long min=LONG_MAX;
    long max=LONG_MIN;
    long sum=0;
    for (i=0;i<5;i++)
    {
        sum+=A[i];
    }
    for (i=0;i<5;i++)
    {
        sumtemp=sum-A[i];
        if (sumtemp>max)
        {
            max=sumtemp;
        }
        if (sumtemp<min)
        {
            min=sumtemp;
        }
    }
    vector <long> temp;
    temp.push_back(min);
    temp.push_back(max);
    return temp;
}

int main() {
    vector<long> arr(5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i];
    }
    vector < long > result = findMinMax(arr);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;
    return 0;
}

