#include <iostream>
#include <cmath>
using namespace std;
int main (){
    char name[15];
    char adress[15];
    cout<< "Enter your name"<<endl;
    cin.get(name,20).get();// получить строку, второй гет не закнчивает программу, если введен \0
    cout<< "Enter your adress"<<endl;
    cin.get(adress,15);// получить строку


    cout << "Your name is " << name <<",and your adress is "<<adress<<endl;
    return 0;
}