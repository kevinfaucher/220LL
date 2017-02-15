/* 
 * File:   main.cpp
 * Author: Kevin Faucher
 *
 * Created on February 12, 2017, 7:41 PM
 */

#include <cstdlib>
#include <iostream>
//testing github upload
using namespace std;
/*
 * 
 */
int num;

int isPrime(int num);
int loopTable(int n);

int main() {
    std::cout << "Hello World!\n"; //Coding Problem 1
    isPrime(11);
    loopTable(10);
}

/*
 Problem 2
 * Takes an integer and checks to see if it is a prime number
 */
int isPrime(int num) {
    int i = 2;
    while (i <= (num - 1)) {
        if (num % i == 0) {
            cout << ("It's not a prime number");
            break;
        } else {
            cout << ("It's a prime number");
            break;
        }
        i++;
        //
    }
}

/*
 Problem 3
 * Takes an integer and prints the multiplication table
 */
int loopTable(int n) {
    for (int i = 1; i <= 12; ++i) {
        cout << n << " * " << i << " = " << n * i << endl;
    }

    return 0;
}