#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int A[100];
int maximum;
int num;
ifstream f("data.in");
ofstream g("data.out");

int main(){
    int n;
    cin >> n;
    // creating appearance array
    for (int i = 0; i < n; i++){
        f >> num;
        ++A[num];
        maximum = max(maximum, num);
    }

    for (int i = 0; i < maximum; i++){
        if(A[i]>0)
        for (int j = 0; j < A[i]; j++){
            cout << i << ",";
        }
    }
    
    return 0;
}