#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int majority, counter = 0;
    int a[]={0,1,1,4,5,1,6,6,1,1,3, 1};
    int size = 11;

    sort(a+1, a+size+1);
    majority = a[(size/2) + 1];

    for (int i = 0; i < size; i++)
    {
        if(majority == a[i]) counter++;
    }
    if(counter >= ((size/2)+1)){
    cout << "Majority Element = " << majority << endl;
    cout << "Counter = " << counter;
    }
    else cout << "No majority element";

    return 0;
}

