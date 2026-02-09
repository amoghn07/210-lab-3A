#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Restaurant{
    string address;
    double avg_price;
    int capacity;
    bool has_restroom;
    char sanitary_grade;
};

Restaurant createRestautant();


int main(){

    Restaurant res1 = createRestautant();
    return 0;
}

Restaurant createRestautant(){
    Restaurant temp;

    cout << "Enter restaurant address: ";
    getline(cin, temp.address);
    cout << "Enter average price: ";
    cin >> temp.avg_price;
    cout << "Enter capacity: ";
    cin >> temp.capacity;
    cout << "Has restrooms?(true/false): ";
    cin >> temp.has_restroom;
    cout << "Enter sanitary grade (A-F): ";
    cin >> temp.sanitary_grade;

    return temp;
}


