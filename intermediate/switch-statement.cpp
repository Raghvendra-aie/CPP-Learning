#include<iostream>
using namespace std;

int main(){
    char grade;
    cout << "Enter you grade : ";
    cin >> grade;
    

    switch(grade){
    case 'A' : cout << "You got marks between 90 to 100" << endl;
    break;
    case 'B' : cout << "You got marks between 80 to 90" << endl;
    break;
    case 'C' : cout << "You got marks between 70 to 80" << endl; 
    break;
    default : cout << "You got marks between 60 to 70" << endl;
    }

    return 0;

}