
#include <iostream>

using namespace std;

int getValueFromUser () { //Эта часть кода вводит данные.
    int x = 0; // инициализировали переменную
    cout << "Enter your data: "; // подсказка
    cin >> x;//приминаем данные
    return x; // возврат данных
}

int main (void) {
    int a =getValueFromUser();//Реализация функции номер 1
    if (a>=0 and a<=10 && a!=5){
     cout<< a*10 << endl;//если вводиться число больше 10  не равно 5,то выводиться число, умноженное на 10
   } else {
     cout<<" Enter your data again" <<endl; //иначе выводиться повторный запрос
   }
 return 0;
}
