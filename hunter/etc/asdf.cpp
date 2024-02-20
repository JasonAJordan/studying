
// Bonnie Lei
// bonnie.lei49@myhunter.cuny.edu
// Course: CSCI 135
// Instructor: Tong Yi
// Assignment: Project 1

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
    // declare variables
    char operators[] = {'+', '-', '*', '/', '%'};
    int s = sizeof(operators) / sizeof(operators[0]); // 5/1=5
    int idx = rand() % 5;
    int num1, num2, ans, questions;
    char sign;
    double percent, corrects = 0.0;

    cout << "Enter the total number of questions to ask: ";
    cin >> questions;

    while(questions <= 0){
        cout << "The number of questions cannot be zero or negative. Re-enter: ";
        cin >> questions;
    }

    for(int i = 1; i <= questions; i++){
        num1 = rand()%10;
        sign = operators[idx];
        if(sign == '+'){
            num2 = rand()%10;
            ans = num1 + num2;
        } else if(sign == '-'){
            num2 = rand()%10;
            ans = num1 - num2;
        } else if(sign == '*'){
            num2 = rand()%10;
            ans = num1 * num2;
        } else if(sign == '/'){
            num2 = 1 + rand()%9;
            ans = num1 / num2;
        } else {
            num2 = 1 + rand()%9;
            ans = num1 % num2;
        }

        string inputs;
        cout << "(" << i << ") what is " << num1 << " " << sign << " " << num2 << "? ";
        cin >> inputs;
        int input = stoi(inputs);
        
        // compare user input and answer
        if(input == ans){
            cout << "true" << endl;
            corrects++;
        } else {
            cout << "false" << endl;
        }
    }

    // cout << corrects << " " << questions << endl;
    percent = (corrects*100.0 / questions);
    cout << "percentage correct: " << percent << "%" << endl;

    cout << "letter grade: ";
    if(percent >= 90){
        cout << 'A' << endl;
    } else if(percent >= 80){
        cout << 'B' << endl;
    } else if(percent >= 70){
        cout << 'C' << endl;
    } else if(percent >= 60){
        cout << 'D' << endl;
    } else {
        cout << 'F' << endl;
    }

    return 0;
}