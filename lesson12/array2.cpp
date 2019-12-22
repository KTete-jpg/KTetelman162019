#include <iostream>
#include <cmath>
using namespace std;
int main ()
{ const int number = 10;
  int arr[number];
  cout<<endl;
  int count = sizeof(arr)/sizeof(arr[0]);
  for (int i = 0; i<count; i++)
  {  arr[i]=i*2;// превращение в четное число
  //if (i%2==0)/ /проверка на четность
  //arr[i]=i;

   cout<<arr[i]*arr[i]<<endl;//возведение в квадрат в1
    //cout<<pow(arr[i],2)<<endl;//возведение в квадрат в2 - хуже и медленный вариант
}
cout<<endl;// пустая строка
  return 0;