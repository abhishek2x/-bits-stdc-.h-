#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int Queue[200];
int backInd = -1;
int frontInd = 0;

void push(int x){
    ++backInd;
    Queue[backInd] = x;
}
void pop(){
    Queue[frontInd] = 0;
    frontInd++;
}
bool isEmpty(){
    if(backInd > frontInd)
        return true;
        else return false;
}
int Front(){
    return Queue[frontInd];
}
int main(){
    
    push(4);
    push(5);
    pop();
    Front();
    push(7);
    pop();
    pop();

    return 0;
}