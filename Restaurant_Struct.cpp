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
    cout << "\n-----------------------------" << endl;
    cout << "\nRestaurant 1:\n";
    outputRestaurant(res1);

    Restaurant res2 = createRestaurant();
    cout << "\n-----------------------------" << endl;
    cout << "\nRestaurant 2:\n";
    outputRestaurant(res2);

    Restaurant res3 = createRestaurant();
    cout << "\n-----------------------------" << endl;
    cout << "\nRestaurant 3:\n";
    outputRestaurant(res3);

    Restaurant res4 = createRestaurant();
    cout << "\n-----------------------------" << endl;
    cout << "\nRestaurant 4:\n";
    outputRestaurant(res4);

    return 0;
}

Restaurant createRestaurant(){
    //temp object for inputs
    Restaurant temp;

    //taking input for restaurant members
    cin.ignore();
    cout << "\nEnter restaurant address: ";
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
    cout << "Average price: $" << res.avg_price << endl;
    cout << "Capacity: " << res.capacity << endl;
    cout << "Has restrooms: " << (res.has_restroom ? "Yes" : "No") << endl;
    cout << "Sanitary grade: " << toupper(res.sanitary_grade) << endl;
    cout << "\n-----------------------------" << endl;

}
