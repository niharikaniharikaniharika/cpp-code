#include<iostream>
using namespace std;
int main(){
    int a,b,temp;

    cout<<"before swappping:"<<endl;
    cout<<"a ="<< a <<"b = "<< b <<endl;
    temp = a;
    a = b;
    b = temp;

    cout << "After swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;

}