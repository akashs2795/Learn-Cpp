// executed: yes
// submitted: yes
// link: https://www.hackerrank.com/challenges/grading/problem


#include <bits/stdc++.h>
using namespace std;

vector < int > solve(vector < int > A, int n){
    vector <int> temp;
    for (int i=0;i<n;i++)
    {
        if (A[i]<38)
            A[i]=A[i];
        else if (A[i]%5>=3)
        {
            int temp=(A[i]/5)+1;
            A[i]=5*temp;
        }
        temp.push_back(A[i]);
    }
    return temp;
}

int main() {
    int n;
    cin >> n;
    vector<int> grades(n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       cin >> grades[grades_i];
    }
    vector < int > result = solve(grades,n);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;
    

    return 0;
}

