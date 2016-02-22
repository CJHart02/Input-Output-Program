// program 1 Carlton Hart cjhart
// input data from file and output to different file
// due 2-22-2016
// [enter relevant data here]

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
        // declare variables
        string firstName, lastName, department;
        double grossSalary, bonus, taxes, paycheck;
        double distance, travelTime, averageSpeed;
        double cupsSold, cupCost, salesAmount;

        // create classes to import and output data to and from the specified files
        ifstream inData;
        ofstream outData;

        // open in and out files
        inData.open("inData.txt");
        outData.open("outData.txt");

        // import data from inData.txt file and assigns values to variables
        inData >> firstName >> lastName >> department >> grossSalary >> bonus >> taxes >> distance >> t$

        // calculate data necessary data not specified in inData.txt file
        paycheck = (grossSalary + (grossSalary * (bonus/100))) - ((grossSalary + (grossSalary * (bonus/$
        averageSpeed = distance / travelTime;
        salesAmount = cupsSold * cupCost;

        // output data to outData.txt file 
        outData << "Name: " << firstName << " " << lastName << ", Department: " << department << endl;
        outData << setprecision (2) << fixed << "Monthly Gross Salary: $" << grossSalary << ", Monthly $
        outData << "Paycheck: $" << paycheck <<  endl << endl;
        outData << "Distance Traveled: " << distance << " miles, Traveling Time: " << travelTime << " h$
        outData << "Average Speed: " << averageSpeed << " miles per hour" << endl << endl;
        outData << "Number of Coffee Cups Sold: " << cupsSold << ", Cost: $" << cupCost << " per cup" <$
        outData << "Sales Amount = $" << salesAmount << endl;

        // close import and output files
        inData.close(" inData.txt ")
        outData.close(" outData.txt ")

        return 0;
}
