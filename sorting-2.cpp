#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool comp(int x, int y){
    return x > y;
}

int main(){
    int a[5] = {5, 4, 3, 2, 1};
    int b[5] = {5, 4, 3, 2, 1};
    
    
    cout << "Original order : \n\n";
    
    for (int i = 0; i < 5; i++){
        cout << a[i] << "\t";
    }cout << "\n\n";
    cout << "Ascending order : \n\n";
    
    sort(a, a+5);
    for (int i = 0; i < 5; i++){
        cout << a[i] << "\t";
    }cout << "\n\n";
    
    cout << "Sorting first 3 Positions : \n\n";

    sort(b, b+3);
    for (int i = 0; i < 5; i++){
        cout << b[i] << "\t";
    }cout << "\n\n";

    cout << "Sorting in decreasing order : \n\n";


    sort(a, a+5, comp);
    for (int i = 0; i < 5; i++){
        cout << a[i] << "\t";
    }cout << "\n\n";

    
    return 0;
}