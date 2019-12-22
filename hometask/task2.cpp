#include<iostream>
using namespace std;
char getValueFromUser(){
    const int number = 60;
    char a = [number]; // инициализировали переменную
    cout << "Enter your data: "; // подсказка
    cin >> a;//приминаем данные
    return a; // возврат данных
}

 main (void) {
 char a = getValueFromUser();//Реализация функции номер 1
 int count = sizeof(a)/sizeof(arr[0]);
  for (int i = 0; i<count; i++)// size of умножает на единицу хранения.работает на все единицы, его переписать в пременную. Умножение занимает меньше памяти, чем деление.
  {  a[i]=i;// инициализация массива index=i
    cout<<a[i]<<endl;
}
 /*   int t=0;
    int i=i^0;
    int x = a;
    while(i<x)
    {
        t+=(x/10)*(i)+(x%10)*(i-1);
        x=x/10;
        i=2^i;
        i++;

    }
    cout<<t<<endl;
}
return 0;
}
*/