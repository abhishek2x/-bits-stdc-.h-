#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int Stack[100];
int top;

void push(int x){
    top++;
    Stack[top] = x;
}

void pop(){
    Stack[top] = 0;
    top--;
}

bool isEmpty(){
    if(top >=1) return false;
    else return true;
}

int main(){

    top = 0;

    push(1);
    push(4);

    if(! isEmpty()) cout << top << endl;

    pop();
    pop();
}