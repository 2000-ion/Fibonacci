#include <iostream>
#include <chrono>
#include "fibonacci.h"

using namespace std;



int main() {
    int a;
    cout << "Introdu numarul pentru fibonacci recursiv: ";
    cin >> a;
    auto t1 = std::chrono::high_resolution_clock::now();
    cout << fibRecursiv(a) << endl;
    auto t2 = std::chrono::high_resolution_clock::now();
    long duration = std::chrono::duration_cast<std::chrono::microseconds>(t2 - t1).count();
    cout << "Time: " << duration << " microseconds" << endl;

   
    cout << "Introdu numarul pentru fibonacci loop: ";
    cin >> a;
    t1 = std::chrono::high_resolution_clock::now();
    cout << fibLoop(a) << endl;
    t2 = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::microseconds>(t2 - t1).count();
    cout << "Time: " << duration << " microseconds" << endl;
   
    cout << "Introdu numarul pentru fibonacci formula: ";
    cin >> a;
    t1 = std::chrono::high_resolution_clock::now();
    cout << fibFormula(a) << endl;
    t2 = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::microseconds>(t2 - t1).count();
    cout << "Time: " << duration << " microseconds" << endl;

  

   
}