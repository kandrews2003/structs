#include <iostream>
using namespace std;

struct houseType
{
    string style;
    int numOfBedrooms;
    int numOfBathrooms;
    int numOfCarsGarage;
    int yearBuilt;
    int finishedSquareFootage;
    double price;
    double tax;
};


int main () {

//variable declaration
houseType newHouse;

newHouse.style = "ranch";
newHouse.numOfBedrooms = 5;
newHouse.yearBuilt = 1905;
}
