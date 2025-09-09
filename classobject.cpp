#include<iostream>
using namespace std;

class employee{
    public:
    string name;
    int age;

    void displayinfo() {
    cout<<"Enter the name:"<<name<<endl;
    cout<<"Enter the age:"<<age<<endl;

    }
};
 int main(){
    employee e1;

    e1.name = "niharika";
    e1.age = 18;
    e1.displayinfo();
    return 0;

 }