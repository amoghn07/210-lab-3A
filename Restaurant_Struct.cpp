#include <iostream>
#include <vector>
#include <string>
using namespace std;


//Definining Restaurant struct with members: address, average pricing
//capacity, restroom availability, and sanitary grade.
struct Restaurant{
    string address;
    double avg_price;
    int capacity;
    bool has_restroom;
    char sanitary_grade;
};

Restaurant createRestaurant();
void outputRestaurant(Restaurant res);


int main(){

    Restaurant res1 = createRestaurant();
    cout << "Restaurant 1: " << outputRestaurant(res1) << endl;

    Restaurant res2 = createRestaurant();
    cout << "Restaurant 2: " << outputRestaurant(res2) << endl;

    Restaurant res3 = createRestaurant();
    cout << "Restaurant 3: " << outputRestaurant(res3) << endl;

    Restaurant res4 = createRestaurant();
    cout << "Restaurant 4: " << outputRestaurant(res4) << endl;
    
    return 0;
}

Restaurant createRestaurant(){
    //temp object for inputs
    Restaurant temp;

    //taking input for restaurant members
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

void outputRestaurant(Restaurant res){
    cout << "Restaurant address: " << res.address << endl;
    cout << "Average price: " << res.avg_price << endl;
    cout << "Capacity: " << res.capacity << endl;
    cout << "Has restrooms: " << (res.has_restroom ? "Yes" : "No") << endl;
    cout << "Sanitary grade: " << res.sanitary_grade << endl;

}
