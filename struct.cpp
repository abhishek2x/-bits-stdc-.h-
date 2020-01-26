#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct Car{
    int speed;
    int price;
}cars[100];

bool cmp(Car A, Car B){
    if(A.speed != B.speed) return A.speed > B.speed;
    else return A.price < B.price;
}

int main(){
    cars[0].speed = 500; cars[0].price = 132;
    cars[1].speed = 100; cars[1].price = 432;
    cars[2].speed = 1500; cars[2].price = 4432;
    cars[3].speed = 200; cars[3].price = 324;
    cars[4].speed = 300; cars[4].price = 232;
    cars[5].speed = 400; cars[5].price = 132;

    for (int i = 0; i < 5; i++){
        cout << "Car-" << i+1 << " speed = " << cars[i].speed << endl;
        cout << "Car-" << i+1 << " price = " << cars[i].price << endl;
    }
    cout << "\n  Now sorted Data \n";
    sort(cars + 0, cars + 6, cmp);

    for (int i = 0; i < 5; i++){
        cout << "Car-" << i+1 << " speed = " << cars[i].speed << endl;
        cout << "Car-" << i+1 << " price = " << cars[i].price << endl;
    }

    return 0;
}
