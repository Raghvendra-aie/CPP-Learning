#include<iostream>
using namespace std;

int main(){

    int n = 12;

    for(int i = 0 ; i<n ; i++){ //outer loop [for start line ]
        char ch = 'A'; // remember when we write before inner loop it will reset all time at when start
        for(int j = 0 ; j<n ; j++){ //this is inner loop for writing in line
            cout << ch;
            ch = ch + 1; // we know current ch is A which is 65 after 65 + 1 = 66 --> B in [ASCII value]
            
        }
          cout << endl;
    }



}