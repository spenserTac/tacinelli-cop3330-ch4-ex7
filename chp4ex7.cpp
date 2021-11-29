#include <iostream>
#include <stdio.h>
#include "chp4ex7.h"

using namespace std;

//int main(){
//void calculator1(std::string operand1, std::string operand2, std::string operation);

int calculator1(string operand1, string operand2, string operation){
    //cout << "\nInitiating \"chp4ex7.cpp\" Execution..." << endl;

    //string operation;
    //string operand1, operand2;
    int o1, o2;
    float result;
    
    if(operand1 == "0" ||operand1 ==  "zero" || operand1 == "Zero"){
        o1 = 0;
    }
    else if(operand1 == "1" ||operand1 ==  "one" ||operand1 ==  "One"){
        o1 = 1;
    }
    else if(operand1 == "2" ||operand1 ==  "two" ||operand1 ==  "Two"){
        o1 = 2;
    }
    else if(operand1 == "3" || operand1 == "three" || operand1 == "Three"){
        o1 = 3;
    }
    else if(operand1 == "4" || operand1 == "four" ||operand1 ==  "Four"){
        o1 = 4;
    }
    else if(operand1 == "5" || operand1 == "five" || operand1 == "Five"){
        o1 = 5;
    }
    else if(operand1 == "6" || operand1 == "six" || operand1 == "Six"){
        o1 = 6;
    }
    else if(operand1 == "7" || operand1 == "seven" || operand1 == "Seven"){
        o1 = 7;
    }
    else if(operand1 == "8" || operand1 == "eight" || operand1 == "Eight"){
        o1 = 8;
    }
    else if(operand1 == "9" || operand1 == "nine" || operand1 == "Nine"){
        o1 = 9;
    }
    else{
        cout << "invalid input for first operator";
        return 0;
    }

    if(operand2 == "0" || operand2 == "zero" || operand2 == "Zero"){
        o2 = 0;
    }
    else if(operand2 == "1" || operand2 == "one" || operand2 == "One"){
        o2 = 1;
    }
    else if(operand2 == "2" || operand2 == "two" || operand2 == "Two"){
        o2 = 2;
    }
    else if(operand2 == "3" || operand2 == "three" || operand2 == "Three"){
        o2 = 3;
    }
    else if(operand2 == "4" || operand2 == "four" || operand2 == "Four"){
        o2 = 4;
    }
    else if(operand2 == "5" || operand2 == "five" || operand2 == "Five"){
        o2 = 5;
    }
    else if(operand2 == "6" || operand2 == "six" || operand2 == "Six"){
        o2 = 6;
    }
    else if(operand2 == "7" || operand2 == "seven" || operand2 == "Seven"){
        o2 = 7;
    }
    else if(operand2 == "8" || operand2 == "eight" || operand2 == "Eight"){
        o2 = 8;
    }
    else if(operand2 == "9" || operand2 == "nine" || operand2 == "Nine"){
        o2 = 9;
    }
    else{
        cout << "invalid input for second operator";
        return 0;
    }

    if(operation == "+"){
        result = o1 + o2;
        cout << result;
        cout << "\n";
    }
    else if(operation == "-"){
        result = o1 - o2;
        cout << result;
        cout << "\n";
    }
    else if(operation == "*"){
        result = o1 * o2;
        cout << result;
        cout << "\n";
    }
    else if(operation == "/"){
        result = o1 / o2;
        cout << result;
        cout << "\n";
    }

    return 0;
}