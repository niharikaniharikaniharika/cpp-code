#include<iostream>
using namespace std;

class employee{
public:
    int id;
    string name;
    float salary;
    employee(int a,string b,float c)
{
    id = a;
    name = b;
    salary = c;

}
void show()
{
    cout<<id<<" "<<name<<" "<<salary<<" "<<endl;
}
};
int main(void){
    employee e1 = employee(101,"niharika",60000);
    employee e2 = employee(102,"rupali",60000);
    
    e1.show();
    e2.show();
    return 0;

}