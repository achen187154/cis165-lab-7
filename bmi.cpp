//Name: Angelina Chen
//Date: Oct. 21, 2026
//Course:CIS-165
//Description: Ask for a weight in pounds and a height in inches. Both values must be greater than zero. 
// If either value is zero or negative, display an error message and end the program before calculating BMI. 
// You may assume the user enters numbers. Repeated prompting and handling nonnumeric input are not required.

#include<iostream>
#include<iomanip> //Allows  setprecision()
using namespace std;

int main(){

    double weight;
    double height;
    double bmi;

    cout << "What is the weight in pounds: ";
    cin >> weight;
    
    cout << "What is the height in inches: ";
    cin >> height;

    //Checks if the numbers are lower than or equal to 0
    if (weight<=0 || height<=0)
    {
        cout << "ERROR: Must be over 0";
    }
    //If both values are greater than 0
    else
    {
        //BMI is calculated using the formula
        bmi = weight * 703.0 / (height * height);
        
        //As long as the bmi passes the first 2 tests, then the bmi is definitely in the optimal weight zone
        if (bmi < 18.5)
        {
            cout << "Underweight";
        }
        else if (bmi > 25)
        {
            cout << "Overweight";
        }
        else
        {
            cout << "Optimal Weight";
        }
        
        //Rounds BMI
        cout << fixed;
        cout << setprecision(2);
        cout << "\nRounded BMI: " << bmi;
    }

}