#include<iostream>
using namespace std;

class car {
public:
    
    string model;
    string brand;
    int year;

    car(){
        model = "swift";
        brand = "maruti suzuki";
        year = 2020;
    
    }
    
};
int main()   
{  
    car my_car;  
    cout << "model: " << my_car.model << endl;  
    cout << "brand: " << my_car.brand << endl;  
    cout << "Year: " << my_car.year << endl;  
    return 0;  
}  