#include <iostream>
#include <vector>
#include <string>
using namespace std;


//Definining Restaurant struct with members: address, average pricing
//capacity, restroom availability, and sanitary grade.
struct Restaurant{
    string address;
    double avg_price = 0;
    int capacity = 0;
    bool has_restroom = 0;
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
    cout << "Enter restaurant address: ";
    getline(cin, temp.address);
    while (temp.address.empty()) {
        cout << "Please enter a valid address." << endl;
        cout << "Enter restaurant address: ";
        getline(cin, temp.address);
    }

    cout << "Enter average price: ";
    cin >> temp.avg_price;
    while (cin.fail() || temp.avg_price <= 0) {
        cin.clear();
        cin.ignore(2000, '\n');
        cout << "Please enter a valid average price.\n";
        cout << "Enter average price: ";
        cin >> temp.avg_price;
    }

    cout << "Enter capacity: ";
    cin >> temp.capacity;
    while (cin.fail() || temp.capacity <= 0) {
        cin.clear();
        cin.ignore(2000, '\n');
        cout << "Please enter a valid capacity.\n";
        cout << "Enter capacity: ";
        cin >> temp.capacity;
    }

    cout << "Has restrooms?(1- true, 0- false): ";
    cin >> temp.has_restroom;
    while (cin.fail()) {
        cin.clear();
        cin.ignore(2000, '\n');
        cout << "Please enter a valid option.\n";
        cout << "Has restrooms?(1- true, 0- false): ";
        cin >> temp.has_restroom;
    }

    cout << "Enter sanitary grade (A-F): ";
    cin >> temp.sanitary_grade;
    (char)toupper(temp.sanitary_grade);
    while (cin.fail() || temp.sanitary_grade < 'A' || temp.sanitary_grade > 'F') {
        cin.clear();
        cin.ignore(2000, '\n');
        cout << "Please enter a valid sanitary grade.\n";
        cout << "Enter sanitary grade (A-F): ";
        cin >> temp.sanitary_grade;
    }
    return temp;
}

void outputRestaurant(Restaurant res){

    cout << "Restaurant address: " << res.address << endl;
    cout << "Average price: $" << res.avg_price << endl;
    cout << "Capacity: " << res.capacity << endl;
    cout << "Has restrooms: " << (res.has_restroom ? "Yes" : "No") << endl;
    cout << "Sanitary grade: " << (char)toupper(res.sanitary_grade) << endl;
    cout << "\n-----------------------------" << endl;

}
