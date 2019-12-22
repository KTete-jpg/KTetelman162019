#include <iostream>

using namespace std;

int getValueFromUser () {
    int x = 0;
    cout << "Enter your data: ";
    cin >> x;
    return x;
}
int main (void) {
    int a =  getValueFromUser();
    int b =   getValueFromUser();
    cout << "a+b"<<a+b<< endl;
}
