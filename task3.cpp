
#include <iostream>

using namespace std;

int getValueFromUser () { //Эта часть кода вводит данные.
    int x = 0; // инициализировали переменную
    cout << "Enter your data: "; // подсказка
    cin >> x;//приминаем данные
    return x; // возврат данных
}

int main (void) {

    if (x>=0 and x<=255){
    int x=0, t=0;
    int x=getValueFromUser();//Реализация функции номер 1
    while(x)
    {
        x=x/2;
        t=x%2;
        cout<<t;
    }
    cout<<x;
    cout<<endl;
    } else {
     cout<<" Enter your data again" <<endl; //иначе выводиться повторный запрос
   }
 return 0;
}