#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int maximum, a, b;
    a = 5;
    b = 9;
    maximum = max(a, b);
    swap(a, b);

    cout << "Maximum = " << maximum << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    double cubicRoot;
    cubicRoot = pow((double)(a), 1.0/3);

    cout << "Cubic Root = " << cubicRoot << endl;
    cout << "Cubic Root With Precision = " << fixed << setprecision(10) << cubicRoot << endl;
    cout << "Cubic Root With Precision = " << fixed << setprecision(5) << cubicRoot << endl;

    return 0;
}