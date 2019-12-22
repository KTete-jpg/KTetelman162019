#include<iostream>
using namespace std;
int  getValueFromUser ();// прототип функции
int main ()
{
 const short COUNT =  getValueFromUser ();
 int arr[COUNT];

 for (int index = 0; index < COUNT; index++ ){
     int arr[index]= 0;

 }
 return 0;
}
int getValueFromUser () {
    int x = 0;
    cout << "Enter your integer: ";
    cin >> x;
    return x;
}