#include <iostream>
#include <stdio.h>
#include "chp4ex7.h"

using namespace std;

int main(){
    //cout << "Initiating \"main.cpp\" Execution..." << endl;

    string operation;
    string operand1, operand2;

    //cout << "\nTesting 1..." << endl;

    cin >> operand1;
    cin >> operand2;
    cin >> operation;

    //cout << "\nTesting 2..." << endl;


    calculator1(operand1, operand2, operation);

    return 0;
}