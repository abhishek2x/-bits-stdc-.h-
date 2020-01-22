#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int Aglobal[3][3];

void addMatrix(int x)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            Aglobal[i][j] += x;
        }
    }
}

int sumMatrix()
{
    int sumElement = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sumElement += Aglobal[i][j];
        }
    }
    return sumElement;    
}

int main()
{
    addMatrix(1);

    addMatrix(10);

    addMatrix(100);

    int sumElements = sumMatrix();
    cout << sumElements << endl;

    return 0;
}
