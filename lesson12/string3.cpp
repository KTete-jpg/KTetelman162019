#include <iostream>
#include <cmath>
using namespace std;
int main (){
    char name[15];
    int age =0;
    cout<< "Enter your name"<<endl;
    cin.getline(name,20);// получить строку
    cout<< "Enter your age"<<endl;
    cin>>age;

    cout << "Your name is " << name <<",and your age is "<<age<<" years old."<<endl;
    return 0;
}