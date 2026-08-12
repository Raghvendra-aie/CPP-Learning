#include <iostream>

using namespace std;

int main()
{
    int i = 70;
    long l = 76734;
    float f = 3.99;
    double d = 879.99;
    char ch = 'a';
    bool booo = true ;

    cout <<"Integer = "<<i<<"\n";
    cout <<"Long = "<<l<<"\n";
    cout <<"Float = "<<f<<"\n";
    cout <<"Double = "<<d<<"\n";
    cout <<"char = "<<ch<<"\n";
    cout <<"Boolean = "<<booo<<"\n";

    //Here we know the size 💀 of DataTypes 
    
    cout <<sizeof(i)<< " Byte" <<endl;

    return 0;
}