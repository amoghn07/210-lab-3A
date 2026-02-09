#include <iostream>
#include <vector>
#include <string>
using namespace std;


//Definining Restaurant struct
struct Restaurant{
    string address;
    double avg_price;
    int capacity;
    bool has_restroom;
    char sanitary_grade;
};

Restaurant createRestaurant();


int main(){

    Restaurant res1 = createRestaurant();
    return 0;
}

Restaurant createRestaurant(){
    Restaurant temp;

    cout << "Enter restaurant address: ";
    getline(cin, temp.address);
    cout << "Enter average price: ";
    cin >> temp.avg_price;
    cout << "Enter capacity: ";
    cin >> temp.capacity;
    cout << "Has restrooms?(1- true, 0- false): ";
    cin >> temp.has_restroom;
    cout << "Enter sanitary grade (A-F): ";
    cin >> temp.sanitary_grade;

    return temp;
}


