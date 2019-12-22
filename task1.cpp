
#include <iostream>

using namespace std;

int getValueFromUser () { //Эта часть кода вводит данные.
    int x = 0; // инициализировали переменную
    cout << "Enter your data: "; // подсказка
    cin >> x;//приминаем данные
    return x; // возврат данных
}

int main (void) {
    int a =  getValueFromUser();//Реализация функции номер 1
    if (a==0 or a==1) {
     cout<<"You picked 0 or 1"<<endl;//если введен 0 или 1, выводится "You picked 0 or 1"
    }
    else {
     cout<<" Итог"<<endl; //если число не ноль или 1, выводиться "Итог".
}
return 0;
}

