#include <cstdlib>
#include <iostream>

using namespace std;
#include <iostream>
#include <cstdlib>
#include <ctime>


int main() {

    int numQuestions;
    cout << "Enter the total number of questions to ask: " << endl;
    cin >> numQuestions;
    while (numQuestions <= 0) {
        cout << "The number of questions cannot be zero or negative. Re-enter: " << endl;
        cin >> numQuestions;
    }
    int correct = 0;

    for (int i = 1; i <= numQuestions; i++) {
        
         //Get the operator
        int index = rand() % 5;
        char op[] = {'+', '-', '*', '/', '%'};
        //Get the 2 numbers
        int first_num = rand() % 10;
        int second_num;

        char randop = op[index];

        if (randop == '/' || randop == '%') {
            second_num = rand() % 9 +1;
        }else {
            second_num = rand() % 10;
        }

        //Send user the problem
        int answer;
        cout << "What is : " << first_num << randop << second_num << "?" << endl;
        cin >> answer;
        if (randop == '+') {
            if (first_num + second_num == answer) {
                cout << "true";
                correct += 1;
            }else {
                cout << "false";
            }
        }else if (randop == '-') {
            if (first_num - second_num == answer) {
                cout << "true";
                correct += 1;
            }else {
                cout << "false";
            }
        }else if (randop == '*') {
            if (first_num * second_num == answer) {
                cout << "true";
                correct += 1;
            }else {
                cout << "false";
            }
        }else if (randop == '/') {
            if (first_num / second_num == answer) {
                cout << "true";
                correct += 1;
            }else {
                cout << "false";
            }
        }else {
            if (first_num % second_num == answer) {
                cout << "true";
                correct += 1;
            }else {
                cout << "false";
            }
        }
        cout << endl;
    }
    double percent = double(correct) / numQuestions*100;
    cout << "percentage correct: " << percent << "%\n" << "letter grade: ";
    if (percent >= 90) {
        cout << "A";
    }else if (percent >= 80) {
        cout << "B";
    }else if (percent >= 70) {
        cout << "C";
    }else if (percent >= 60) {
        cout << "D";
    }else {
        cout << "F";
    }

}
// int main() {
//   int OPERATORS[5] = {'+', '-', '*', '/', '%'};
//   int questions, randomIndex, firstNumber, secondNumber, result, userAnswer,
//       correctAnswers = 0;
//   float percentage;
//   char randomOperator, grade;

//   cout << "Enter the total number of questions to ask: ";
//   cin >> questions;

//   while (questions <= 0) {
//     cout << "The number of questions cannot be zero or negative. Re-enter: ";
//     cin >> questions;
//   }

//   for (int i = 0; i < questions; i++) {
//     randomIndex = rand() % 5;
//     firstNumber = rand() % 10;
//     randomOperator = OPERATORS[randomIndex];

//     if (randomOperator == '/' || randomOperator == '%') {
//       secondNumber = rand() % 9 + 1;
//     } else {
//       secondNumber = rand() % 10;
//     }

//     result = firstNumber;
//     if (randomOperator == '+')
//       result += secondNumber;
//     else if (randomOperator == '-')
//       result -= secondNumber;
//     else if (randomOperator == '*')
//       result *= secondNumber;
//     else if (randomOperator == '/')
//       result /= secondNumber;
//     else
//       result %= secondNumber;

//     cout << endl << "(" << i + 1 << ") ";
//     cout << "what is " << firstNumber << randomOperator << secondNumber << "? ";
//     cin >> userAnswer;

//     if (userAnswer == result) {
//       cout << "true" << endl;
//       correctAnswers++;
//     } else {
//       cout << "false" << endl;
//     }
//   }

//   percentage = correctAnswers * 100.0 / questions;
//   if (percentage >= 90)
//     grade = 'A';
//   else if (percentage >= 80)
//     grade = 'B';
//   else if (percentage >= 70)
//     grade = 'C';
//   else if (percentage >= 60)
//     grade = 'D';
//   else
//     grade = 'F';

//   cout << endl << "percentage correct: " << percentage << "%" << endl;
//   cout << "letter grade: " << grade << endl;

//   return 0;
// }

