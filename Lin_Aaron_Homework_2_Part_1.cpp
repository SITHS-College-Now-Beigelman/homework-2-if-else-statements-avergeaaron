// Aaron Lin
// 10/01/2024
// Homework 2 - Part 1

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//beginning of code
int main() 
{

    int months; //variable for months
    int days; //variable for days

    cout << "\nWhat is the date? (MM/DD)" << endl; //question
    cin >> months >> days; //user input MM/DD

    if ((months == 3 && days >= 21) || (months == 6 && days <= 20 ) || (months > 3 && months < 6)) //if the months is equal to 3 and greater than 21 or months equal to 6 and less than 20 or months is greater than 3 and is lesser than 6
        cout << "It is Spring!!!" << endl; //prints It is Spring!!!
    else if ((months == 6 && days >= 21) || (months == 9 && days <= 22) || (months > 6 && months < 9)) //if the months is equal to 6 and greater than 21 or months equal to 9 and less than 22 or months is greater than 6 and is lesser than 9
        cout << "It is Summer!!!" << endl; //prints It is Summer!!!
    else if ((months == 9 && days >= 23) || (months == 12 && days <= 21) || (months > 9 && months < 12)) //if the months is equal to 9 and greater than 23 or months equal to 12 and less than 21 or months is greater than 9 and is lesser than 12
        cout << "It is Fall!!!" << endl; //prints It is Fall!!!
    else //if it doesn't hit the requirement above
        cout << "It is Winter!!!" << endl; //prints It is Winter!!!

    return 0; //ends code
}
/*
What is the date? (MM/DD)
2 7
It is Winter!!!
*/