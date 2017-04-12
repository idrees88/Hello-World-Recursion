//
//  main.cpp
//  Hello World Recusrion
//
//  Created by Eddie on 4/12/17.
//  Copyright © 2017 Idrees Ashraf. All rights reserved.
//

#include <iostream>

using namespace std;

void printHelloWorld(int numberOfTimes) {
    if (numberOfTimes == 0) {
        return;
    }
    
    cout<<"Hello World"<<"\n\n";
    
    printHelloWorld(numberOfTimes-1);
    
}

int fibonacci(int inputNumber) {
    if (inputNumber == 0 || inputNumber == 1) {
        return 1;
    }
    
    int fib = 0;
    
    fib = fib + fibonacci(inputNumber-1) + fibonacci(inputNumber-2);
    
    return fib;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int fib = fibonacci(5);
    cout<<"Fib: "<<fib<<"\n";
    
    //printHelloWorld(10);
    return 0;
}


