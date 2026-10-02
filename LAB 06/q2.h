#include <iostream>
#include <string>
using namespace std;

struct Vehicle
{
    string plate;
    long mileage;
};

void addTripDistance(Vehicle& v, long distance)
{
    v.mileage += distance;
}

void correctMileage(Vehicle* v, long newMileage)
{
    v->mileage = newMileage;
}

void displayVehicle(const Vehicle& v)
{
    cout<<"Plate  : "<<v.plate<<endl;
    cout<<"Mileage: "<<v.mileage<<endl;
}