#ifndef STRUCT_HPP
#define STRUCT_HPP
#include <cstring>
#include<vector>
using namespace std;
typedef struct
{ string name;
 string surname;
 string petronimik;
 int age;
 date date_of_birth;
 e_mail mail;
 property your_property;
 bool married;
 enum children {
 ZERO;
 ONE;
 TWO;
 TREE;
 FOUR;
 };
 adress your_address;
 money your_money;
 credit your_credit;
 }data_bank;
typedef struct {
    int day;
    int month;
    int year;
} date;
typedef struct {
    string post;
} e_mail;
vector<string>property;
typedef struct {
    int home_number;
    string street;
    int flat_number;
    int post_index;
    string city;
    string country;
} address;
typedef struct {
int amounte;
char valute;
} money;
typedef struct {
    int value;
    int persent;
} credit;
#endif
