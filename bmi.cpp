//Name: Angelina Chen
//Date: Oct. 21, 2026
//Course:CIS-165
//Description: Ask for a weight in pounds and a height in inches. Both values must be greater than zero. 
// If either value is zero or negative, display an error message and end the program before calculating BMI. 
// You may assume the user enters numbers. Repeated prompting and handling nonnumeric input are not required.

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){

    double weight;
    double height;
    double bmi;

    cout << "What is the weight in pounds: ";
    cin >> weight;
    
    cout << "What is the height in inches: ";
    cin >> height;

    if (weight==0 or height==0)
    {
        cout << "ERROR";
    }
    else
    {
        bmi = weight * 703.0 / (height * height);
        cout << bmi;

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
    }

}