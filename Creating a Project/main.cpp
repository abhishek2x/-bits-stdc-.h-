#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    ifstream f("data.in");
    ofstream k("data.out");

    int a, b;

    f >> a >> b;
    int sum = a + b;
    k << sum;

    return 0;
}
