// It's given an array (indexed from 1) of N elements on which we make M queries:
// add(lg, ri, X) - all the elements between the position lg and ri (1<=lg<=ri<=N) are raising their values with X.
// After all the operations are completed, print the array.
// example
// Array: 1 1 1 4 5 6
// operations: (1, 5, 2), (2, 3, 10)
// Final array: 3 13 13 6 7 6

//We are doing this for one query.

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int A[100], B[100];
int auxB, lg, ri, value, n;

int main(){
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> A[i];
    }
    cin >> lg;
    cin >> ri;
    cin >> value;
    B[lg] += value;
    B[ri+1] -= value;
    
    for (int i = 0; i < n; i++)
    {
        auxB += B[i];
        A[i] += auxB;

        cout << A[i] << ","; 
    }
    return 0;
}


// For n-queries

// # include <bits/stdc++.h>
// using namespace std;
// ifstream f("data.in");
// int A[1000], B[1000], auxB, n, m, Aelements, i, j, Left, Right, X, nrQueries;
// int main ()
// {
//     f>>Aelements;

//     for (i=1; i<=Aelements; ++i)
//         f>>A[i];

//     // a=a+b ==  a+=b

//     f>>nrQueries;
//     for (j=1; j<=nrQueries; ++j) {
//         f>>Left>>Right>>X;
//         B[Left]+=X;
//         B[Right+1]-=X;
//     }

//     for (i=1; i<=Aelements; ++i) {
//         auxB+=B[i]; // in auxB we keep the sum B[1] + B[2] + ... + B[i]
//         A[i]+=auxB;

//         cout<<A[i]<<" ";
//     }


//     return 0;
// }