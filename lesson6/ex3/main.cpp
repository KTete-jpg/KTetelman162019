#include <iostream>
#include "calculate.hpp"
#include "add.hpp"
using namespace std;

#define COUNT 1000// КОНСТАНТНАЯ ПЕРЕМЕННАЯ

int main (void) {

    cout << add (COUNT,4) << endl;
    cout << multiply (1,4) << endl;
    cout << difference (1,4) << endl;
    cout << division (1,4) << endl;
    return 0;
}