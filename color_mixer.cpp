//Name: Angelina Chen
//Date: Oct. 21, 2026
//Course:CIS-165
//Description: Ask for two primary-color names. The valid inputs are the single lowercase words red, blue, and yellow. Find the mixed color.

#include<iostream> 
#include<cstring> //Allows strcmp
using namespace std;

int main(){

    const int ARRAY_SIZE = 7;
    char primary1[ARRAY_SIZE];
    char primary2[ARRAY_SIZE];

    //Asks for first primary color and stores in primary1
    cout << "What is the first primary color: ";
    cin >> setw(ARRAY_SIZE) >> primary1;

    //Asks for second primary color and stores in primary2
    cout << "What is the second primary color: ";
    cin >> setw(ARRAY_SIZE) >> primary2;

    //Condition that both values are either red,blue, or yellow
    if ((strcmp(primary1, "red") == 0 || strcmp(primary1, "blue") == 0 || strcmp(primary1, "yellow") == 0) && (strcmp(primary2, "red") == 0 || strcmp(primary2, "blue") == 0 || strcmp(primary2, "yellow") == 0))
    {
        //If both primary colors are the same, then the color is printed
        if (strcmp(primary1, primary2) == 0)
        {
            cout << "It's just " << primary1;
        }

        //Otherwise, then this else contains primary colors that arent the same as the other
        else
        {
            //If primary1 is red while primary2 is yellow OR otherwise
            if (((strcmp(primary1, "red") == 0) && (strcmp(primary2, "yellow") == 0)) || ((strcmp(primary2, "red") == 0) && (strcmp(primary1, "yellow") == 0)))
            {
                cout << "The colors mixed to orange";
            }
            //If primary1 is red while primary2 is blue OR otherwise
            else if (((strcmp(primary1, "red") == 0) && (strcmp(primary2, "blue") == 0)) || ((strcmp(primary1, "blue") == 0) && (strcmp(primary2, "red") == 0)))
            {
                cout << "The colors mixed to purple";
            }
            else
            //Else, the only mixture is blue and yellow
            {
                cout << "The colors mixed to green";
            }
        }
    }
    //Output if at least one value isn't a primary color
    else 
    {
      cout << "Invalid, Use only primary colors: red, blue, yellow";  
    }
}