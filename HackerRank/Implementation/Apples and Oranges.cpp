// executed yes
// submitted yes
// https://www.hackerrank.com/challenges/apple-and-orange/problem


#include <bits/stdc++.h>
using namespace std;

vector <int> fruitInTheHouse( vector <int> apple, vector <int> orange, int m, int n, int s, int t, int a, int b)
{
    int d1=s-a;
    int d2=t-b;
    int c1=0; int c2=0;
    vector<int>temp;
    int i;
    for (i=0;i<m;i++)
    {
        if (apple[i]>=d1)
        {
         c1++;   
        }
    }
    temp.push_back(c1);
    for (i=0;i<n;i++)
    {
        if (orange[i]<=d2)
        {
            c2++;
        }
            
    }
    temp.push_back(c2);
    return temp;
}


int main(){
    int s;  int t;
    cin >> s >> t;
    int a;  int b;
    cin >> a >> b;
    int m;  int n;
    cin >> m >> n;
    vector<int> apple(m);
    for(int apple_i = 0;apple_i < m;apple_i++){
       cin >> apple[apple_i];
    }
    vector<int> orange(n);
    for(int orange_i = 0;orange_i < n;orange_i++){
       cin >> orange[orange_i];
    }
    vector < int > result = fruitInTheHouse(apple, orange, m, n, s, t, a, b);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;
    return 0;
}

