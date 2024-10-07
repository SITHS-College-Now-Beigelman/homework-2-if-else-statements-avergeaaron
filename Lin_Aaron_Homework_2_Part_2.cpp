// Aaron Lin
// 10/01/2024
// Homework 2 - Part 1

#include <iostream>

using namespace std;

//beginning of code
int main() 
{
    double score, min, max, total, ftotal; //variables
    int judge = 1; //set judge to 1
    total = 0; //set total to 0

    cout << "\nInput judge " << judge << " score:\n-> "; //judge 1 score
    cin >> score; //user input judge 1 score

    min = max = total = score; // set the total, min, and max to current score

    while(judge < 6) //runs code repeatedly until judge < 6
    {   
        judge = judge + 1; //adds 1  to judge
        cout << "\nInput judge " << judge << " score:\n-> "; //judge 2-6 score
        cin >> score; //user input judge 2-6 score

        total = total + score; //adding all the judges score

        if (score > max) //if score is greater than the current max
            max = score; //replace the current max with the new score

        if (score < min) //if score is less than the current min
            min = score; //replace the current min with the new score

    }

    ftotal = (total - (min + max))/4; //removes the lowest and highest score to get the 4 score between them then average it and make it as the final total

    cout << "\nThe final score for this group during the hackathon is " << ftotal << endl; //print The final score for this group during the hackathon is and the final total

    return 0;
}
/*
Input judge 1 score:
-> 1

Input judge 2 score:
-> 2

Input judge 3 score:
-> 3

Input judge 4 score:
-> 4

Input judge 5 score:
-> 5

Input judge 6 score:
-> 6

The final score for this group during the hackathon is 3.5
*/