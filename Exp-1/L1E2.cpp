/*Write a C++ Program to define a class batsman with the following specifications:
Private members:
batsman code: 4 digits code number
batsman name: 20 characters(string)
total innings, notout innings, total runs: integer type
calcavg(): Function to compute batavg
batting avg: [total runs/(total innings-notout innings)] (formula to calculate batting average)
Public members:
readdata(): Function to accept value from batsman code, batsman name, total innings, notout innings, total runs and invoke the function calcavg().
displaydata(): Function to display the data members on the screen.
Access all the data members and member functions to calculate batting average of a batsman by creating its object.*/

#include <iostream>
using namespace std;

class batsman
{
private:
    double total_innings, notout_innings, total_runs;
    string batsman_name;
    double batsman_code;
    double batting_avg;

    double calcAvg()
    {
        batting_avg = total_runs / (total_innings - notout_innings);
        return batting_avg;
    }

public:
    void readData(double batscode, double totalInn, double notoutinn, double totalRuns, string batsmancode)
    {
        batsman_code = batscode;
        total_innings = totalInn;
        notout_innings = notoutinn;
        total_runs = totalRuns;
        batsman_name = batsmancode;
    }

    void displayData()
    {
        cout << "Batsman Code : " << batsman_code << endl;
        cout << "Total Innings : " << total_innings << endl;
        cout << "Not out Innings : " << notout_innings << endl;
        cout << "Total Runs : " << total_runs << endl;
        cout << "Batsman Name : " << batsman_name << endl;
    }

    double calculateAvg()
    {
        return calcAvg();
    }
};

int main()
{
    batsman batter;
    batter.readData(2132, 100, 10, 4000, "BHS");
    batter.displayData();
    cout << "Batting average of the batsman: " << batter.calculateAvg();
}