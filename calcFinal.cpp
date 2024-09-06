#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;

double num1;
double num2;
char op;
string input;
string history = "";
bool parseInput();

void calculate(){
    cout << " " << endl;
    switch(op){
    case '+':
    cout << "Answer: " << num1 + num2 << endl;
    history = history + to_string(num1) + " + " + to_string(num2) + " = " + to_string(num1+num2) + "\n";
    break;
    
    case '-':
    cout << "Answer: " << num1 - num2 << endl;
    history = history + to_string(num1) + " - " + to_string(num2) + " = " + to_string(num1-num2) + "\n";
    break;
    
    case '*':
    cout << "Answer: " << num1 * num2 << endl;
    history = history + to_string(num1) + " * " + to_string(num2) + " = " + to_string(num1*num2) + "\n";
    break;
    
    case '/':
    cout << "Answer: " << num1 / num2 << endl;
    history = history + to_string(num1) + " / " + to_string(num2) + " = " + to_string(num1/num2) + "\n";
    break;
    
    case '^':
    cout << "Answer: " << pow(num1, num2) << endl;
    history = history + to_string(num1) + " ^ " + to_string(num2) + " = " + to_string(pow(num1, num2)) + "\n";
    break;
    
    case 'r':
    cout << "Answer: " << pow(num1, (1/num2)) << endl;
    history = history + to_string(num1) + " r " + to_string(num2) + " = " + to_string(pow(num1, (1/num2))) + "\n";
    break;
    
    
    default:
    cout << "Not a valid operator" << endl;
    break;
    }
    cout << " " << endl;
}

int main(void){
    cout << "Nerd, imagine using a calculator" << endl;
    while (1 == 1){
    cout << "Operators: +, -, *, /, ^, r (root), end, history " << endl;
    cout << "Enter Equation: " << endl;
    getline(cin, input);
    if (input == "end"){break;}
    if (input == "history"){
        cout << " " << endl;
        cout << "History: " << endl;
        cout << history << endl;
    }
    else{
    if (parseInput()){
        calculate();
    }
    else{ cout << endl;cout << "Bozo, can't use a calulator properly" << endl;}
}
    }
    return 0;
}

bool parseInput(){
    istringstream iss(input);
    if (iss >> num1 >> op >> num2){
        return true;
    }
    return false;
}

