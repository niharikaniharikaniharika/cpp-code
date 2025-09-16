#include<iostream>
#include<string.h>
using namespace std;

class test{
public:
int hno;
string city,state;
test( int hno, string city, string state)
{
    this-> hno = hno;
    this-> city = city;
    this-> state = state;
}
};
class address
{
    private:
    test* addr;
    public:
    string name;
    address(string name,test*addr)
    {
        this-> name = name;
        this -> addr = addr;

    }
    void display()
    {
       cout<<"Name:"<<name<< " \n " << " Hno : " << addr->hno << " \n "
       << " City : " << addr->city << " \n " << " State : "
       << addr->state << endl << " ----- " << endl;  
    }
};
int main(){
    test obj1=test(45,"los angeles","USA");
    test obj2=test(65,"london","UK");
    address a1=address("joy",&obj1);
    address a2=address("jack",&obj2);
    cout<<"bellow ar the details:"<<endl<< "------" <<endl;
    a1.display();
    a2.display();
    return 0;
}