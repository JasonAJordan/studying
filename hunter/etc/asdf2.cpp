

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int questions = 0;
    int correct = 0;
    double percentage;
    char grade;

    cout << "Enter the total number of questions to ask: ";
    cin >> questions;

    while (questions < 1){
        cout << "The number of questions cannot be zero or negative. Re-enter: ";
        cin >> questions;
    }

    char ops[5] ={'+', '-', '*', '/', '%'};
    srand(time(NULL));

    for (int i = 0; i < questions; i +=1){
        int ranNum = rand() % 5;
        char op = ops[ranNum];

        int numOne = rand() % 10;
        int numTwo;
        int res;
        int user;

        if (op == '/' || op == '%'){
            numTwo = (rand() % 9) + 1;
        }else{
            numTwo = rand() % 10;
        }

        if (op == '+'){
            res = numOne + numTwo;
        }
        if (op == '-'){
            res = numOne - numTwo;
        }
        if (op == '*'){
            res = numOne * numTwo;
        }
        if (op == '/'){
            res = numOne / numTwo;
        }
        if (op == '%'){
            res = numOne % numTwo;
        }

        cout << "what is " << numOne << " " << op << " " << numTwo << "? ";
        cin >> user;
        if (user == res){
            correct +=1;
    }
    cout << boolalpha << (user == res) << endl;
    }

    //Final Results
    percentage = (correct * 100.0/questions);
    cout << "percentage correct: " << percentage << "%" << endl;
    
    if (percentage >= 90){
        grade = 'A';
    }else if (percentage >= 80)
    {
        grade = 'B';
    }else if (percentage >= 70)
    {
        grade = 'C';
    }else if (percentage >= 60)
    {
        grade = 'D';
    }else{
        grade = 'F';
    }
    
    cout << "letter grade: " << grade;
    return 0;
}