#include<iostream>
using namespace std;
int getValueFromUser(){

    int a = 0; // инициализировали переменную
    cout << "Enter your data: "; // подсказка
    cin >> a;//приминаем данные
    return a; // возврат данных
}

 main (void) {
 int a=getValueFromUser();//Реализация функции номер 1
    if (a>=0 and a<=255){
    int t=0;
    int d=1;
    int x = a;
    while(x)
    {
        t+=(x%2)*d;
        x=x/2;
        d=d*10;

    }
    cout<<t<<endl;
}
return 0;
}
