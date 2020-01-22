// To Find frequency of any number in an array using Binary Search.
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int BinarySearchManipulation(int A[], int n, int x, int OK){
    int lf = 0;
    int rg = n-1;
    int mid;
    int result = -1;
    while(lf <= rg){
        mid = (lf + rg) /2;
        if(A[mid] == x){
            if(OK == 1){
                result = mid;
                rg = mid - 1;
            }
            else if(OK == 2){
                result = mid;
                lf = mid + 1;
            }
        } else {
            if(x > A[mid])
                lf = mid + 1;
                else rg = mid - 1;
        }
    }
    return result;
}

int main(){
    int frequency = 0, firstOccurance, lastOccurance;
    int A[] = {1,1,1,3,3,3,3,3,3,3,5,6,6,8,9,9};
    firstOccurance = BinarySearchManipulation(A, 16, 3, 1);
    lastOccurance = BinarySearchManipulation(A, 16, 3, 2);
    frequency = lastOccurance - firstOccurance;
    cout << "Frequency of 3 = " << frequency;
}