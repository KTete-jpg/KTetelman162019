#ifndef CALCULATE_HPP//IF NOT DEFIND - ЕСЛИ НЕОПРЕДЕЛЕНИЕ
#include <iostream>
using namespace std;
#define CALCULATE_HPP// ЗАДАТЬ УНИКАЛЬНОЕ ОПРЕДЕЛЕНИЕ(DEFINITION)
#pragma once // команда, чтобы в линке не было дубликатов


#ifndef PRINT
cout <<"Not print"<<endl;
int add (int a, int b) {
    return a+b;
}
int multiply (int a, int b) {
    return a*b;
}
int division (int a, int b) {
    return a/b;
}
int difference (int a, int b) {
    return a-b;
}

#endif//закрывающий