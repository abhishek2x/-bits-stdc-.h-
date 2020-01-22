// Occurance using Binary
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

   
int main(){
    int n, x, A[100], mid, resultLast = -1;
    cout << "The number to be searched\n";
    cin >> x;
    cout << "Enter Size\n";
    cin >> n;
    cout << "Enter ELements : \n";
    for (int i = 0; i < n; i++){
        cin >> A[i];
    }
    int lf = 0, rg = n-1;

    while(lf <= rg){
        mid = (lf + rg)/2;

        if(A[mid] == x){
            resultLast = mid;
            lf = mid + 1;
        }
        else if(A[lf] > x) lf = mid + 1;
        else rg = mid - 1;
    }


    cout << "Last Occurance = ";
    cout << resultLast;

    return 0;
}
