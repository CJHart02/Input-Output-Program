#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string firstName, lastName, department
    double grossSalary, bonus, taxes;
    double distance, travelTime;
    double cupsSold, cupCost;

    ifstream inData;
    ofstream outData;

    inData.open("inData.txt")
    outData.open("outData.txt")

    inData >> firstName >> lastName >> department >> grossSalary >> bonus >> taxes >> distance >> travelTime >> cupsSold >> cupCost;


    return 0;
