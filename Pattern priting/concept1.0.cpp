//1 2 3
//4 5 6
//7 8 9
#include<iostream>
using namespace std;

int main(){

    int n = 3 ;

    int a = 1; //if we want new no. at start of every line we should declare
    //evrytime before outer loop. 

    for(int i = 0 ; i<n ; i++ ){ //outer loop
       
        for(int j = 0 ; j < n ; j++  ){ //inner loop 
            cout << a;
            a = a + 1; //repetation of every number in new line of start 
        }
      cout << endl;
    }

}