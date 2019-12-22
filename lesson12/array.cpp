#include <iostream>
#include <cstring>
using namespace std;
int main ()
{ const int number = 10;// лучше задать количество элементов массива через переменную
  int arr[number];
  //cout << sizeof(arr)<< endl;
  int count = sizeof(arr)/sizeof(arr[0]);
  for (int i = 0; i<count; i++)// size of умножает на единицу хранения.работает на все единицы, его переписать в пременную. Умножение занимает меньше памяти, чем деление.
  {  arr[i]=i;// инициализация массива index=i
    cout<<arr[i]<<endl;
}
  return 0;
}