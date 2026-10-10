#include<iostream>
using namespace std;

int main(){

    int age;
    cout<<"Enter Your Age : ";
    cin >> age;

    (age > 18)? cout << "You can vote" : cout << "You cannot vote";


    return 0;
}