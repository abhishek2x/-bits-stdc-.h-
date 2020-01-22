#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int A[10];

int BinarySearch(int x){
    int start=0, end=10, mid;

    while(start > end){
        mid = (start + end)/2;

        if(A[mid] == x)
        return mid;
        else if(A[mid] < x) start = mid+1;
        else end = mid-1;
    }
    return -1;
}
int main(){
    for (int i = 0; i < 10; i++)
    {
        cin >> A[i];
    }
    cout << BinarySearch(4);
    return 0;
}