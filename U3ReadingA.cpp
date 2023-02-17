/*
Program Name: topic 3 reading assignment
Written By: Khaled Abdelrahman [0443178]
Purpose: a math calculator program that generates a
random number between 1-300 and a second number less than the first number and
subtracts them. the user is responsible for inputting their guess of the
outcome.
Date: Feb 20, 2023

PSEUDOCODE

setup cpp file and add necessary preprocessor directives
using example code from pg.130 - setup min & max variables
setup a number variable to generate a random number within the min & max
parameters
then use a similar setup for the second generated number
declare the final outcome as the difference of the generated figures
use the console output to prompt users to input their guess and create a
corresponding console input
finally, use the console output to display the user input, both generated figures and the
final number
*/

#include <iostream>
#include <ctime>
#include <cstdlib>


using namespace std;

int main() {

    const int MIN = 1; 
    const int MAX = 300;
    int number;
    int answer;
    srand((unsigned)(time(0)));

    number = rand()%(MAX-MIN+1)+MIN;

    const int MIN_2 = 1;
    const int MAX_2 = number;
    int number_2;

    number_2 = rand()%(MAX_2-MIN_2+1)+MIN;

    const int Final = number - number_2;

    cout <<"Enter a number between ";
    cout << MIN << " and " << MAX << endl; 
    cin >> answer;
    cout << "The number is \n" << number << "\n - " << number_2 << "\n_____________" << "\n" << Final <<endl;

    return 0;
}